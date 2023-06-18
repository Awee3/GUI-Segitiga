#include"include/MainFrame.hpp"
#include <wx/wx.h>
#include <iostream>
#include <string>
#include <vector>
#include <math.h>

#include "include/point2d.hpp"
#include "include/triangles.hpp"

using namespace std;

MainFrame::MainFrame(const wxString& title): wxFrame(nullptr,wxID_ANY,title){
    wxPanel* panel = new wxPanel(this);
    wxStaticText* staticText = new wxStaticText(panel,wxID_ANY,"TRIANGLE ANALYZER",wxPoint(380,50));
    wxButton* button = new wxButton(panel, wxID_ANY, "Calculate", wxPoint(350,500), wxSize(200,50)); 
    wxBoxSizer* sizer = new wxBoxSizer(wxVERTICAL);
    button->Bind(wxEVT_BUTTON, &MainFrame::OnButtonClicked, this);
    vector<Triangle> triangles;

        float x, y, z;
        x1TextCtrl = new wxTextCtrl(panel, wxID_ANY, "X1", wxPoint(270,295), wxSize(100,30), wxALIGN_CENTER_HORIZONTAL);
        y1TextCtrl = new wxTextCtrl(panel, wxID_ANY, "Y1", wxPoint(380,295), wxSize(100,30), wxALIGN_CENTER_HORIZONTAL);
        z1TextCtrl = new wxTextCtrl(panel, wxID_ANY, "Z1", wxPoint(490,295), wxSize(100,30), wxALIGN_CENTER_HORIZONTAL);
        
        x2TextCtrl = new wxTextCtrl(panel, wxID_ANY, "X2", wxPoint(270,350), wxSize(100,30), wxALIGN_CENTER_HORIZONTAL);
        y2TextCtrl = new wxTextCtrl(panel, wxID_ANY, "Y2", wxPoint(380,350), wxSize(100,30), wxALIGN_CENTER_HORIZONTAL);
        z2TextCtrl = new wxTextCtrl(panel, wxID_ANY, "Z2", wxPoint(490,350), wxSize(100,30), wxALIGN_CENTER_HORIZONTAL);
        

        x3TextCtrl = new wxTextCtrl(panel, wxID_ANY, "X3", wxPoint(270,405), wxSize(100,30), wxALIGN_CENTER_HORIZONTAL);
        y3TextCtrl = new wxTextCtrl(panel, wxID_ANY, "Y3", wxPoint(380,405), wxSize(100,30), wxALIGN_CENTER_HORIZONTAL);
        z3TextCtrl = new wxTextCtrl(panel, wxID_ANY, "Z3", wxPoint(490,405), wxSize(100,30), wxALIGN_CENTER_HORIZONTAL);
           
}

void MainFrame::OnButtonClicked(wxCommandEvent& evt){
    vector<Triangle> triangles;
    float x1 = stof(x1TextCtrl->GetValue().ToStdString());
    float y1 = stof(y1TextCtrl->GetValue().ToStdString());
    float z1 = stof(z1TextCtrl->GetValue().ToStdString());
    Point2D t1(x1, y1, z1);
    float x2 = stof(x2TextCtrl->GetValue().ToStdString());
    float y2 = stof(y2TextCtrl->GetValue().ToStdString());
    float z2 = stof(z2TextCtrl->GetValue().ToStdString());
    Point2D t2(x2, y2, z2);
    float x3 = stof(x3TextCtrl->GetValue().ToStdString());
    float y3 = stof(y3TextCtrl->GetValue().ToStdString());
    float z3 = stof(z3TextCtrl->GetValue().ToStdString());
    Point2D t3(x3, y3, z3);
    Triangle triangle(t1, t2, t3);
    triangles.push_back(triangle);
    wxString str = wxString::Format("JENIS SEGITIGA : %s", triangle.TriangleType());
    wxMessageDialog dialog(this, str, "Result", wxOK | wxICON_INFORMATION);
    dialog.ShowModal();
}
