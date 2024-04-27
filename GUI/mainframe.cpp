#include "mainframe.h"
#include <wx/wx.h>
#include <wx/textctrl.h>


mainframe::mainframe(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);
	wxButton* Add = new wxButton(panel, wxID_ANY, "Add Task", wxPoint(350, 25));
	wxButton* Show = new wxButton(panel, wxID_ANY, "Show a Task", wxPoint(450, 25));

	wxStaticText* Task = new wxStaticText(panel, wxID_ANY, "Task Details", wxPoint(25, 25), wxSize(125, 250));
	wxTextCtrl* readOnlyTextCtrl = new wxTextCtrl(panel, wxID_ANY,
		"Initial content that can be programmatically changed but not user-edited.",
		wxPoint(25, 50), wxSize(300, 250), wxTE_READONLY | wxTE_MULTILINE | wxTE_PASSWORD);
}
