#include "MyFrame.h"
#include "main.h"

IMPLEMENT_APP(MyApp)//Implementing MyApp

bool MyApp::OnInit()
{
    //Creating a frame named Hello world
    MyFrame *frame = new MyFrame("Hello world!",wxPoint(500,250),wxSize(450,340));
    frame->Show(true);

    return true;
}