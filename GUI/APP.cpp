#include "APP.h"
#include "mainframe.h"
#include <wx/wx.h>
#include <wx/textctrl.h>
#include <wx/icon.h>


wxIMPLEMENT_APP(APP);
bool APP::OnInit() {
	mainframe* mainFrame = new mainframe("Task Manager GUI");
	mainFrame->SetClientSize(800, 500);
	mainFrame->Center();
	mainFrame->Show();
	return true;
}
