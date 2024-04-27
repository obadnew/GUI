#include "APP.h"
#include "mainframe.h"
#include <wx/wx.h>
#include <wx/textctrl.h>


wxIMPLEMENT_APP(APP);
bool APP::OnInit() {
	mainframe* mainFrame = new mainframe("this is my first GUI");
	mainFrame->SetClientSize(800, 500);
	mainFrame->Center();
	mainFrame->Show();
	return true;
}
