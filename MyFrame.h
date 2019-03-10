#include<wx/wx.h>

class MyFrame : public wxFrame//MyFrame class is inherited from wxFrame
{
    public:
        MyFrame(const wxString &title, const wxPoint& pos, const wxSize& size);//Constructor

        void OnExit(wxCommandEvent &event);//Prototyped OnExit Function 
        void OnAbout(wxCommandEvent &event);//Prototyped OnAbout Function
        void OnHello(wxCommandEvent &event);//Prototyped OnHello Function
        void OnSubscribe(wxCommandEvent &event);//Prototyped OnSubscribe Function
        
};



const int ID_Hello = 1;//Id for OnHello function
const int ID_Subscribe = 2;//Id for OnSubscribe function