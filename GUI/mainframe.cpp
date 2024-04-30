#include "mainframe.h"
#include <wx/wx.h>
#include <wx/textctrl.h>
#include <wx/datectrl.h>
#include <wx/icon.h>


mainframe::mainframe(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this);
	wxButton* Add = new wxButton(panel, wxID_ANY, "Add Task", wxPoint(500, 310), wxSize(150, -1));
	wxButton* Show = new wxButton(panel, wxID_ANY, "Show a Task", wxPoint(25, 310), wxSize(150, -1));
	wxButton* Delete = new wxButton(panel, wxID_ANY, "Delete a Task", wxPoint(25, 350), wxSize(150, -1));
	wxButton* Completed = new wxButton(panel, wxID_ANY, "Check Task as Completed", wxPoint(25, 390), wxSize(150, -1));


	wxStaticText* Task = new wxStaticText(panel, wxID_ANY, "Task Details", wxPoint(25, 25), wxSize(125, 250));
	wxTextCtrl* readOnlyTextCtrl = new wxTextCtrl(panel, wxID_ANY,
		"here where task details will be shown",
		wxPoint(25, 50), wxSize(300, 230), wxTE_READONLY | wxTE_MULTILINE | wxTE_PASSWORD);



	wxStaticText* Task_Priority = new wxStaticText(panel, wxID_ANY, "Priority", wxPoint(500, 90), wxSize(125, -1));
	wxArrayString choices_1;
	choices_1.Add("Low");
	choices_1.Add("Moderate");
	choices_1.Add("High");
	wxChoice* choice = new wxChoice(panel, wxID_ANY, wxPoint(500, 110), wxSize(135, -1), choices_1);
	choice->Select(0);



	wxStaticText* Task_Type = new wxStaticText(panel, wxID_ANY, "Category", wxPoint(500, 160), wxSize(125, -1));
	wxArrayString choices_2;
	choices_2.Add("College");
	choices_2.Add("Work");
	choices_2.Add("House");
	choices_2.Add("Family");
	choices_2.Add("Hobbies");
	choices_2.Add("Friends");
	choices_2.Add("Personal Time");
	wxChoice* choice_T = new wxChoice(panel, wxID_ANY, wxPoint(500, 180), wxSize(150, -1), choices_2);
	choice_T->Select(0);


	wxStaticText* Task_Date = new wxStaticText(panel, wxID_ANY, "Date", wxPoint(500, 230), wxSize(125, -1));
	wxDatePickerCtrl* datePicker = new wxDatePickerCtrl(panel, wxID_ANY, wxDefaultDateTime, wxPoint(500, 250), wxSize(150, -1), wxDP_DEFAULT | wxDP_DROPDOWN);



	wxStaticText* Task_Des = new wxStaticText(panel, wxID_ANY, "Description", wxPoint(500, 25), wxSize(125, -1));
	wxTextCtrl* Description = new wxTextCtrl(panel, wxID_ANY, "Please Enter Task Description", wxPoint(500, 45), wxSize(250, -1));



	wxStaticText* Task_Choice = new wxStaticText(panel, wxID_ANY, "Available Tasks", wxPoint(200,290), wxSize(125, -1));
	wxArrayString choices_3;
	choices_3.Add("Task 1");
	choices_3.Add("Task 2");
	choices_3.Add("Task 3");
	wxChoice* choice_Task = new wxChoice(panel, wxID_ANY, wxPoint(200, 310), wxSize(135, -1), choices_3);
	choice_Task->Select(0);

	wxIcon icon;
	icon.LoadFile("ico_Task.ico", wxBITMAP_TYPE_ICO);
	this->SetIcon(icon);

}
