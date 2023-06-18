#ifndef MAINFRAME_HPP
#define MAINFRAME_HPP

#include<wx/wx.h>
class MainFrame : public wxFrame{
    public :
    MainFrame(const wxString& tittle);
    private :
    wxTextCtrl* x1TextCtrl;
    wxTextCtrl* y1TextCtrl;
    wxTextCtrl* z1TextCtrl;
    wxTextCtrl* x2TextCtrl;
    wxTextCtrl* y2TextCtrl;
    wxTextCtrl* z2TextCtrl;
    wxTextCtrl* x3TextCtrl;
    wxTextCtrl* y3TextCtrl;
    wxTextCtrl* z3TextCtrl;
    void OnButtonClicked(wxCommandEvent& evt);
    void OnTextCtrlChanged(wxCommandEvent& evt);
};
#endif 