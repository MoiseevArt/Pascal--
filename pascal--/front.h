#ifndef FRONT_H
#define FRONT_H

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/stc/stc.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/frame.h>

class MyFrame5 : public wxFrame
{
private:
    wxStyledTextCtrl* m_scintilla2;
    wxPanel* m_panel2;
    wxStaticText* m_staticText11; // Изменил тип с forward_declare на wxStaticText
    wxButton* m_button1;
    wxPanel* m_panel3;
    wxStaticText* m_staticText10;

protected:
    void OnRunButtonClicked(wxCommandEvent& event); // Добавлено объявление обработчика событий

public:
    MyFrame5(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(700, 500), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);
    ~MyFrame5();
};

#endif // FRONT_H
