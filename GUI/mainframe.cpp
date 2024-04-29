#include "mainframe.h"
#include <wx/wx.h>
#include <wx/textctrl.h>
#include <wx/datectrl.h>


mainframe::mainframe(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);
	wxButton* Add = new wxButton(panel, wxID_ANY, "Add Task", wxPoint(350, 25));
	wxButton* Show = new wxButton(panel, wxID_ANY, "Show a Task", wxPoint(450, 25));

	wxStaticText* Task = new wxStaticText(panel, wxID_ANY, "Task Details", wxPoint(25, 25), wxSize(125, 250));
	wxTextCtrl* readOnlyTextCtrl = new wxTextCtrl(panel, wxID_ANY,
		"here where task details will be shown",
		wxPoint(25, 50), wxSize(300, 250), wxTE_READONLY | wxTE_MULTILINE | wxTE_PASSWORD);
	wxArrayString choices_1;
	choices_1.Add("Low");
	choices_1.Add("Moderate");
	choices_1.Add("High");

	wxChoice* choice = new wxChoice(panel, wxID_ANY, wxPoint(450, 150), wxSize(70, -1), choices_1);
	choice->Select(0);
	wxStaticText* Task_Priority = new wxStaticText(panel, wxID_ANY, "Priority", wxPoint(450, 135), wxSize(125, 250));



	wxArrayString choices_2;
	choices_2.Add("College");
	choices_2.Add("Work");
	choices_2.Add("House");
	choices_2.Add("Family");
	choices_2.Add("Hobbies");
	choices_2.Add("Friends");
	choices_2.Add("Personal Time");

	wxChoice* choice_T = new wxChoice(panel, wxID_ANY, wxPoint(450, 200), wxSize(120, -1), choices_2);
	choice_T->Select(0);
	wxStaticText* Task_Type = new wxStaticText(panel, wxID_ANY, "Category", wxPoint(450, 185), wxSize(125, 250));



	wxDatePickerCtrl* datePicker = new wxDatePickerCtrl(panel, wxID_ANY, wxDefaultDateTime, wxPoint(450, 250), wxSize(150, -1), wxDP_DEFAULT | wxDP_DROPDOWN);
	wxStaticText* Task_Date = new wxStaticText(panel, wxID_ANY, "Date", wxPoint(450, 235), wxSize(125, 250));
}
