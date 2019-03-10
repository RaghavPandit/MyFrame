#include "MyFrame.h"//Including MyFrame.h

//Body of MyFrame constructor

MyFrame::MyFrame(const wxString &title, const wxPoint& pos, const wxSize& size)
    :wxFrame(NULL , wxID_ANY , title , pos,size)
{

    //Creating a wxMenu for Files

    wxMenu *menufile = new wxMenu;

    //Appending hello to the File menu

    menufile->Append(ID_Hello,"Hello...\tctrl-H","Help string show");

    //Connecting Hello to the OnHello function

    Connect(ID_Hello,wxEVT_COMMAND_MENU_SELECTED,wxCommandEventHandler(MyFrame::OnHello));

    menufile->AppendSeparator(); //Adding a Separator...

    //Appending Exit into the File menu and giving it id of wxID_EXIT

    menufile->Append(wxID_EXIT,"Exit");

    //Connecting wxID_EXIT with OnExit function
    Connect(wxID_EXIT,wxEVT_COMMAND_MENU_SELECTED,wxCommandEventHandler(MyFrame::OnExit));

    //Adding a subscribe option to the File menu Giving it ID_Subscribe
    //Also Passing a Helping text "Subscription info"
    menufile->Append(ID_Subscribe,"&Subscribe...\tctrl+S","Subscription info");

    //Connecting ID_Subscribe with OnSubscribe function.

    Connect(ID_Subscribe,wxEVT_COMMAND_MENU_SELECTED,wxCommandEventHandler(MyFrame::OnSubscribe));

    //Creating another menu Help as menuHelp

    wxMenu *menuHelp = new wxMenu;

    //Adding About option to the menu
    //Giving it id of wxID_ABOUT
    menuHelp->Append(wxID_ABOUT,"&About...\tctrl+A");

    //Connecting wxID_ABOUT with OnAbout function.

    Connect(wxID_ABOUT,wxEVT_COMMAND_MENU_SELECTED,wxCommandEventHandler(MyFrame::OnAbout));

    //Creating a menubar.

    wxMenuBar *menuBar = new wxMenuBar;

    //Adding Files Menu to the menubar

    menuBar->Append(menufile,"File");

    //Adding Help Menu to the menubar

    menuBar->Append(menuHelp,"Help");
    SetMenuBar(menuBar);//Setting menubar

    CreateStatusBar();//Creating a statusbar

    SetStatusText("WeAreProgrammers");//Default text for the statusbar

}

void MyFrame::OnExit(wxCommandEvent &event)
{
    Close(true);//Closes the window
}

void MyFrame::OnAbout(wxCommandEvent &event)
{
    //Creating a messagebox for About...
    wxMessageBox("This is a wxWidgets application","About Hello world",wxOK | wxICON_INFORMATION);

}

void MyFrame::OnHello(wxCommandEvent &event)
{
    //Creating a log message for Hello...
    wxLogMessage("Hello friends I am Raghav Pandit , I made this application with wxWidgets");
}

void MyFrame::OnSubscribe(wxCommandEvent &event)
{
    //Creating a messagebox for Subscription...
    wxMessageBox("Hey friends welcome to my channel,I am Raghav pandit and Please subscribe to my channel to watch more video like this..... Thanks for watching this video","Subscribe!",wxOK | wxICON_INFORMATION);
}

