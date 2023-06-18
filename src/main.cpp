#include"include/App.hpp"
#include"include/MainFrame.hpp"
#include<wx/wx.h>

wxIMPLEMENT_APP(App);

bool App::OnInit(){
    MainFrame* mainFrame = new MainFrame("GUI SEGITIGA");
    mainFrame->Show();
    mainFrame->SetClientSize(900,600);
    mainFrame->Center();
    return true;
};