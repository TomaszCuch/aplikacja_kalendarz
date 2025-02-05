/***************************************************************
 * Name:      kalendarzMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Tomasz Cuch, Aleksander Bzowski ()
 * Created:   2024-12-16
 * Copyright: Tomasz Cuch, Aleksander Bzowski ()
 * License:
 **************************************************************/

#include "kalendarzMain.h"
#include <wx/msgdlg.h>

#undef _
#define _(s) wxString::FromUTF8(s)


//(*InternalHeaders(kalendarzDialog)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(kalendarzDialog)
const long kalendarzDialog::ID_STATICTEXT1 = wxNewId();
const long kalendarzDialog::ID_STATICTEXT2 = wxNewId();
const long kalendarzDialog::ID_STATICTEXT3 = wxNewId();
const long kalendarzDialog::ID_STATICTEXT4 = wxNewId();
const long kalendarzDialog::ID_STATICTEXT5 = wxNewId();
const long kalendarzDialog::ID_STATICTEXT6 = wxNewId();
const long kalendarzDialog::ID_STATICTEXT7 = wxNewId();
const long kalendarzDialog::ID_STATICTEXT8 = wxNewId();
const long kalendarzDialog::ID_STATICTEXT9 = wxNewId();
const long kalendarzDialog::ID_STATICTEXT10 = wxNewId();
const long kalendarzDialog::ID_BITMAPBUTTON1 = wxNewId();
const long kalendarzDialog::ID_BUTTON3 = wxNewId();
const long kalendarzDialog::ID_BUTTON4 = wxNewId();
const long kalendarzDialog::ID_STATICTEXT16 = wxNewId();
const long kalendarzDialog::ID_STATICTEXT17 = wxNewId();
const long kalendarzDialog::ID_STATICBITMAP1 = wxNewId();
const long kalendarzDialog::ID_STATICTEXT11 = wxNewId();
const long kalendarzDialog::ID_STATICBITMAP2 = wxNewId();
const long kalendarzDialog::ID_STATICTEXT12 = wxNewId();
const long kalendarzDialog::ID_STATICBITMAP3 = wxNewId();
const long kalendarzDialog::ID_STATICTEXT13 = wxNewId();
const long kalendarzDialog::ID_STATICBITMAP4 = wxNewId();
const long kalendarzDialog::ID_STATICTEXT14 = wxNewId();
const long kalendarzDialog::ID_STATICBITMAP5 = wxNewId();
const long kalendarzDialog::ID_STATICTEXT15 = wxNewId();
const long kalendarzDialog::ID_BUTTON1 = wxNewId();
const long kalendarzDialog::ID_BUTTON2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(kalendarzDialog,wxDialog)
    //(*EventTable(kalendarzDialog)
    //*)
END_EVENT_TABLE()

kalendarzDialog::kalendarzDialog(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(kalendarzDialog)
    wxBoxSizer* BoxSizer3;
    wxBoxSizer* BoxSizer5;
    wxBoxSizer* BoxSizer6;
    wxBoxSizer* BoxSizer7;
    wxFlexGridSizer* FlexGridSizer2;

    Create(parent, wxID_ANY, _("Kalendarz 2025"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxCLOSE_BOX|wxMAXIMIZE_BOX|wxMINIMIZE_BOX, _T("wxID_ANY"));
    wxFont thisFont(42,wxFONTFAMILY_SCRIPT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("CommercialScript BT"),wxFONTENCODING_DEFAULT);
    SetFont(thisFont);
    BoxSizer1 = new wxBoxSizer(wxVERTICAL);
    BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    BoxSizer5 = new wxBoxSizer(wxVERTICAL);
    BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Styczeń"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT1"));
    wxFont StaticText1Font(42,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    BoxSizer4->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer5->Add(BoxSizer4, 0, wxALL|wxEXPAND, 5);
    GridSizer1 = new wxGridSizer(7, 7, 0, 0);
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Pn"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    wxFont StaticText2Font(20,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    StaticText2->SetFont(StaticText2Font);
    GridSizer1->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Wt"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    wxFont StaticText3Font(20,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    StaticText3->SetFont(StaticText3Font);
    GridSizer1->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Śr"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    wxFont StaticText4Font(20,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    StaticText4->SetFont(StaticText4Font);
    GridSizer1->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Cz"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    wxFont StaticText5Font(20,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    StaticText5->SetFont(StaticText5Font);
    GridSizer1->Add(StaticText5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("Pt"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
    wxFont StaticText6Font(20,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    StaticText6->SetFont(StaticText6Font);
    GridSizer1->Add(StaticText6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText7 = new wxStaticText(this, ID_STATICTEXT7, _("Sb"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
    StaticText7->SetForegroundColour(wxColour(247,68,0));
    wxFont StaticText7Font(20,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    StaticText7->SetFont(StaticText7Font);
    GridSizer1->Add(StaticText7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText8 = new wxStaticText(this, ID_STATICTEXT8, _("N"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
    StaticText8->SetForegroundColour(wxColour(193,0,0));
    wxFont StaticText8Font(20,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    StaticText8->SetFont(StaticText8Font);
    GridSizer1->Add(StaticText8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText9 = new wxStaticText(this, ID_STATICTEXT9, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
    GridSizer1->Add(StaticText9, 1, wxALL|wxEXPAND, 5);
    StaticText10 = new wxStaticText(this, ID_STATICTEXT10, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT10"));
    GridSizer1->Add(StaticText10, 1, wxALL|wxEXPAND, 5);
    BitmapButton1 = new wxBitmapButton(this, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T("img\\1swieto.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
    GridSizer1->Add(BitmapButton1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer5->Add(GridSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
    Button3 = new wxButton(this, ID_BUTTON3, _("◀ poprzedni miesiąc"), wxDefaultPosition, wxSize(290,50), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    wxFont Button3Font(18,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    Button3->SetFont(Button3Font);
    BoxSizer7->Add(Button3, 1, wxALL, 5);
    Button4 = new wxButton(this, ID_BUTTON4, _("następny miesiąc ▶"), wxDefaultPosition, wxSize(290,50), 0, wxDefaultValidator, _T("ID_BUTTON4"));
    wxFont Button4Font(18,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    Button4->SetFont(Button4Font);
    BoxSizer7->Add(Button4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer5->Add(BoxSizer7, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer3->Add(BoxSizer5, 1, wxALL, 5);
    BoxSizer2 = new wxBoxSizer(wxVERTICAL);
    BoxSizer2->Add(-1,160,0, wxALL|wxEXPAND, 5);
    box_dzisiaj = new wxBoxSizer(wxHORIZONTAL);
    text_dzis = new wxStaticText(this, ID_STATICTEXT16, _("Dziś jest:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT16"));
    wxFont text_dzisFont(24,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    text_dzis->SetFont(text_dzisFont);
    box_dzisiaj->Add(text_dzis, 0, wxALL, 5);
    text_dzis_dzien = new wxStaticText(this, ID_STATICTEXT17, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT17"));
    wxFont text_dzis_dzienFont(24,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    text_dzis_dzien->SetFont(text_dzis_dzienFont);
    box_dzisiaj->Add(text_dzis_dzien, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer2->Add(box_dzisiaj, 0, wxLEFT|wxRIGHT|wxEXPAND, 15);
    FlexGridSizer2 = new wxFlexGridSizer(6, 2, 5, 0);
    FlexGridSizer2->Add(-1,20,1, wxALL|wxEXPAND, 5);
    FlexGridSizer2->Add(-1,20,1, wxALL|wxEXPAND, 5);
    StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("img\\czarny.jpg"))), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
    FlexGridSizer2->Add(StaticBitmap1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    info_zwykly = new wxStaticText(this, ID_STATICTEXT11, _("zwykły dzień"), wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT, _T("ID_STATICTEXT11"));
    wxFont info_zwyklyFont(20,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    info_zwykly->SetFont(info_zwyklyFont);
    FlexGridSizer2->Add(info_zwykly, 1, wxALL|wxEXPAND, 5);
    StaticBitmap2 = new wxStaticBitmap(this, ID_STATICBITMAP2, wxBitmap(wxImage(_T("img\\swieto.jpg"))), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP2"));
    FlexGridSizer2->Add(StaticBitmap2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    info_swieta = new wxStaticText(this, ID_STATICTEXT12, _("święto wolne od pracy"), wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT, _T("ID_STATICTEXT12"));
    wxFont info_swietaFont(20,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    info_swieta->SetFont(info_swietaFont);
    FlexGridSizer2->Add(info_swieta, 1, wxALL|wxEXPAND, 5);
    StaticBitmap3 = new wxStaticBitmap(this, ID_STATICBITMAP3, wxBitmap(wxImage(_T("img\\inneswieto.jpg"))), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP3"));
    FlexGridSizer2->Add(StaticBitmap3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    info_inne = new wxStaticText(this, ID_STATICTEXT13, _("inne święto/ważna data"), wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT, _T("ID_STATICTEXT13"));
    wxFont info_inneFont(20,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    info_inne->SetFont(info_inneFont);
    FlexGridSizer2->Add(info_inne, 1, wxALL|wxEXPAND, 5);
    StaticBitmap4 = new wxStaticBitmap(this, ID_STATICBITMAP4, wxBitmap(wxImage(_T("img\\wlasne_bez.png"))), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP4"));
    FlexGridSizer2->Add(StaticBitmap4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    info_wlasne = new wxStaticText(this, ID_STATICTEXT14, _("własne wydarzenie"), wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT, _T("ID_STATICTEXT14"));
    wxFont info_wlasneFont(20,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    info_wlasne->SetFont(info_wlasneFont);
    FlexGridSizer2->Add(info_wlasne, 1, wxALL|wxEXPAND, 5);
    StaticBitmap5 = new wxStaticBitmap(this, ID_STATICBITMAP5, wxBitmap(wxImage(_T("img\\wlasne.png"))), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP5"));
    FlexGridSizer2->Add(StaticBitmap5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    info_wlasne_priorytet = new wxStaticText(this, ID_STATICTEXT15, _("własne wydarzenie (priorytet)"), wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT, _T("ID_STATICTEXT15"));
    wxFont info_wlasne_priorytetFont(20,wxFONTFAMILY_SWISS,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    info_wlasne_priorytet->SetFont(info_wlasne_priorytetFont);
    FlexGridSizer2->Add(info_wlasne_priorytet, 1, wxALL|wxEXPAND, 5);
    BoxSizer2->Add(FlexGridSizer2, 0, wxLEFT|wxRIGHT|wxEXPAND, 10);
    BoxSizer2->Add(-1,-1,1, wxALL|wxEXPAND, 5);
    BoxSizer6 = new wxBoxSizer(wxVERTICAL);
    Button1 = new wxButton(this, ID_BUTTON1, _("zapisz stan do pliku ▼"), wxDefaultPosition, wxSize(290,50), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    wxFont Button1Font(16,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    Button1->SetFont(Button1Font);
    BoxSizer6->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button2 = new wxButton(this, ID_BUTTON2, _("wczytaj stan z pliku ▲"), wxDefaultPosition, wxSize(290,50), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    wxFont Button2Font(16,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    Button2->SetFont(Button2Font);
    BoxSizer6->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer2->Add(BoxSizer6, 0, wxALL|wxEXPAND, 5);
    BoxSizer3->Add(BoxSizer2, 0, wxALL|wxEXPAND, 5);
    BoxSizer1->Add(BoxSizer3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(BoxSizer1);
    BoxSizer1->Fit(this);
    BoxSizer1->SetSizeHints(this);
    Center();

    Connect(ID_BITMAPBUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kalendarzDialog::OnClick);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kalendarzDialog::OnPoprzedniMiesiac);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kalendarzDialog::OnNastepnyMiesiac);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kalendarzDialog::ZapiszStan);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kalendarzDialog::WczytajStan);
    //*)

    SetIcon(wxICON(aaaa));


    GridSizer1->SetHGap(-6);
    GridSizer1->SetVGap(2);
    GridSizer1->Layout();

    BoxSizer5->SetMinSize(700, 780);


    wxString folderAppData = wxStandardPaths::Get().GetUserConfigDir(); // Zwraca ścieżkę do AppData\Roaming
    wxFileName pelnaSciezka(folderAppData, "zapis_kalendarza.txt"); // Łączy folder z nazwą pliku
    sciezkaPliku = pelnaSciezka.GetFullPath(); // Pobiera pełną ścieżkę jako wxString


    // Aktualny dzień
    std::time_t now = std::time(nullptr);
    std::tm* localTime = std::localtime(&now);

    int rok = localTime->tm_year + 1900; // Dodaj 1900, bo rok jest liczony od 1900
    int dz = localTime->tm_mday;
    int miesiac = localTime->tm_mon + 1; // Dodaj 1, bo miesiące są indeksowane od 0


    miesiace[0] = "Styczeń";
    miesiace[1] = "Luty";
    miesiace[2] = "Marzec";
    miesiace[3] = "Kwiecień";
    miesiace[4] = "Maj";
    miesiace[5] = "Czerwiec";
    miesiace[6] = "Lipiec";
    miesiace[7] = "Sierpień";
    miesiace[8] = "Wrzesień";
    miesiace[9] = "Październik";
    miesiace[10] = "Listopad";
    miesiace[11] = "Grudzień";


    // wydarzenia w styczniu
    wydarzenia_styczen[0] = _("Nowy Rok" );
    wydarzenia_styczen[5] = _("Trzech Króli");
    wydarzenia_styczen[20] = _("Dzień Babci");
    wydarzenia_styczen[21] = _("Dzień Dziadka");

    // wydarzenia w lutym
    wydarzenia_luty[1] = _("Ofiarowanie Pańskie");
    wydarzenia_luty[13] = _("Walentynki");
    wydarzenia_luty[26] = _("Tłusty czwartek");

    // wydarzenia w marcu
    wydarzenia_marzec[0] = _("Narodowy Dzień Pamięci Żołnierzy Wyklętych");
    wydarzenia_marzec[3] = _("Ostatki");
    wydarzenia_marzec[4] = _("Popielec");
    wydarzenia_marzec[7] = _("Dzień Kobiet");
    wydarzenia_marzec[9] = _("Dzień Mężczyzn");
    wydarzenia_marzec[19] = _("Początek astronomicznej wiosny");
    wydarzenia_marzec[29] = _("Zmiana czasu z zimowego na letni");

    // wydarzenia w kwietniu
    wydarzenia_kwiecien[0] = _("Prima aprilis");
    wydarzenia_kwiecien[12] = _("Niedziela Palmowa");
    wydarzenia_kwiecien[16] = _("Wielki Czwartek");
    wydarzenia_kwiecien[17] = _("Wielki Piątek");
    wydarzenia_kwiecien[18] = _("Wielka Sobota");
    wydarzenia_kwiecien[19] = _("Wielkanoc");
    wydarzenia_kwiecien[20] = _("Poniedziałek Wielkanocny");
    wydarzenia_kwiecien[21] = _("Dzień Ziemi");
    wydarzenia_kwiecien[26] = _("Święto Bożego Miłosierdzia");

    // wydarzenia w maju
    wydarzenia_maj[0] = _("Święto Pracy");
    wydarzenia_maj[1] = _("Dzień Flagi Rzeczypospolitej Polskiej");
    wydarzenia_maj[2] = _("Święto Konstytucji 3 Maja");
    wydarzenia_maj[25] = _("Dzień Matki");

    // wydarzenia w czerwcu
    wydarzenia_czerwiec[0] = _("Dzień Dziecka");
    wydarzenia_czerwiec[7] = _("Zesłanie Ducha Świętego");
    wydarzenia_czerwiec[18] = _("Boże Ciało");
    wydarzenia_czerwiec[20] = _("Pierwszy Dzień Lata - najdłuższy dzień roku");
    wydarzenia_czerwiec[22] = _("Dzień Ojca");

    // wydarzenia w sierpniu
    wydarzenia_sierpien[0] = _("Narodowy Dzień Pamięci Powstania Warszawskiego");
    wydarzenia_sierpien[14] = _("Święto Wojska Polskiego, Wniebowzięcie Najświętszej Maryi Panny");
    wydarzenia_sierpien[30] = _("Dzień Solidarności i Wolności");

    // wydarzenia w wrześniu
    wydarzenia_wrzesien[21] = _("Początek Astronomicznej Jesieni");
    wydarzenia_wrzesien[29] = _("Dzień Chłopaka");

    // wydarzenia w październiku
    wydarzenia_pazdziernik[13] = _("Dzień Nauczyciela (Dzień Edukacji Narodowej)");
    wydarzenia_pazdziernik[25] = _("Zmiana czasu z letniego na zimowy");

    // wydarzenia w listopadzie
    wydarzenia_listopad[0] = _("Wszystkich Świętych");
    wydarzenia_listopad[1] = _("Dzień Zaduszny");
    wydarzenia_listopad[10] = _("Narodowe Święto Niepodległości");
    wydarzenia_listopad[28] = _("Andrzejki (w nocy z 29 na 30)");

    // wydarzenia w grudniu
    wydarzenia_grudzien[3] = _("Barbórka (Dzień Górnika, Naftowca i Gazownika)");
    wydarzenia_grudzien[5] = _("Dzień św. Mikołaja (Mikołajki)");
    wydarzenia_grudzien[20] = _("Początek astronomicznej zimy - najkrótszy dzień roku");
    wydarzenia_grudzien[23] = _("Wigilia Bożego Narodzenia");
    wydarzenia_grudzien[24] = _("Boże Narodzenie (pierwszy dzień)");
    wydarzenia_grudzien[25] = _("Boże Narodzenie (drugi dzień)");
    wydarzenia_grudzien[26] = _("Narodowy Dzień Zwycięskiego Powstania Wielkopolskiego");
    wydarzenia_grudzien[30] = _("Sylwester");


    styczen[0] = BitmapButton1;
    for (int i=1; i<=30; i++)
    {
        std::string sciezka_std = "img//" + std::to_string(i+1) + ".jpg";
        wxString sciezka = wxString::FromUTF8(sciezka_std);
        styczen[i] = new wxBitmapButton(this, wxNewId(), wxBitmap(wxImage(sciezka)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
        GridSizer1->Add(styczen[i], 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL);
        Connect(styczen[i]->GetId(), wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kalendarzDialog::OnClick);
    }
    styczen[5]->SetBitmap(wxImage(_T("img/6swieto.jpg")));
    styczen[20]->SetBitmap(wxImage(_T("img/21inneswieto.jpg")));
    styczen[21]->SetBitmap(wxImage(_T("img/22inneswieto.jpg")));

    for (int i=0; i<=30; i++)
    {
        dni_styczen[styczen[i]->GetId()] = i;
    }

    for (int i=0; i<28; i++)
    {
        std::string sciezka_std = "img//" + std::to_string(i+1) + ".jpg";
        wxString sciezka = wxString::FromUTF8(sciezka_std);
        luty[i] = new wxBitmapButton(this, wxNewId(), wxBitmap(wxImage(sciezka)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator);
        luty[i]->Hide();
    }
        luty[1]->SetBitmap(wxImage(_T("img/2inneswieto.jpg")));
        luty[13]->SetBitmap(wxImage(_T("img/14inneswieto.jpg")));
        luty[26]->SetBitmap(wxImage(_T("img/27inneswieto.jpg")));

    for (int i=0; i<31; i++)
    {
        std::string sciezka_std = "img//" + std::to_string(i+1) + ".jpg";
        wxString sciezka = wxString::FromUTF8(sciezka_std);
        marzec[i] = new wxBitmapButton(this, wxNewId(), wxBitmap(wxImage(sciezka)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator);
        marzec[i]->Hide();
    }
        marzec[0]->SetBitmap(wxImage(_T("img/1inneswieto.jpg")));
        marzec[3]->SetBitmap(wxImage(_T("img/4inneswieto.jpg")));
        marzec[4]->SetBitmap(wxImage(_T("img/5inneswieto.jpg")));
        marzec[7]->SetBitmap(wxImage(_T("img/8inneswieto.jpg")));
        marzec[9]->SetBitmap(wxImage(_T("img/10inneswieto.jpg")));
        marzec[19]->SetBitmap(wxImage(_T("img/20inneswieto.jpg")));
        marzec[29]->SetBitmap(wxImage(_T("img/30inneswieto.jpg")));

    for (int i=0; i<30; i++)
    {
        std::string sciezka_std = "img//" + std::to_string(i+1) + ".jpg";
        wxString sciezka = wxString::FromUTF8(sciezka_std);
        kwiecien[i] = new wxBitmapButton(this, wxNewId(), wxBitmap(wxImage(sciezka)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator);
        kwiecien[i]->Hide();
    }
        kwiecien[0]->SetBitmap(wxImage(_T("img/1inneswieto.jpg")));
        kwiecien[12]->SetBitmap(wxImage(_T("img/13inneswieto.jpg")));
        kwiecien[16]->SetBitmap(wxImage(_T("img/17inneswieto.jpg")));
        kwiecien[17]->SetBitmap(wxImage(_T("img/18inneswieto.jpg")));
        kwiecien[18]->SetBitmap(wxImage(_T("img/19inneswieto.jpg")));
        kwiecien[19]->SetBitmap(wxImage(_T("img/20swieto.jpg")));
        kwiecien[20]->SetBitmap(wxImage(_T("img/21swieto.jpg")));
        kwiecien[21]->SetBitmap(wxImage(_T("img/22inneswieto.jpg")));
        kwiecien[26]->SetBitmap(wxImage(_T("img/27inneswieto.jpg")));

    for (int i=0; i<31; i++)
    {
        std::string sciezka_std = "img//" + std::to_string(i+1) + ".jpg";
        wxString sciezka = wxString::FromUTF8(sciezka_std);
        maj[i] = new wxBitmapButton(this, wxNewId(), wxBitmap(wxImage(sciezka)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator);
        maj[i]->Hide();
    }

        maj[0]->SetBitmap(wxImage(_T("img/1swieto.jpg")));
        maj[1]->SetBitmap(wxImage(_T("img/2inneswieto.jpg")));
        maj[2]->SetBitmap(wxImage(_T("img/3swieto.jpg")));
        maj[25]->SetBitmap(wxImage(_T("img/26inneswieto.jpg")));

    for (int i=0; i<30; i++)
    {
        std::string sciezka_std = "img//" + std::to_string(i+1) + ".jpg";
        wxString sciezka = wxString::FromUTF8(sciezka_std);
        czerwiec[i] = new wxBitmapButton(this, wxNewId(), wxBitmap(wxImage(sciezka)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator);
        czerwiec[i]->Hide();
    }

        czerwiec[0]->SetBitmap(wxImage(_T("img/1inneswieto.jpg")));
        czerwiec[7]->SetBitmap(wxImage(_T("img/8swieto.jpg")));
        czerwiec[18]->SetBitmap(wxImage(_T("img/19swieto.jpg")));
        czerwiec[20]->SetBitmap(wxImage(_T("img/21inneswieto.jpg")));
        czerwiec[22]->SetBitmap(wxImage(_T("img/23inneswieto.jpg")));

    for (int i=0; i<31; i++)
    {
        std::string sciezka_std = "img//" + std::to_string(i+1) + ".jpg";
        wxString sciezka = wxString::FromUTF8(sciezka_std);
        lipiec[i] = new wxBitmapButton(this, wxNewId(), wxBitmap(wxImage(sciezka)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator);
        lipiec[i]->Hide();
    }

    for (int i=0; i<31; i++)
    {
        std::string sciezka_std = "img//" + std::to_string(i+1) + ".jpg";
        wxString sciezka = wxString::FromUTF8(sciezka_std);
        sierpien[i] = new wxBitmapButton(this, wxNewId(), wxBitmap(wxImage(sciezka)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator);
        sierpien[i]->Hide();
    }

        sierpien[0]->SetBitmap(wxImage(_T("img/1inneswieto.jpg")));
        sierpien[14]->SetBitmap(wxImage(_T("img/15swieto.jpg")));
        sierpien[30]->SetBitmap(wxImage(_T("img/31inneswieto.jpg")));

    for (int i=0; i<30; i++)
    {
        std::string sciezka_std = "img//" + std::to_string(i+1) + ".jpg";
        wxString sciezka = wxString::FromUTF8(sciezka_std);
        wrzesien[i] = new wxBitmapButton(this, wxNewId(), wxBitmap(wxImage(sciezka)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator);
        wrzesien[i]->Hide();
    }

        wrzesien[21]->SetBitmap(wxImage(_T("img/22inneswieto.jpg")));
        wrzesien[29]->SetBitmap(wxImage(_T("img/30inneswieto.jpg")));

    for (int i=0; i<31; i++)
    {
        std::string sciezka_std = "img//" + std::to_string(i+1) + ".jpg";
        wxString sciezka = wxString::FromUTF8(sciezka_std);
        pazdziernik[i] = new wxBitmapButton(this, wxNewId(), wxBitmap(wxImage(sciezka)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator);
        pazdziernik[i]->Hide();
    }

        pazdziernik[13]->SetBitmap(wxImage(_T("img/14inneswieto.jpg")));
        pazdziernik[25]->SetBitmap(wxImage(_T("img/26inneswieto.jpg")));

    for (int i=0; i<30; i++)
    {
        std::string sciezka_std = "img//" + std::to_string(i+1) + ".jpg";
        wxString sciezka = wxString::FromUTF8(sciezka_std);
        listopad[i] = new wxBitmapButton(this, wxNewId(), wxBitmap(wxImage(sciezka)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator);
        listopad[i]->Hide();
    }

        listopad[0]->SetBitmap(wxImage(_T("img/1swieto.jpg")));
        listopad[1]->SetBitmap(wxImage(_T("img/2inneswieto.jpg")));
        listopad[10]->SetBitmap(wxImage(_T("img/11swieto.jpg")));
        listopad[28]->SetBitmap(wxImage(_T("img/29inneswieto.jpg")));

    for (int i=0; i<31; i++)
    {
        std::string sciezka_std = "img//" + std::to_string(i+1) + ".jpg";
        wxString sciezka = wxString::FromUTF8(sciezka_std);
        grudzien[i] = new wxBitmapButton(this, wxNewId(), wxBitmap(wxImage(sciezka)), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator);
        grudzien[i]->Hide();
    }

        grudzien[3]->SetBitmap(wxImage(_T("img/4inneswieto.jpg")));
        grudzien[5]->SetBitmap(wxImage(_T("img/6inneswieto.jpg")));
        grudzien[20]->SetBitmap(wxImage(_T("img/21inneswieto.jpg")));
        grudzien[23]->SetBitmap(wxImage(_T("img/24swieto.jpg")));
        grudzien[24]->SetBitmap(wxImage(_T("img/25swieto.jpg")));
        grudzien[25]->SetBitmap(wxImage(_T("img/26swieto.jpg")));
        grudzien[26]->SetBitmap(wxImage(_T("img/27inneswieto.jpg")));
        grudzien[30]->SetBitmap(wxImage(_T("img/31inneswieto.jpg")));


        if (rok == 2025)
        {
            std::string dzien_string = std::to_string(dz);
            if (miesiac == 1)
            {
                wxBitmap bitmapa = styczen[dz-1]->GetBitmap();

                text_dzis_dzien->SetLabel(dzien_string + _(" stycznia"));
                if (dz == 1 || dz == 6)
                {
                    text_dzis_dzien->SetForegroundColour(wxColour(63, 71, 204));
                    text_dzis_dzien->Refresh();
                    text_dzis_dzien->Update();
                }
                if (dz == 21 || dz == 22)
                {
                    text_dzis_dzien->SetForegroundColour(wxColour(36, 148, 185));
                    text_dzis_dzien->Refresh();
                    text_dzis_dzien->Update();
                }
            }
            if (miesiac == 2)
            {
                text_dzis_dzien->SetLabel(dzien_string + _(" lutego"));
                if (dz == 2 || dz == 14 || dz == 27)
                {
                    text_dzis_dzien->SetForegroundColour(wxColour(36, 148, 185));
                    text_dzis_dzien->Refresh();
                    text_dzis_dzien->Update();
                }
            }
            if (miesiac == 3)
            {
                text_dzis_dzien->SetLabel(dzien_string + _(" marca"));
                if (dz == 1 || dz == 4 || dz == 5 || dz == 8 || dz == 10 || dz == 20 || dz == 30)
                {
                    text_dzis_dzien->SetForegroundColour(wxColour(36, 148, 185));
                    text_dzis_dzien->Refresh();
                    text_dzis_dzien->Update();
                }
            }
            if (miesiac == 4)
            {
                text_dzis_dzien->SetLabel(dzien_string + _(" kwietnia"));
                if (dz == 20 || dz == 21)
                {
                    text_dzis_dzien->SetForegroundColour(wxColour(63, 71, 204));
                    text_dzis_dzien->Refresh();
                    text_dzis_dzien->Update();
                }
                if (dz == 1 || dz == 13 || dz == 17 || dz == 18 || dz == 19 || dz == 22 || dz == 27)
                {
                    text_dzis_dzien->SetForegroundColour(wxColour(36, 148, 185));
                    text_dzis_dzien->Refresh();
                    text_dzis_dzien->Update();
                }
            }
            if (miesiac == 5)
            {
                text_dzis_dzien->SetLabel(dzien_string + _(" maja"));
                if (dz == 1 || dz == 3)
                {
                    text_dzis_dzien->SetForegroundColour(wxColour(63, 71, 204));
                    text_dzis_dzien->Refresh();
                    text_dzis_dzien->Update();
                }
                if (dz == 2 || dz == 26)
                {
                    text_dzis_dzien->SetForegroundColour(wxColour(36, 148, 185));
                    text_dzis_dzien->Refresh();
                    text_dzis_dzien->Update();
                }
            }
            if (miesiac == 6)
            {
                text_dzis_dzien->SetLabel(dzien_string + _(" czerwca"));
                if (dz == 8 || dz == 19)
                {
                    text_dzis_dzien->SetForegroundColour(wxColour(63, 71, 204));
                    text_dzis_dzien->Refresh();
                    text_dzis_dzien->Update();
                }
                if (dz == 1 || dz == 21 || dz == 23)
                {
                    text_dzis_dzien->SetForegroundColour(wxColour(36, 148, 185));
                    text_dzis_dzien->Refresh();
                    text_dzis_dzien->Update();
                }
            }
            if (miesiac == 7)
            {
                text_dzis_dzien->SetLabel(dzien_string + _(" lipca"));
            }
            if (miesiac == 8)
            {
                text_dzis_dzien->SetLabel(dzien_string + _(" sierpnia"));
                if (dz == 15)
                {
                    text_dzis_dzien->SetForegroundColour(wxColour(63, 71, 204));
                    text_dzis_dzien->Refresh();
                    text_dzis_dzien->Update();
                }
                if (dz == 1 || dz == 31)
                {
                    text_dzis_dzien->SetForegroundColour(wxColour(36, 148, 185));
                    text_dzis_dzien->Refresh();
                    text_dzis_dzien->Update();
                }
            }
            if (miesiac == 9)
            {
                text_dzis_dzien->SetLabel(dzien_string + _(" września"));
                if (dz == 22 || dz == 30)
                {
                    text_dzis_dzien->SetForegroundColour(wxColour(36, 148, 185));
                    text_dzis_dzien->Refresh();
                    text_dzis_dzien->Update();
                }
            }
            if (miesiac == 10)
            {
                text_dzis_dzien->SetLabel(dzien_string + _(" października"));
                if (dz == 14 || dz == 26)
                {
                    text_dzis_dzien->SetForegroundColour(wxColour(36, 148, 185));
                    text_dzis_dzien->Refresh();
                    text_dzis_dzien->Update();
                }
            }
            if (miesiac == 11)
            {
                text_dzis_dzien->SetLabel(dzien_string + _(" listopada"));
                if (dz == 1 || dz == 11)
                {
                    text_dzis_dzien->SetForegroundColour(wxColour(63, 71, 204));
                    text_dzis_dzien->Refresh();
                    text_dzis_dzien->Update();
                }
                if (dz == 2 || dz == 29)
                {
                    text_dzis_dzien->SetForegroundColour(wxColour(36, 148, 185));
                    text_dzis_dzien->Refresh();
                    text_dzis_dzien->Update();
                }
            }
            if (miesiac == 12)
            {
                text_dzis_dzien->SetLabel(dzien_string + _(" grudnia"));
                if (dz == 24 || dz == 25 || dz == 26)
                {
                    text_dzis_dzien->SetForegroundColour(wxColour(63, 71, 204));
                    text_dzis_dzien->Refresh();
                    text_dzis_dzien->Update();
                }
                if (dz == 4 || dz == 6 || dz == 21 || dz == 27 || dz == 31)
                {
                    text_dzis_dzien->SetForegroundColour(wxColour(36, 148, 185));
                    text_dzis_dzien->Refresh();
                    text_dzis_dzien->Update();
                }
            }
        }
}

kalendarzDialog::~kalendarzDialog()
{
    //(*Destroy(kalendarzDialog)
    //*)
}



int liczbaDniWMiesiacu(const wxString& nazwaMiesiaca)
{
    std::map<wxString, int> dniWMiesiacu =
    {
        {_("Styczeń"), 31}, {"Luty", 28}, {"Marzec", 31}, {_("Kwiecień"), 30},
        {"Maj", 31}, {"Czerwiec", 30}, {"Lipiec", 31}, {_("Sierpień"), 31},
        {_("Wrzesień"), 30}, {_("Październik"), 31}, {_("Listopad"), 30}, {_("Grudzień"), 31}
    };
    auto it = dniWMiesiacu.find(nazwaMiesiaca);
    if (it != dniWMiesiacu.end()) return it->second;
}




void kalendarzDialog::Nastepny(wxWindow* parent)
{
    // Pobranie liczby dni w miesiącu
    wxString nazwaMiesiaca = StaticText1->GetLabel();
    liczbaPrzyciskow = liczbaDniWMiesiacu(nazwaMiesiaca);

    if (nazwaMiesiaca == _("Styczeń"))
    {
        StaticText9 = new wxStaticText(this, ID_STATICTEXT9, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
        StaticText10 = new wxStaticText(this, ID_STATICTEXT10, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT10"));
        GridSizer1->Add(StaticText9, 1, wxALL|wxEXPAND, 5);
        GridSizer1->Add(StaticText10, 1, wxALL|wxEXPAND, 5);

        for (int i=0; i<31; i++)
        {
            grudzien[i]->Hide();
            GridSizer1->Detach(grudzien[i]);
        }

        for (int i=0; i<liczbaPrzyciskow; i++)
        {
            styczen[i]->Show();
            GridSizer1->Add(styczen[i], 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL);
            Connect(styczen[i]->GetId(), wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kalendarzDialog::OnClick);
            dni_styczen[styczen[i]->GetId()] = i;
        }
    }
    if (nazwaMiesiaca == _("Luty"))
    {
        StaticText11 = new wxStaticText(this, wxNewId(), wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT11"));
        StaticText12 = new wxStaticText(this, wxNewId(), wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT12"));
        StaticText13 = new wxStaticText(this, wxNewId(), wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT13"));
        GridSizer1->Add(StaticText11, 1, wxALL|wxEXPAND, 5);
        GridSizer1->Add(StaticText12, 1, wxALL|wxEXPAND, 5);
        GridSizer1->Add(StaticText13, 1, wxALL|wxEXPAND, 5);

        for (int i=0; i<31; i++)
        {
            styczen[i]->Hide();
            GridSizer1->Detach(styczen[i]);
        }

        for (int i=0; i<liczbaPrzyciskow; i++)
        {
            luty[i]->Show();
            GridSizer1->Add(luty[i], 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL);
            Connect(luty[i]->GetId(), wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kalendarzDialog::OnClick);
            dni_luty[luty[i]->GetId()] = i;
        }
    }
    if (nazwaMiesiaca == _("Marzec"))
    {
        for (int i=0; i<28; i++)
        {
            luty[i]->Hide();
            GridSizer1->Detach(luty[i]);
        }

        for (int i=0; i<liczbaPrzyciskow; i++)
        {
            marzec[i]->Show();
            GridSizer1->Add(marzec[i], 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL);
            Connect(marzec[i]->GetId(), wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kalendarzDialog::OnClick);
            dni_marzec[marzec[i]->GetId()] = i;
        }
    }
    else if (nazwaMiesiaca == _("Kwiecień"))
    {
        StaticText13->Destroy();
        StaticText12->Destroy();
        StaticText11->Destroy();
        StaticText10->Destroy();

        for (int i=0; i<31; i++)
        {
            marzec[i]->Hide();
            GridSizer1->Detach(marzec[i]);
        }

        for (int i=0; i<liczbaPrzyciskow; i++)
        {
            kwiecien[i]->Show();
            GridSizer1->Add(kwiecien[i], 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL);
            Connect(kwiecien[i]->GetId(), wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kalendarzDialog::OnClick);
            dni_kwiecien[kwiecien[i]->GetId()] = i;
        }
    }
    if (nazwaMiesiaca == _("Maj"))
    {
        StaticText10 = new wxStaticText(this, ID_STATICTEXT10, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT10"));
        StaticText11 = new wxStaticText(this, ID_STATICTEXT11, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT11"));
        GridSizer1->Add(StaticText10);
        GridSizer1->Add(StaticText11);

        for (int i=0; i<30; i++)
        {
            kwiecien[i]->Hide();
            GridSizer1->Detach(kwiecien[i]);
        }

        for (int i=0; i<liczbaPrzyciskow; i++)
        {
            maj[i]->Show();
            GridSizer1->Add(maj[i], 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL);
            Connect(maj[i]->GetId(), wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kalendarzDialog::OnClick);
            dni_maj[maj[i]->GetId()] = i;
        }
    }
    if (nazwaMiesiaca == _("Czerwiec"))
    {
        StaticText12 = new wxStaticText(this, wxNewId(), wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT12"));
        StaticText13 = new wxStaticText(this, wxNewId(), wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT13"));
        StaticText14 = new wxStaticText(this, wxNewId(), wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT14"));
        GridSizer1->Add(StaticText12, 1, wxALL|wxEXPAND, 5);
        GridSizer1->Add(StaticText13, 1, wxALL|wxEXPAND, 5);
        GridSizer1->Add(StaticText14, 1, wxALL|wxEXPAND, 5);

        for (int i=0; i<31; i++)
        {
            maj[i]->Hide();
            GridSizer1->Detach(maj[i]);
        }

        for (int i=0; i<liczbaPrzyciskow; i++)
        {
            czerwiec[i]->Show();
            GridSizer1->Add(czerwiec[i], 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL);
            Connect(czerwiec[i]->GetId(), wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kalendarzDialog::OnClick);
            dni_czerwiec[czerwiec[i]->GetId()] = i;
        }
    }
    if (nazwaMiesiaca == _("Lipiec"))
    {
        StaticText14->Destroy();
        StaticText13->Destroy();
        StaticText12->Destroy();
        StaticText11->Destroy();
        StaticText10->Destroy();

        for (int i=0; i<30; i++)
        {
            czerwiec[i]->Hide();
            GridSizer1->Detach(czerwiec[i]);
        }

        for (int i=0; i<liczbaPrzyciskow; i++)
        {
            lipiec[i]->Show();
            GridSizer1->Add(lipiec[i], 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL);
            Connect(lipiec[i]->GetId(), wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kalendarzDialog::OnClick);
            dni_lipiec[lipiec[i]->GetId()] = i;
        }
    }
    if (nazwaMiesiaca == _("Sierpień"))
    {
        StaticText10 = new wxStaticText(this, ID_STATICTEXT10, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT10"));
        StaticText11 = new wxStaticText(this, ID_STATICTEXT11, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT11"));
        StaticText12 = new wxStaticText(this, wxNewId(), wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT12"));
        GridSizer1->Add(StaticText10);
        GridSizer1->Add(StaticText11);
        GridSizer1->Add(StaticText12);

        for (int i=0; i<31; i++)
        {
            lipiec[i]->Hide();
            GridSizer1->Detach(lipiec[i]);
        }

        for (int i=0; i<liczbaPrzyciskow; i++)
        {
            sierpien[i]->Show();
            GridSizer1->Add(sierpien[i], 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL);
            Connect(sierpien[i]->GetId(), wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kalendarzDialog::OnClick);
            dni_sierpien[sierpien[i]->GetId()] = i;
        }
    }
    if (nazwaMiesiaca == _("Wrzesień"))
    {
        StaticText12->Destroy();
        StaticText11->Destroy();
        StaticText10->Destroy();
        StaticText9->Destroy();

        for (int i=0; i<31; i++)
        {
            sierpien[i]->Hide();
            GridSizer1->Detach(sierpien[i]);
        }

        for (int i=0; i<liczbaPrzyciskow; i++)
        {
            wrzesien[i]->Show();
            GridSizer1->Add(wrzesien[i], 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL);
            Connect(wrzesien[i]->GetId(), wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kalendarzDialog::OnClick);
            dni_wrzesien[wrzesien[i]->GetId()] = i;
        }
    }
    if (nazwaMiesiaca == _("Październik"))
    {
        StaticText9 = new wxStaticText(this, ID_STATICTEXT9, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
        StaticText10 = new wxStaticText(this, ID_STATICTEXT10, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT10"));
        GridSizer1->Add(StaticText9, 1, wxALL|wxEXPAND, 5);
        GridSizer1->Add(StaticText10, 1, wxALL|wxEXPAND, 5);

        for (int i=0; i<30; i++)
        {
            wrzesien[i]->Hide();
            GridSizer1->Detach(wrzesien[i]);
        }

        for (int i=0; i<liczbaPrzyciskow; i++)
        {
            pazdziernik[i]->Show();
            GridSizer1->Add(pazdziernik[i], 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL);
            Connect(pazdziernik[i]->GetId(), wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kalendarzDialog::OnClick);
            dni_pazdziernik[pazdziernik[i]->GetId()] = i;
        }
    }
    if (nazwaMiesiaca == _("Listopad"))
    {
        StaticText11 = new wxStaticText(this, wxNewId(), wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT11"));
        StaticText12 = new wxStaticText(this, wxNewId(), wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT12"));
        StaticText13 = new wxStaticText(this, wxNewId(), wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT13"));
        GridSizer1->Add(StaticText11, 1, wxALL|wxEXPAND, 5);
        GridSizer1->Add(StaticText12, 1, wxALL|wxEXPAND, 5);
        GridSizer1->Add(StaticText13, 1, wxALL|wxEXPAND, 5);

        for (int i=0; i<31; i++)
        {
            pazdziernik[i]->Hide();
            GridSizer1->Detach(pazdziernik[i]);
        }

        for (int i=0; i<liczbaPrzyciskow; i++)
        {
            listopad[i]->Show();
            GridSizer1->Add(listopad[i], 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL);
            Connect(listopad[i]->GetId(), wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kalendarzDialog::OnClick);
            dni_listopad[listopad[i]->GetId()] = i;
        }
    }
    if (nazwaMiesiaca == _("Grudzień"))
    {
        StaticText13->Destroy();
        StaticText12->Destroy();
        StaticText11->Destroy();
        StaticText10->Destroy();
        StaticText9->Destroy();

        for (int i=0; i<30; i++)
        {
            listopad[i]->Hide();
            GridSizer1->Detach(listopad[i]);
        }

        for (int i=0; i<liczbaPrzyciskow; i++)
        {
            grudzien[i]->Show();
            GridSizer1->Add(grudzien[i], 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL);
            Connect(grudzien[i]->GetId(), wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kalendarzDialog::OnClick);
            dni_grudzien[grudzien[i]->GetId()] = i;
        }
    }

    GridSizer1->SetVGap(2);
    GridSizer1->SetHGap(4);
    parent->Layout(); // Odświeżenie układu
}



void kalendarzDialog::Poprzedni(wxWindow* parent)
{
    // Pobranie liczby dni w miesiącu
    wxString nazwaMiesiaca = StaticText1->GetLabel();
    liczbaPrzyciskow = liczbaDniWMiesiacu(nazwaMiesiaca);

    if (nazwaMiesiaca == _("Styczeń"))
    {
        StaticText13->Destroy();
        StaticText12->Destroy();
        StaticText11->Destroy();

        for (int i=0; i<28; i++)
        {
            luty[i]->Hide();
            GridSizer1->Detach(luty[i]);
        }

        for (int i=0; i<liczbaPrzyciskow; i++)
        {
            styczen[i]->Show();
            GridSizer1->Add(styczen[i], 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL);
            Connect(styczen[i]->GetId(), wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kalendarzDialog::OnClick);
            dni_styczen[styczen[i]->GetId()] = i;
        }
    }
    if (nazwaMiesiaca == _("Luty"))
    {
        for (int i=0; i<31; i++)
        {
            marzec[i]->Hide();
            GridSizer1->Detach(marzec[i]);
        }

        for (int i=0; i<liczbaPrzyciskow; i++)
        {
            luty[i]->Show();
            GridSizer1->Add(luty[i], 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL);
            Connect(luty[i]->GetId(), wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kalendarzDialog::OnClick);
            dni_luty[luty[i]->GetId()] = i;
        }
    }
    if (nazwaMiesiaca == _("Marzec"))
    {
        StaticText10 = new wxStaticText(this, wxNewId(), wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT10"));
        StaticText11 = new wxStaticText(this, wxNewId(), wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT11"));
        StaticText12 = new wxStaticText(this, wxNewId(), wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT12"));
        StaticText13 = new wxStaticText(this, wxNewId(), wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT13"));
        GridSizer1->Add(StaticText10, 1, wxALL|wxEXPAND, 5);
        GridSizer1->Add(StaticText11, 1, wxALL|wxEXPAND, 5);
        GridSizer1->Add(StaticText12, 1, wxALL|wxEXPAND, 5);
        GridSizer1->Add(StaticText13, 1, wxALL|wxEXPAND, 5);

        for (int i=0; i<30; i++)
        {
            kwiecien[i]->Hide();
            GridSizer1->Detach(kwiecien[i]);
        }

        for (int i=0; i<liczbaPrzyciskow; i++)
        {
            marzec[i]->Show();
            GridSizer1->Add(marzec[i], 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL);
            Connect(marzec[i]->GetId(), wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kalendarzDialog::OnClick);
            dni_marzec[marzec[i]->GetId()] = i;
        }
    }
    else if (nazwaMiesiaca == _("Kwiecień"))
    {
        StaticText11->Destroy();
        StaticText10->Destroy();

        for (int i=0; i<31; i++)
        {
            maj[i]->Hide();
            GridSizer1->Detach(maj[i]);
        }

        for (int i=0; i<liczbaPrzyciskow; i++)
        {
            kwiecien[i]->Show();
            GridSizer1->Add(kwiecien[i], 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL);
            Connect(kwiecien[i]->GetId(), wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kalendarzDialog::OnClick);
            dni_kwiecien[kwiecien[i]->GetId()] = i;
        }
    }
    if (nazwaMiesiaca == _("Maj"))
    {
        StaticText14->Destroy();
        StaticText13->Destroy();
        StaticText12->Destroy();

        for (int i=0; i<30; i++)
        {
            czerwiec[i]->Hide();
            GridSizer1->Detach(czerwiec[i]);
        }

        for (int i=0; i<liczbaPrzyciskow; i++)
        {
            maj[i]->Show();
            GridSizer1->Add(maj[i], 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL);
            Connect(maj[i]->GetId(), wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kalendarzDialog::OnClick);
            dni_maj[maj[i]->GetId()] = i;
        }
    }
    if (nazwaMiesiaca == _("Czerwiec"))
    {
        StaticText10 = new wxStaticText(this, wxNewId(), wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT10"));
        StaticText11 = new wxStaticText(this, wxNewId(), wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT11"));
        StaticText12 = new wxStaticText(this, wxNewId(), wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT12"));
        StaticText13 = new wxStaticText(this, wxNewId(), wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT13"));
        StaticText14 = new wxStaticText(this, wxNewId(), wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT14"));
        GridSizer1->Add(StaticText10, 1, wxALL|wxEXPAND, 5);
        GridSizer1->Add(StaticText11, 1, wxALL|wxEXPAND, 5);
        GridSizer1->Add(StaticText12, 1, wxALL|wxEXPAND, 5);
        GridSizer1->Add(StaticText13, 1, wxALL|wxEXPAND, 5);
        GridSizer1->Add(StaticText14, 1, wxALL|wxEXPAND, 5);

        for (int i=0; i<31; i++)
        {
            lipiec[i]->Hide();
            GridSizer1->Detach(lipiec[i]);
        }

        for (int i=0; i<liczbaPrzyciskow; i++)
        {
            czerwiec[i]->Show();
            GridSizer1->Add(czerwiec[i], 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL);
            Connect(czerwiec[i]->GetId(), wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kalendarzDialog::OnClick);
            dni_czerwiec[czerwiec[i]->GetId()] = i;
        }
    }
    if (nazwaMiesiaca == _("Lipiec"))
    {
        StaticText12->Destroy();
        StaticText11->Destroy();
        StaticText10->Destroy();

        for (int i=0; i<31; i++)
        {
            sierpien[i]->Hide();
            GridSizer1->Detach(sierpien[i]);
        }

        for (int i=0; i<liczbaPrzyciskow; i++)
        {
            lipiec[i]->Show();
            GridSizer1->Add(lipiec[i], 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL);
            Connect(lipiec[i]->GetId(), wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kalendarzDialog::OnClick);
            dni_lipiec[lipiec[i]->GetId()] = i;
        }
    }
    if (nazwaMiesiaca == _("Sierpień"))
    {
        StaticText9 = new wxStaticText(this, ID_STATICTEXT10, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
        StaticText10 = new wxStaticText(this, ID_STATICTEXT10, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT10"));
        StaticText11 = new wxStaticText(this, ID_STATICTEXT11, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT11"));
        StaticText12 = new wxStaticText(this, wxNewId(), wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT12"));
        GridSizer1->Add(StaticText9);
        GridSizer1->Add(StaticText10);
        GridSizer1->Add(StaticText11);
        GridSizer1->Add(StaticText12);

        for (int i=0; i<30; i++)
        {
            wrzesien[i]->Hide();
            GridSizer1->Detach(wrzesien[i]);
        }

        for (int i=0; i<liczbaPrzyciskow; i++)
        {
            sierpien[i]->Show();
            GridSizer1->Add(sierpien[i], 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL);
            Connect(sierpien[i]->GetId(), wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kalendarzDialog::OnClick);
            dni_sierpien[sierpien[i]->GetId()] = i;
        }
    }
    if (nazwaMiesiaca == _("Wrzesień"))
    {
        StaticText10->Destroy();
        StaticText9->Destroy();

        for (int i=0; i<31; i++)
        {
            pazdziernik[i]->Hide();
            GridSizer1->Detach(pazdziernik[i]);
        }

        for (int i=0; i<liczbaPrzyciskow; i++)
        {
            wrzesien[i]->Show();
            GridSizer1->Add(wrzesien[i], 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL);
            Connect(wrzesien[i]->GetId(), wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kalendarzDialog::OnClick);
            dni_wrzesien[wrzesien[i]->GetId()] = i;
        }
    }
    if (nazwaMiesiaca == _("Październik"))
    {
        StaticText13->Destroy();
        StaticText12->Destroy();
        StaticText11->Destroy();

        for (int i=0; i<30; i++)
        {
            listopad[i]->Hide();
            GridSizer1->Detach(listopad[i]);
        }

        for (int i=0; i<liczbaPrzyciskow; i++)
        {
            pazdziernik[i]->Show();
            GridSizer1->Add(pazdziernik[i], 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL);
            Connect(pazdziernik[i]->GetId(), wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kalendarzDialog::OnClick);
            dni_pazdziernik[pazdziernik[i]->GetId()] = i;
        }
    }
    if (nazwaMiesiaca == _("Listopad"))
    {
        StaticText9 = new wxStaticText(this, ID_STATICTEXT9, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
        StaticText10 = new wxStaticText(this, ID_STATICTEXT10, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT10"));
        StaticText11 = new wxStaticText(this, ID_STATICTEXT11, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT11"));
        StaticText12 = new wxStaticText(this, wxNewId(), wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT12"));
        StaticText13 = new wxStaticText(this, wxNewId(), wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT13"));
        GridSizer1->Add(StaticText9, 1, wxALL|wxEXPAND, 5);
        GridSizer1->Add(StaticText10, 1, wxALL|wxEXPAND, 5);
        GridSizer1->Add(StaticText11, 1, wxALL|wxEXPAND, 5);
        GridSizer1->Add(StaticText12, 1, wxALL|wxEXPAND, 5);
        GridSizer1->Add(StaticText13, 1, wxALL|wxEXPAND, 5);

        for (int i=0; i<31; i++)
        {
            grudzien[i]->Hide();
            GridSizer1->Detach(grudzien[i]);
        }

        for (int i=0; i<liczbaPrzyciskow; i++)
        {
            listopad[i]->Show();
            GridSizer1->Add(listopad[i], 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL);
            Connect(listopad[i]->GetId(), wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kalendarzDialog::OnClick);
            dni_listopad[listopad[i]->GetId()] = i;
        }
    }
    if (nazwaMiesiaca == _("Grudzień"))
    {
        StaticText10->Destroy();
        StaticText9->Destroy();

        for (int i=0; i<31; i++)
        {
            styczen[i]->Hide();
            GridSizer1->Detach(styczen[i]);
        }

        for (int i=0; i<liczbaPrzyciskow; i++)
        {
            grudzien[i]->Show();
            GridSizer1->Add(grudzien[i], 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL);
            Connect(grudzien[i]->GetId(), wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&kalendarzDialog::OnClick);
            dni_grudzien[grudzien[i]->GetId()] = i;
        }
    }

    GridSizer1->SetVGap(2);
    GridSizer1->SetHGap(4);
    parent->Layout();
}



int index = 0;
void kalendarzDialog::OnNastepnyMiesiac(wxCommandEvent& event)
{
    index = (index + 1) % 12;

    StaticText1->SetLabel(_(miesiace[index]));

    Nastepny(this);
}

void kalendarzDialog::OnPoprzedniMiesiac(wxCommandEvent& event)
{
    index = (index - 1 + 12) % 12;

    StaticText1->SetLabel(_(miesiace[index]));

    Poprzedni(this);
}


wxString mess;
int dzien;

void kalendarzDialog::OnClick(wxCommandEvent& event)
{
    wxString nazwaMiesiaca = StaticText1->GetLabel();
    int kolumna;

        wxBitmapButton* clickedButton = dynamic_cast<wxBitmapButton*>(event.GetEventObject());
        if (!clickedButton) return;

        auto& children = GridSizer1->GetChildren();
        for (size_t index = 0; index < children.size(); ++index)
        {
            wxSizerItem* item = children[index];
            if (item->GetWindow() == clickedButton)
            {
                int cols = GridSizer1->GetCols();
                int col = index % cols;
                kolumna = col+1;
                break;
            }
        }

    std::string dzien_tygodnia;

    if (kolumna == 1)
    {
        dzien_tygodnia = _("poniedziałek");
    }
    if (kolumna == 2)
    {
        dzien_tygodnia = _("wtorek");
    }
    if (kolumna == 3)
    {
        dzien_tygodnia = _("środa");
    }
    if (kolumna == 4)
    {
        dzien_tygodnia = _("czwartek");
    }
    if (kolumna == 5)
    {
        dzien_tygodnia = _("piątek");
    }
    if (kolumna == 6)
    {
        dzien_tygodnia = _("sobota");
    }
    if (kolumna == 7)
    {
        dzien_tygodnia = _("niedziela");
    }




    if (nazwaMiesiaca == _("Styczeń"))
    {
        dzien = dni_styczen[event.GetId()];
    }
    if (nazwaMiesiaca == _("Luty"))
    {
        dzien = dni_luty[event.GetId()];
    }
    if (nazwaMiesiaca == _("Marzec"))
    {
        dzien = dni_marzec[event.GetId()];
    }
    if (nazwaMiesiaca == _("Kwiecień"))
    {
        dzien = dni_kwiecien[event.GetId()];
    }
    if (nazwaMiesiaca == _("Maj"))
    {
        dzien = dni_maj[event.GetId()];
    }
    if (nazwaMiesiaca == _("Czerwiec"))
    {
        dzien = dni_czerwiec[event.GetId()];
    }
    if (nazwaMiesiaca == _("Lipiec"))
    {
        dzien = dni_lipiec[event.GetId()];
    }
    if (nazwaMiesiaca == _("Sierpień"))
    {
        dzien = dni_sierpien[event.GetId()];
    }
    if (nazwaMiesiaca == _("Wrzesień"))
    {
        dzien = dni_wrzesien[event.GetId()];
    }
    if (nazwaMiesiaca == _("Październik"))
    {
        dzien = dni_pazdziernik[event.GetId()];
    }
    if (nazwaMiesiaca == _("Listopad"))
    {
        dzien = dni_listopad[event.GetId()];
    }
    if (nazwaMiesiaca == _("Grudzień"))
    {
        dzien = dni_grudzien[event.GetId()];
    }


    mess << dzien+1;
    mess << " ";
    mess << nazwaMiesiaca;
    mess << ", ";
    mess << dzien_tygodnia << "\n";



    infoDialog = new wxDialog(this, wxID_ANY, "Informacja o dniu", wxDefaultPosition, wxSize(720, 190), wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxCLOSE_BOX|wxMAXIMIZE_BOX|wxMINIMIZE_BOX);

    infoDialog->SetMinSize(wxSize(720, 190));


    // główny sizer
    main = new wxBoxSizer(wxVERTICAL);

    // info o dniu tekst
    wxStaticText* infoText = new wxStaticText(infoDialog, wxID_ANY, mess, wxDefaultPosition, wxDefaultSize, 0);
    wxFont info_font(19,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    infoText->SetFont(info_font);
    main->Add(infoText, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

    // sizer na wydarzenia
    wydarzenia = new wxBoxSizer(wxVERTICAL);
    main->Add(wydarzenia, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    wydarzenia->SetMinSize(0,0);



    if (nazwaMiesiaca == _("Styczeń"))
    {
        wydarzenia->Clear(true);

        wyd_styczen = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_styczen[dzien]);
        wxFont wyd_styczen_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
        wyd_styczen->SetFont(wyd_styczen_font);
        wydarzenia->Add(wyd_styczen, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

        if (dzien == 0 || dzien == 5)
        {
            wyd_styczen->SetForegroundColour(wxColour(63,71,204));
        }
        if (dzien == 20 || dzien == 21)
        {
            wyd_styczen->SetForegroundColour(wxColour(36,148,188));
        }
            if (!(wlasne_wyd_styczen[dzien].empty()))
            {
                OdtworzWydarzenia(wydarzenia, wlasne_wyd_styczen[dzien]);
            }
    }
    if (nazwaMiesiaca == _("Luty"))
    {
        wyd_luty = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_luty[dzien]);
        wxFont wyd_luty_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
        wyd_luty->SetFont(wyd_luty_font);
        wydarzenia->Add(wyd_luty, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
        if (dzien == 1 || dzien == 13 || dzien == 26)
        {
            wyd_luty->SetForegroundColour(wxColour(36,148,188));
        }
        if (!(wlasne_wyd_luty[dzien].empty()))
            {
                OdtworzWydarzenia(wydarzenia, wlasne_wyd_luty[dzien]);
            }
    }
    if (nazwaMiesiaca == _("Marzec"))
    {
        wyd_marzec = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_marzec[dzien]);
        wxFont wyd_marzec_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
        wyd_marzec->SetFont(wyd_marzec_font);
        wydarzenia->Add(wyd_marzec, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
        if (dzien == 0 || dzien == 3 || dzien == 4 || dzien == 7 || dzien == 9 || dzien == 19 || dzien == 29)
        {
            wyd_marzec->SetForegroundColour(wxColour(36,148,188));
        }
        if (!(wlasne_wyd_marzec[dzien].empty()))
        {
            OdtworzWydarzenia(wydarzenia, wlasne_wyd_marzec[dzien]);
        }
    }
    if (nazwaMiesiaca == _("Kwiecień"))
    {
        wyd_kwiecien = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_kwiecien[dzien]);
        wxFont wyd_kwiecien_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
        wyd_kwiecien->SetFont(wyd_kwiecien_font);
        wydarzenia->Add(wyd_kwiecien, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
        if (dzien == 19 || dzien == 20)
        {
            wyd_kwiecien->SetForegroundColour(wxColour(63,71,204));
        }
        if (dzien == 0 || dzien == 12 || dzien == 16 || dzien == 17 || dzien == 18 || dzien == 21 || dzien == 26)
        {
            wyd_kwiecien->SetForegroundColour(wxColour(36,148,188));
        }
        if (!(wlasne_wyd_kwiecien[dzien].empty()))
            {
                OdtworzWydarzenia(wydarzenia, wlasne_wyd_kwiecien[dzien]);
            }
    }
    if (nazwaMiesiaca == _("Maj"))
    {
        wyd_maj = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_maj[dzien]);
        wxFont wyd_maj_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
        wyd_maj->SetFont(wyd_maj_font);
        wydarzenia->Add(wyd_maj, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
        if (dzien == 0 || dzien == 2)
        {
            wyd_maj->SetForegroundColour(wxColour(63,71,204));
        }
        if (dzien == 1 || dzien == 25)
        {
            wyd_maj->SetForegroundColour(wxColour(36,148,188));
        }
        if (!(wlasne_wyd_maj[dzien].empty()))
            {
                OdtworzWydarzenia(wydarzenia, wlasne_wyd_maj[dzien]);
            }
    }
    if (nazwaMiesiaca == _("Czerwiec"))
    {
        wyd_czerwiec = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_czerwiec[dzien]);
        wxFont wyd_czerwiec_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
        wyd_czerwiec->SetFont(wyd_czerwiec_font);
        wydarzenia->Add(wyd_czerwiec, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
        if (dzien == 7 || dzien == 18)
        {
            wyd_czerwiec->SetForegroundColour(wxColour(63,71,204));
        }
        if (dzien == 0 || dzien == 20 || dzien == 22)
        {
            wyd_czerwiec->SetForegroundColour(wxColour(36,148,188));
        }
        if (!(wlasne_wyd_czerwiec[dzien].empty()))
            {
                OdtworzWydarzenia(wydarzenia, wlasne_wyd_czerwiec[dzien]);
            }
    }
    if (nazwaMiesiaca == _("Lipiec"))
    {
        wyd_lipiec = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_lipiec[dzien]);
        wxFont wyd_lipiec_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
        wyd_lipiec->SetFont(wyd_lipiec_font);
        wydarzenia->Add(wyd_lipiec, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

        if (!(wlasne_wyd_lipiec[dzien].empty()))
            {
                OdtworzWydarzenia(wydarzenia, wlasne_wyd_lipiec[dzien]);
            }
    }

    if (nazwaMiesiaca == _("Sierpień"))
    {
        wyd_sierpien = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_sierpien[dzien]);
        wxFont wyd_sierpien_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
        wyd_sierpien->SetFont(wyd_sierpien_font);
        wydarzenia->Add(wyd_sierpien, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
        if (dzien == 14)
        {
            wyd_sierpien->SetForegroundColour(wxColour(63,71,204));
        }
        if (dzien == 0 || dzien == 30)
        {
            wyd_sierpien->SetForegroundColour(wxColour(36,148,188));
        }
        if (!(wlasne_wyd_sierpien[dzien].empty()))
            {
                OdtworzWydarzenia(wydarzenia, wlasne_wyd_sierpien[dzien]);
            }
    }
    if (nazwaMiesiaca == _("Wrzesień"))
    {
        wyd_wrzesien = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_wrzesien[dzien]);
        wxFont wyd_wrzesien_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
        wyd_wrzesien->SetFont(wyd_wrzesien_font);
        wydarzenia->Add(wyd_wrzesien, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
        if (dzien == 21 || dzien == 29)
        {
            wyd_wrzesien->SetForegroundColour(wxColour(36,148,188));
        }
        if (!(wlasne_wyd_wrzesien[dzien].empty()))
            {
                OdtworzWydarzenia(wydarzenia, wlasne_wyd_wrzesien[dzien]);
            }
    }
    if (nazwaMiesiaca == _("Październik"))
    {
        wyd_pazdziernik = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_pazdziernik[dzien]);
        wxFont wyd_pazdziernik_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
        wyd_pazdziernik->SetFont(wyd_pazdziernik_font);
        wydarzenia->Add(wyd_pazdziernik, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
        if (dzien == 13 || dzien == 25)
            {
                wyd_pazdziernik->SetForegroundColour(wxColour(36,148,188));
            }
        if (!(wlasne_wyd_pazdziernik[dzien].empty()))
            {
                OdtworzWydarzenia(wydarzenia, wlasne_wyd_pazdziernik[dzien]);
            }
    }
    if (nazwaMiesiaca == _("Listopad"))
    {
        wyd_listopad = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_listopad[dzien]);
        wxFont wyd_listopad_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
        wyd_listopad->SetFont(wyd_listopad_font);
        wydarzenia->Add(wyd_listopad, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
        if (dzien == 0 || dzien == 10)
        {
            wyd_listopad->SetForegroundColour(wxColour(63,71,204));
        }
        if (dzien == 1 || dzien == 28)
        {
            wyd_listopad->SetForegroundColour(wxColour(36,148,188));
        }
        if (!(wlasne_wyd_listopad[dzien].empty()))
            {
                OdtworzWydarzenia(wydarzenia, wlasne_wyd_listopad[dzien]);
            }
    }
    if (nazwaMiesiaca == _("Grudzień"))
    {
        wyd_grudzien = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_grudzien[dzien]);
        wxFont wyd_grudzien_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
        wyd_grudzien->SetFont(wyd_grudzien_font);
        wydarzenia->Add(wyd_grudzien, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
        if (dzien == 23 || dzien == 24 || dzien == 25)
        {
            wyd_grudzien->SetForegroundColour(wxColour(63,71,204));
        }
        if (dzien == 3 || dzien == 5 || dzien == 20 || dzien == 26 || dzien == 30)
        {
            wyd_grudzien->SetForegroundColour(wxColour(36,148,188));
        }
        if (!(wlasne_wyd_grudzien[dzien].empty()))
            {
                OdtworzWydarzenia(wydarzenia, wlasne_wyd_grudzien[dzien]);
            }
    }

    // sizer na przyciski
    wxFlexGridSizer* buttons = new wxFlexGridSizer(1, 2, 0, 0);
    buttons->AddGrowableCol(0);
    buttons->AddGrowableCol(1);
    buttons->AddGrowableRow(0);

    // button wróć
    wxButton* wroc = new wxButton(infoDialog, wxID_ANY, _("Wróć"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator);
    wroc->SetMinSize(wxSize(150,40));
    wxFont wroc_font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    wroc->SetFont(wroc_font);
    buttons->Add(wroc, 1, wxALL|wxEXPAND, 5);

    // zamykanie okna buttonem wróć
    wroc->Bind(wxEVT_BUTTON, [=](wxCommandEvent& evt){
    infoDialog->Destroy();
    });

    // button tworzenia wydarzenia
    wxButton* button1 = new wxButton(infoDialog, wxID_ANY, _("Nowe wydarzenie"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator);
    button1->SetMinSize(wxSize(150,40));
    wxFont button1_font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    button1->SetFont(button1_font);
    buttons->Add(button1, 1, wxALL|wxEXPAND, 5);

    main->Add(buttons, 0, wxALL|wxEXPAND, 5);

    button1->Bind(wxEVT_BUTTON, &kalendarzDialog::OnOpenNewWindow, this);



    infoDialog->SetSizer(main);
    infoDialog->ShowModal();


    mess = "";
}



void kalendarzDialog::OnOpenNewWindow(wxCommandEvent& event)
{
    // główne okno
    wxDialog* newWindow = new wxDialog(this, wxID_ANY, _("Dodawanie nowego wydarzenia: ") + mess, wxDefaultPosition, wxSize(500, 215), wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxCLOSE_BOX|wxMAXIMIZE_BOX|wxMINIMIZE_BOX);

    newWindow->SetMinSize(wxSize(500, 215));

    // główny sizer
    wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);

    // FlexgridSizer z nazwą i godziną
    wxFlexGridSizer* nazwa_godzina = new wxFlexGridSizer(2, 2, 0, 0);
    nazwa_godzina->AddGrowableCol(1);


    // StaticText nazwa wydarzenia
    wxStaticText* nazwa = new wxStaticText(newWindow, wxID_ANY, _("Podaj nazwę wydarzenia:"), wxDefaultPosition, wxDefaultSize, 0);
    wxFont nazwa_font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    nazwa->SetFont(nazwa_font);
    nazwa_godzina->Add(nazwa, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

    // Pole tekstowe nazwa wydarzenia
    pole_nazwa = new wxTextCtrl(newWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator);
    wxFont pole_nazwa_font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    pole_nazwa->SetFont(pole_nazwa_font);
    pole_nazwa->SetMaxLength(50);
    nazwa_godzina->Add(pole_nazwa, 1, wxALL|wxEXPAND, 5);

    // StaticText godzina
    wxStaticText* godzina = new wxStaticText(newWindow, wxID_ANY, _("Wybierz godzinę:"), wxDefaultPosition, wxDefaultSize, 0);
    wxFont godzina_font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    godzina->SetFont(godzina_font);
    nazwa_godzina->Add(godzina, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

    // Wybieranie godziny
    wxTimePickerCtrl* TimePickerCtrl1 = new wxTimePickerCtrl(newWindow, wxID_ANY, wxDateTime::Now(), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TIMEPICKERCTRL1"));
    wxFont TimePickerCtrl1Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    TimePickerCtrl1->SetFont(TimePickerCtrl1Font);
    nazwa_godzina->Add(TimePickerCtrl1, 1, wxALL|wxEXPAND, 5);

    // dodanie do mainSizera
    mainSizer->Add(nazwa_godzina, 0, wxALL|wxEXPAND, 5);

    // nowy sizer na chechbox i button
    wxFlexGridSizer* check = new wxFlexGridSizer(1, 1, 0, 0);

    // checkbox czy priorytet
    CheckBox1 = new wxCheckBox(newWindow, wxID_ANY, _("Czy priorytet\?"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator);
    CheckBox1->SetValue(false);
    wxFont CheckBox1Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    CheckBox1->SetFont(CheckBox1Font);
    check->Add(CheckBox1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

    // dodanie do mainSizera
    mainSizer->Add(check, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

    // Sizer z buttonem
    wxFlexGridSizer* button_sizer = new wxFlexGridSizer(1, 2, 0, 0);
    button_sizer->AddGrowableCol(0);
    button_sizer->AddGrowableCol(1);
    button_sizer->AddGrowableRow(0);

    // button wróć
    wxButton* wroc = new wxButton(newWindow, wxID_ANY, _("Wróć"), wxDefaultPosition, wxSize(200,40), 0, wxDefaultValidator);
    wxFont wroc_font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    wroc->SetFont(wroc_font);
    wroc->SetMinSize(wxSize(130,40));
    button_sizer->Add(wroc, 1, wxALL|wxEXPAND, 5);

    // button wróć zamykający okno
    wroc->Bind(wxEVT_BUTTON, [=](wxCommandEvent& evt){
    newWindow->Destroy();
    });

    // button tworzenia wydarzenia
    wxButton* button = new wxButton(newWindow, wxID_ANY, _("Dodaj wydarzenie"), wxDefaultPosition, wxSize(200,40), 0, wxDefaultValidator);
    wxFont button_font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    button->SetFont(button_font);
    button->SetMinSize(wxSize(130,40));
    button_sizer->Add(button, 1, wxALL|wxEXPAND, 5);

    // Dodanie funkcjonalności do buttona
    button->Bind(wxEVT_BUTTON, [=](wxCommandEvent& evt){

    // Pobranie wybranej wartości czasu
    wxDateTime wybrana_godzina = TimePickerCtrl1->GetValue();

    // Wyodrębnienie godziny i minuty
    int hour = wybrana_godzina.GetHour();

    if (hour < 10)
    {
        h = std::to_string(hour);
        h = "0" + h;
    }
    else
    {
        h = std::to_string(hour);
    }

    int minute = wybrana_godzina.GetMinute();
    if (minute < 10)
    {
        m = std::to_string(minute);
        m = "0" + m;
    }
    else
    {
        m = std::to_string(minute);
    }
        wxString nazwa_wydarzenia = pole_nazwa->GetValue();

        if (nazwa_wydarzenia == "")
        {
            wxMessageBox(_("Nie podano nazwy wydarzenia!"), _("Błąd"), wxICON_ERROR);
        }
        else
        {
        wxString eventInfo = nazwa_wydarzenia + "\n" + mess + "o godzinie: " + h + ":" + m;

            if (CheckBox1->IsChecked())
            {
                eventInfo += "\n" + _("(Ważne wydarzenie)");
            }

            DodajWydarzenie();
            wxMessageBox("Dodano wydarzenie: \n" + eventInfo, "Potwierdzenie");
            newWindow->Destroy();
        }
    });


    // dodanie do mainSizera
    mainSizer->Add(button_sizer, 1, wxALL|wxEXPAND, 5);

    newWindow->SetSizer(mainSizer);
    mainSizer->Fit(newWindow);
    newWindow->ShowModal();
}



bool kalendarzDialog::ContainsOrangeColor(const wxBitmap& bitmap)
{
    if (!bitmap.IsOk())
    {
        return false; // Nieprawidłowa bitmapa
    }

    wxImage image = bitmap.ConvertToImage(); // Konwertuj do wxImage
    const int width = image.GetWidth();
    const int height = image.GetHeight();

    for (int y = 0; y < height; ++y)
    {
        for (int x = 0; x < width; ++x)
        {
            unsigned char red = image.GetRed(x, y);
            unsigned char green = image.GetGreen(x, y);
            unsigned char blue = image.GetBlue(x, y);

            // Definicja koloru pomarańczowego (zakres tolerancji)
            if (red > 200 && green > 100 && green < 200 && blue < 100)
            {
                return true; // Znaleziono kolor pomarańczowy
            }
        }
    }
    return false; // Nie znaleziono koloru pomarańczowego
}



bool kalendarzDialog::ContainsRedColor(const wxBitmap& bitmap)
{
    if (!bitmap.IsOk())
    {
        return false; // Nieprawidłowa bitmapa
    }

    wxImage image = bitmap.ConvertToImage(); // Konwertuj do wxImage
    const int width = image.GetWidth();
    const int height = image.GetHeight();

    for (int y = 0; y < height; ++y)
    {
        for (int x = 0; x < width; ++x)
        {
            unsigned char red = image.GetRed(x, y);
            unsigned char green = image.GetGreen(x, y);
            unsigned char blue = image.GetBlue(x, y);

            if (red > 230 && green < 30 && blue < 100)
            {
                return true; // Znaleziono kolor czerwony
            }
        }
    }
    return false; // Nie znaleziono koloru czerwonego
}



void kalendarzDialog::DodajWydarzenie()
{
    wxString nazwa_wydarzenia = pole_nazwa->GetValue();
    nazwa_mies = StaticText1->GetLabel();
    std::string dz = std::to_string(dzien+1);


    if (nazwa_mies == _("Styczeń"))
    {

        wxSize rozmiar_okna = infoDialog->GetSize();
        int wysokosc = rozmiar_okna.GetHeight();
        static int height = wysokosc;

        if (lastDay != dzien)
        {
            // Jeśli dzień został zmieniony, przywróć domyślną wartość height
            height = wysokosc;
            lastDay = dzien;
        }

        wxBitmap bitmapa = styczen[dzien]->GetBitmap();

        wxStaticText* tekst;


            if (CheckBox1->GetValue() == true)
            {
                tekst = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_styczen[dzien]);
                tekst->SetLabel(h + ":" + m + " - " + nazwa_wydarzenia);
                wxFont tekst_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
                tekst->SetFont(tekst_font);
                tekst->SetForegroundColour(wxColour(237,28,36));
                wydarzenia->Add(tekst, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

                styczen[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_p.jpg")));


                if (ContainsOrangeColor(bitmapa))
                {
                    styczen[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                }

                if (dzien == 0 || dzien == 5)
                {
                    styczen[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_p.jpg")));

                    if (ContainsOrangeColor(bitmapa))
                    {
                        styczen[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wlp.jpg")));
                    }
                }
                if  (dzien == 20 || dzien == 21)
                {
                    styczen[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_p.jpg")));

                    if (ContainsOrangeColor(bitmapa))
                    {
                        styczen[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                    }
                }
                height = height + 40;
                infoDialog->SetMinSize(wxSize(720, height));
                infoDialog->SetSize(wxSize(720, height));
            }
            else
            {

                tekst = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_styczen[dzien]);
                tekst->SetLabel(h + ":" + m + " - " + nazwa_wydarzenia);
                wxFont tekst_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
                tekst->SetFont(tekst_font);
                tekst->SetForegroundColour(wxColour(255,127,39));
                wydarzenia->Add(tekst, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

                styczen[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wl.jpg")));

                if (ContainsRedColor(bitmapa))
                {
                    styczen[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                }

                if (dzien == 0 || dzien == 5)
                {
                    styczen[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wl.jpg")));

                    if (ContainsRedColor(bitmapa))
                    {
                        styczen[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wlp.jpg")));
                    }
                }
                if (dzien == 20 || dzien == 21)
                {
                    styczen[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wl.jpg")));

                    if (ContainsRedColor(bitmapa))
                    {
                        styczen[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                    }
                }
                height = height + 40;
                infoDialog->SetMinSize(wxSize(720, height));
                infoDialog->SetSize(wxSize(720, height));
            }

        wxString label = tekst->GetLabel();
        wxFont font = tekst->GetFont();
        wxColour colour = tekst->GetForegroundColour();

        kalendarzDialog::WydarzenieData noweWydarzenie{label, font, colour};
        wlasne_wyd_styczen[dzien].push_back(noweWydarzenie);
    }



    if (nazwa_mies == _("Luty"))
    {
        wxSize rozmiar_okna = infoDialog->GetSize();
        int wysokosc = rozmiar_okna.GetHeight();
        static int height = wysokosc;

        if (lastDay != dzien)
        {
            // Jeśli dzień został zmieniony, przywróć domyślną wartość height
            height = wysokosc;
            lastDay = dzien;
        }


        wxBitmap bitmapa = luty[dzien]->GetBitmap();

        wxStaticText* tekst;

            if (CheckBox1->GetValue() == true)
            {
                tekst = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_luty[dzien]);
                tekst->SetLabel(h + ":" + m + " - " + nazwa_wydarzenia);
                wxFont tekst_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
                tekst->SetFont(tekst_font);
                tekst->SetForegroundColour(wxColour(237,28,36));
                wydarzenia->Add(tekst, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

                luty[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_p.jpg")));

                if (ContainsOrangeColor(bitmapa))
                {
                    luty[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                }
                if  (dzien == 1 || dzien == 13 || dzien == 26)
                {
                    luty[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_p.jpg")));

                    if (ContainsOrangeColor(bitmapa))
                    {
                        luty[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                    }
                }
                height = height + 40;
                infoDialog->SetMinSize(wxSize(720, height));
                infoDialog->SetSize(wxSize(720, height));
            }
            else
            {
                tekst = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_luty[dzien]);
                tekst->SetLabel(h + ":" + m + " - " + nazwa_wydarzenia);
                wxFont tekst_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
                tekst->SetFont(tekst_font);
                tekst->SetForegroundColour(wxColour(255,127,39));
                wydarzenia->Add(tekst, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

                luty[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wl.jpg")));

                if (ContainsRedColor(bitmapa))
                {
                    luty[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                }
                if (dzien == 1 || dzien == 13 || dzien == 26)
                {
                    luty[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wl.jpg")));

                    if (ContainsRedColor(bitmapa))
                    {
                        luty[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                    }
                }
                height = height + 40;
                infoDialog->SetMinSize(wxSize(720, height));
                infoDialog->SetSize(wxSize(720, height));
            }

        wxString label = tekst->GetLabel();
        wxFont font = tekst->GetFont();
        wxColour colour = tekst->GetForegroundColour();

        kalendarzDialog::WydarzenieData noweWydarzenie{label, font, colour};
        wlasne_wyd_luty[dzien].push_back(noweWydarzenie);
    }



    if (nazwa_mies == _("Marzec"))
    {
        wxSize rozmiar_okna = infoDialog->GetSize();
        int wysokosc = rozmiar_okna.GetHeight();
        static int height = wysokosc;

        if (lastDay != dzien)
        {
            // Jeśli dzień został zmieniony, przywróć domyślną wartość height
            height = wysokosc;
            lastDay = dzien;
        }

        wxBitmap bitmapa = marzec[dzien]->GetBitmap();

        wxStaticText* tekst;

            if (CheckBox1->GetValue() == true)
            {
                tekst = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_marzec[dzien]);
                tekst->SetLabel(h + ":" + m + " - " + nazwa_wydarzenia);
                wxFont tekst_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
                tekst->SetFont(tekst_font);
                tekst->SetForegroundColour(wxColour(237,28,36));
                wydarzenia->Add(tekst, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

                marzec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_p.jpg")));

                if (ContainsOrangeColor(bitmapa))
                {
                    marzec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                }
                if  (dzien == 0 || dzien == 3 || dzien == 4 || dzien == 7 || dzien == 9 || dzien == 19 || dzien == 29)
                {
                    marzec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_p.jpg")));

                    if (ContainsOrangeColor(bitmapa))
                    {
                        marzec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                    }
                }
                height = height + 40;
                infoDialog->SetMinSize(wxSize(720, height));
                infoDialog->SetSize(wxSize(720, height));
            }
            else
            {
                tekst = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_marzec[dzien]);
                tekst->SetLabel(h + ":" + m + " - " + nazwa_wydarzenia);
                wxFont tekst_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
                tekst->SetFont(tekst_font);
                tekst->SetForegroundColour(wxColour(255,127,39));
                wydarzenia->Add(tekst, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

                marzec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wl.jpg")));

                if (ContainsRedColor(bitmapa))
                {
                    marzec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                }
                if (dzien == 0 || dzien == 3 || dzien == 4 || dzien == 7 || dzien == 9 || dzien == 19 || dzien == 29)
                {
                    marzec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wl.jpg")));

                    if (ContainsRedColor(bitmapa))
                    {
                        marzec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                    }
                }
                height = height + 40;
                infoDialog->SetMinSize(wxSize(720, height));
                infoDialog->SetSize(wxSize(720, height));
            }

        wxString label = tekst->GetLabel();
        wxFont font = tekst->GetFont();
        wxColour colour = tekst->GetForegroundColour();

        kalendarzDialog::WydarzenieData noweWydarzenie{label, font, colour};
        wlasne_wyd_marzec[dzien].push_back(noweWydarzenie);
    }



    if (nazwa_mies == _("Kwiecień"))
    {
        wxSize rozmiar_okna = infoDialog->GetSize();
        int wysokosc = rozmiar_okna.GetHeight();
        static int height = wysokosc;

        if (lastDay != dzien)
        {
            // Jeśli dzień został zmieniony, przywróć domyślną wartość height
            height = wysokosc;
            lastDay = dzien;
        }

        wxBitmap bitmapa = kwiecien[dzien]->GetBitmap();

        wxStaticText* tekst;

            if (CheckBox1->GetValue() == true)
            {
                tekst = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_kwiecien[dzien]);
                tekst->SetLabel(h + ":" + m + " - " + nazwa_wydarzenia);
                wxFont tekst_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
                tekst->SetFont(tekst_font);
                tekst->SetForegroundColour(wxColour(237,28,36));
                wydarzenia->Add(tekst, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

                kwiecien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_p.jpg")));

                if (ContainsOrangeColor(bitmapa))
                {
                    kwiecien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                }

                if (dzien == 19 || dzien == 20)
                {
                    kwiecien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_p.jpg")));

                    if (ContainsOrangeColor(bitmapa))
                    {
                        kwiecien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wlp.jpg")));
                    }
                }
                if  (dzien == 0 || dzien == 12 || dzien == 16 || dzien == 17 || dzien == 18 || dzien == 21 || dzien == 26)
                {
                    kwiecien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_p.jpg")));

                    if (ContainsOrangeColor(bitmapa))
                    {
                        kwiecien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                    }
                }
                height = height + 40;
                infoDialog->SetMinSize(wxSize(720, height));
                infoDialog->SetSize(wxSize(720, height));
            }
            else
            {
                tekst = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_kwiecien[dzien]);
                tekst->SetLabel(h + ":" + m + " - " + nazwa_wydarzenia);
                wxFont tekst_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
                tekst->SetFont(tekst_font);
                tekst->SetForegroundColour(wxColour(255,127,39));
                wydarzenia->Add(tekst, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

                kwiecien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wl.jpg")));

                if (ContainsRedColor(bitmapa))
                {
                    kwiecien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                }

                if (dzien == 19 || dzien == 20)
                {
                    kwiecien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wl.jpg")));

                    if (ContainsRedColor(bitmapa))
                    {
                        kwiecien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wlp.jpg")));
                    }
                }
                if (dzien == 0 || dzien == 12 || dzien == 16 || dzien == 17 || dzien == 18 || dzien == 21 || dzien == 26)
                {
                    kwiecien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wl.jpg")));

                    if (ContainsRedColor(bitmapa))
                    {
                        kwiecien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                    }
                }
                height = height + 40;
                infoDialog->SetMinSize(wxSize(720, height));
                infoDialog->SetSize(wxSize(720, height));
            }

        wxString label = tekst->GetLabel();
        wxFont font = tekst->GetFont();
        wxColour colour = tekst->GetForegroundColour();

        kalendarzDialog::WydarzenieData noweWydarzenie{label, font, colour};
        wlasne_wyd_kwiecien[dzien].push_back(noweWydarzenie);
    }



    if (nazwa_mies == _("Maj"))
    {
        wxSize rozmiar_okna = infoDialog->GetSize();
        int wysokosc = rozmiar_okna.GetHeight();
        static int height = wysokosc;

        if (lastDay != dzien)
        {
            // Jeśli dzień został zmieniony, przywróć domyślną wartość height
            height = wysokosc;
            lastDay = dzien;
        }

        wxBitmap bitmapa = maj[dzien]->GetBitmap();

        wxStaticText* tekst;

            if (CheckBox1->GetValue() == true)
            {
                tekst = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_maj[dzien]);
                tekst->SetLabel(h + ":" + m + " - " + nazwa_wydarzenia);
                wxFont tekst_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
                tekst->SetFont(tekst_font);
                tekst->SetForegroundColour(wxColour(237,28,36));
                wydarzenia->Add(tekst, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

                maj[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_p.jpg")));

                if (ContainsOrangeColor(bitmapa))
                {
                    maj[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                }

                if (dzien == 0 || dzien == 2)
                {
                    maj[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_p.jpg")));

                    if (ContainsOrangeColor(bitmapa))
                    {
                        maj[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wlp.jpg")));
                    }
                }
                if  (dzien == 1 || dzien == 25)
                {
                    maj[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_p.jpg")));

                    if (ContainsOrangeColor(bitmapa))
                    {
                        maj[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                    }
                }
                height = height + 40;
                infoDialog->SetMinSize(wxSize(720, height));
                infoDialog->SetSize(wxSize(720, height));
            }
            else
            {
                tekst = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_maj[dzien]);
                tekst->SetLabel(h + ":" + m + " - " + nazwa_wydarzenia);
                wxFont tekst_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
                tekst->SetFont(tekst_font);
                tekst->SetForegroundColour(wxColour(255,127,39));
                wydarzenia->Add(tekst, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

                maj[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wl.jpg")));

                if (ContainsRedColor(bitmapa))
                {
                    maj[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                }

                if (dzien == 0 || dzien == 2)
                {
                    maj[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wl.jpg")));

                    if (ContainsRedColor(bitmapa))
                    {
                        maj[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wlp.jpg")));
                    }
                }
                if (dzien == 1 || dzien == 25)
                {
                    maj[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wl.jpg")));

                    if (ContainsRedColor(bitmapa))
                    {
                        maj[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                    }
                }
                height = height + 40;
                infoDialog->SetMinSize(wxSize(720, height));
                infoDialog->SetSize(wxSize(720, height));
            }

        wxString label = tekst->GetLabel();
        wxFont font = tekst->GetFont();
        wxColour colour = tekst->GetForegroundColour();

        kalendarzDialog::WydarzenieData noweWydarzenie{label, font, colour};
        wlasne_wyd_maj[dzien].push_back(noweWydarzenie);
    }



    if (nazwa_mies == _("Czerwiec"))
    {
        wxSize rozmiar_okna = infoDialog->GetSize();
        int wysokosc = rozmiar_okna.GetHeight();
        static int height = wysokosc;

        if (lastDay != dzien)
        {
            // Jeśli dzień został zmieniony, przywróć domyślną wartość height
            height = wysokosc;
            lastDay = dzien;
        }

        wxBitmap bitmapa = czerwiec[dzien]->GetBitmap();

        wxStaticText* tekst;

            if (CheckBox1->GetValue() == true)
            {
                tekst = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_czerwiec[dzien]);
                tekst->SetLabel(h + ":" + m + " - " + nazwa_wydarzenia);
                wxFont tekst_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
                tekst->SetFont(tekst_font);
                tekst->SetForegroundColour(wxColour(237,28,36));
                wydarzenia->Add(tekst, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

                czerwiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_p.jpg")));

                if (ContainsOrangeColor(bitmapa))
                {
                    czerwiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                }

                if (dzien == 7 || dzien == 18)
                {
                    czerwiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_p.jpg")));

                    if (ContainsOrangeColor(bitmapa))
                    {
                        czerwiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wlp.jpg")));
                    }
                }
                if  (dzien == 0 || dzien == 20 || dzien == 22)
                {
                    czerwiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_p.jpg")));

                    if (ContainsOrangeColor(bitmapa))
                    {
                        czerwiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                    }
                }
                height = height + 40;
                infoDialog->SetMinSize(wxSize(720, height));
                infoDialog->SetSize(wxSize(720, height));
            }
            else
            {
                tekst = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_czerwiec[dzien]);
                tekst->SetLabel(h + ":" + m + " - " + nazwa_wydarzenia);
                wxFont tekst_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
                tekst->SetFont(tekst_font);
                tekst->SetForegroundColour(wxColour(255,127,39));
                wydarzenia->Add(tekst, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

                czerwiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wl.jpg")));

                if (ContainsRedColor(bitmapa))
                {
                    czerwiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                }

                if (dzien == 7 || dzien == 18)
                {
                    czerwiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wl.jpg")));

                    if (ContainsRedColor(bitmapa))
                    {
                        czerwiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wlp.jpg")));
                    }
                }
                if (dzien == 0 || dzien == 20 || dzien == 22)
                {
                    czerwiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wl.jpg")));

                    if (ContainsRedColor(bitmapa))
                    {
                        czerwiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                    }
                }
                height = height + 40;
                infoDialog->SetMinSize(wxSize(720, height));
                infoDialog->SetSize(wxSize(720, height));
            }

        wxString label = tekst->GetLabel();
        wxFont font = tekst->GetFont();
        wxColour colour = tekst->GetForegroundColour();

        kalendarzDialog::WydarzenieData noweWydarzenie{label, font, colour};
        wlasne_wyd_czerwiec[dzien].push_back(noweWydarzenie);
    }



    if (nazwa_mies == _("Lipiec"))
    {
        wxSize rozmiar_okna = infoDialog->GetSize();
        int wysokosc = rozmiar_okna.GetHeight();
        static int height = wysokosc;

        if (lastDay != dzien)
        {
            // Jeśli dzień został zmieniony, przywróć domyślną wartość height
            height = wysokosc;
            lastDay = dzien;
        }

        wxBitmap bitmapa = lipiec[dzien]->GetBitmap();

        wxStaticText* tekst;

            if (CheckBox1->GetValue() == true)
            {
                tekst = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_lipiec[dzien]);
                tekst->SetLabel(h + ":" + m + " - " + nazwa_wydarzenia);
                wxFont tekst_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
                tekst->SetFont(tekst_font);
                tekst->SetForegroundColour(wxColour(237,28,36));
                wydarzenia->Add(tekst, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

                lipiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_p.jpg")));

                if (ContainsOrangeColor(bitmapa))
                {
                    lipiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                }
                height = height + 40;
                infoDialog->SetMinSize(wxSize(720, height));
                infoDialog->SetSize(wxSize(720, height));
            }
            else
            {
                tekst = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_lipiec[dzien]);
                tekst->SetLabel(h + ":" + m + " - " + nazwa_wydarzenia);
                wxFont tekst_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
                tekst->SetFont(tekst_font);
                tekst->SetForegroundColour(wxColour(255,127,39));
                wydarzenia->Add(tekst, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

                lipiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wl.jpg")));

                if (ContainsRedColor(bitmapa))
                {
                    lipiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                }
                height = height + 40;
                infoDialog->SetMinSize(wxSize(720, height));
                infoDialog->SetSize(wxSize(720, height));
            }

        wxString label = tekst->GetLabel();
        wxFont font = tekst->GetFont();
        wxColour colour = tekst->GetForegroundColour();

        kalendarzDialog::WydarzenieData noweWydarzenie{label, font, colour};
        wlasne_wyd_lipiec[dzien].push_back(noweWydarzenie);
    }



    if (nazwa_mies == _("Sierpień"))
    {
        wxSize rozmiar_okna = infoDialog->GetSize();
        int wysokosc = rozmiar_okna.GetHeight();
        static int height = wysokosc;

        if (lastDay != dzien)
        {
            // Jeśli dzień został zmieniony, przywróć domyślną wartość height
            height = wysokosc;
            lastDay = dzien;
        }

        wxBitmap bitmapa = sierpien[dzien]->GetBitmap();

        wxStaticText* tekst;

            if (CheckBox1->GetValue() == true)
            {
                tekst = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_sierpien[dzien]);
                tekst->SetLabel(h + ":" + m + " - " + nazwa_wydarzenia);
                wxFont tekst_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
                tekst->SetFont(tekst_font);
                tekst->SetForegroundColour(wxColour(237,28,36));
                wydarzenia->Add(tekst, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

                sierpien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_p.jpg")));

                if (ContainsOrangeColor(bitmapa))
                {
                    sierpien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                }

                if (dzien == 14)
                {
                    sierpien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_p.jpg")));

                    if (ContainsOrangeColor(bitmapa))
                    {
                        sierpien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wlp.jpg")));
                    }
                }
                if  (dzien == 0 || dzien == 30)
                {
                    sierpien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_p.jpg")));

                    if (ContainsOrangeColor(bitmapa))
                    {
                        sierpien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                    }
                }
                height = height + 40;
                infoDialog->SetMinSize(wxSize(720, height));
                infoDialog->SetSize(wxSize(720, height));
            }
            else
            {
                tekst = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_sierpien[dzien]);
                tekst->SetLabel(h + ":" + m + " - " + nazwa_wydarzenia);
                wxFont tekst_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
                tekst->SetFont(tekst_font);
                tekst->SetForegroundColour(wxColour(255,127,39));
                wydarzenia->Add(tekst, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

                sierpien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wl.jpg")));

                if (ContainsRedColor(bitmapa))
                {
                    sierpien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                }

                if (dzien == 14)
                {
                    sierpien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wl.jpg")));

                    if (ContainsRedColor(bitmapa))
                    {
                        sierpien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wlp.jpg")));
                    }
                }
                if (dzien == 0 || dzien == 30)
                {
                    sierpien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wl.jpg")));

                    if (ContainsRedColor(bitmapa))
                    {
                        sierpien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                    }
                }
                height = height + 40;
                infoDialog->SetMinSize(wxSize(720, height));
                infoDialog->SetSize(wxSize(720, height));
            }

        wxString label = tekst->GetLabel();
        wxFont font = tekst->GetFont();
        wxColour colour = tekst->GetForegroundColour();

        kalendarzDialog::WydarzenieData noweWydarzenie{label, font, colour};
        wlasne_wyd_sierpien[dzien].push_back(noweWydarzenie);
    }



    if (nazwa_mies == _("Wrzesień"))
    {
        wxSize rozmiar_okna = infoDialog->GetSize();
        int wysokosc = rozmiar_okna.GetHeight();
        static int height = wysokosc;

        if (lastDay != dzien)
        {
            // Jeśli dzień został zmieniony, przywróć domyślną wartość height
            height = wysokosc;
            lastDay = dzien;
        }

        wxBitmap bitmapa = wrzesien[dzien]->GetBitmap();

        wxStaticText* tekst;

            if (CheckBox1->GetValue() == true)
            {
                tekst = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_wrzesien[dzien]);
                tekst->SetLabel(h + ":" + m + " - " + nazwa_wydarzenia);
                wxFont tekst_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
                tekst->SetFont(tekst_font);
                tekst->SetForegroundColour(wxColour(237,28,36));
                wydarzenia->Add(tekst, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

                wrzesien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_p.jpg")));

                if (ContainsOrangeColor(bitmapa))
                {
                    wrzesien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                }
                if  (dzien == 21 || dzien == 29)
                {
                    wrzesien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_p.jpg")));

                    if (ContainsOrangeColor(bitmapa))
                    {
                        wrzesien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                    }
                }
                height = height + 40;
                infoDialog->SetMinSize(wxSize(720, height));
                infoDialog->SetSize(wxSize(720, height));
            }
            else
            {
                tekst = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_wrzesien[dzien]);
                tekst->SetLabel(h + ":" + m + " - " + nazwa_wydarzenia);
                wxFont tekst_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
                tekst->SetFont(tekst_font);
                tekst->SetForegroundColour(wxColour(255,127,39));
                wydarzenia->Add(tekst, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

                wrzesien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wl.jpg")));

                if (ContainsRedColor(bitmapa))
                {
                    wrzesien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                }
                if (dzien == 21 || dzien == 29)
                {
                    wrzesien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wl.jpg")));

                    if (ContainsRedColor(bitmapa))
                    {
                        wrzesien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                    }
                }
                height = height + 40;
                infoDialog->SetMinSize(wxSize(720, height));
                infoDialog->SetSize(wxSize(720, height));
            }

        wxString label = tekst->GetLabel();
        wxFont font = tekst->GetFont();
        wxColour colour = tekst->GetForegroundColour();

        kalendarzDialog::WydarzenieData noweWydarzenie{label, font, colour};
        wlasne_wyd_wrzesien[dzien].push_back(noweWydarzenie);
    }



    if (nazwa_mies == _("Październik"))
    {
        wxSize rozmiar_okna = infoDialog->GetSize();
        int wysokosc = rozmiar_okna.GetHeight();
        static int height = wysokosc;

        if (lastDay != dzien)
        {
            // Jeśli dzień został zmieniony, przywróć domyślną wartość height
            height = wysokosc;
            lastDay = dzien;
        }

        wxBitmap bitmapa = pazdziernik[dzien]->GetBitmap();

        wxStaticText* tekst;

            if (CheckBox1->GetValue() == true)
            {
                tekst = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_pazdziernik[dzien]);
                tekst->SetLabel(h + ":" + m + " - " + nazwa_wydarzenia);
                wxFont tekst_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
                tekst->SetFont(tekst_font);
                tekst->SetForegroundColour(wxColour(237,28,36));
                wydarzenia->Add(tekst, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

                pazdziernik[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_p.jpg")));

                if (ContainsOrangeColor(bitmapa))
                {
                    pazdziernik[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                }
                if  (dzien == 13 || dzien == 25)
                {
                    pazdziernik[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_p.jpg")));

                    if (ContainsOrangeColor(bitmapa))
                    {
                        pazdziernik[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                    }
                }
                height = height + 40;
                infoDialog->SetMinSize(wxSize(720, height));
                infoDialog->SetSize(wxSize(720, height));
            }
            else
            {
                tekst = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_pazdziernik[dzien]);
                tekst->SetLabel(h + ":" + m + " - " + nazwa_wydarzenia);
                wxFont tekst_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
                tekst->SetFont(tekst_font);
                tekst->SetForegroundColour(wxColour(255,127,39));
                wydarzenia->Add(tekst, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

                pazdziernik[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wl.jpg")));

                if (ContainsRedColor(bitmapa))
                {
                    pazdziernik[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                }
                if (dzien == 13 || dzien == 25)
                {
                    pazdziernik[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wl.jpg")));

                    if (ContainsRedColor(bitmapa))
                    {
                        pazdziernik[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                    }
                }
                height = height + 40;
                infoDialog->SetMinSize(wxSize(720, height));
                infoDialog->SetSize(wxSize(720, height));
            }

        wxString label = tekst->GetLabel();
        wxFont font = tekst->GetFont();
        wxColour colour = tekst->GetForegroundColour();

        kalendarzDialog::WydarzenieData noweWydarzenie{label, font, colour};
        wlasne_wyd_pazdziernik[dzien].push_back(noweWydarzenie);
    }



    if (nazwa_mies == _("Listopad"))
    {
        wxSize rozmiar_okna = infoDialog->GetSize();
        int wysokosc = rozmiar_okna.GetHeight();
        static int height = wysokosc;

        if (lastDay != dzien)
        {
            // Jeśli dzień został zmieniony, przywróć domyślną wartość height
            height = wysokosc;
            lastDay = dzien;
        }

        wxBitmap bitmapa = listopad[dzien]->GetBitmap();

        wxStaticText* tekst;

            if (CheckBox1->GetValue() == true)
            {
                tekst = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_listopad[dzien]);
                tekst->SetLabel(h + ":" + m + " - " + nazwa_wydarzenia);
                wxFont tekst_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
                tekst->SetFont(tekst_font);
                tekst->SetForegroundColour(wxColour(237,28,36));
                wydarzenia->Add(tekst, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

                listopad[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_p.jpg")));

                if (ContainsOrangeColor(bitmapa))
                {
                    listopad[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                }

                if (dzien == 0 || dzien == 10)
                {
                    listopad[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_p.jpg")));

                    if (ContainsOrangeColor(bitmapa))
                    {
                        listopad[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wlp.jpg")));
                    }
                }
                if  (dzien == 1 || dzien == 28)
                {
                    listopad[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_p.jpg")));

                    if (ContainsOrangeColor(bitmapa))
                    {
                        listopad[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                    }
                }
                height = height + 40;
                infoDialog->SetMinSize(wxSize(720, height));
                infoDialog->SetSize(wxSize(720, height));
            }
            else
            {
                tekst = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_listopad[dzien]);
                tekst->SetLabel(h + ":" + m + " - " + nazwa_wydarzenia);
                wxFont tekst_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
                tekst->SetFont(tekst_font);
                tekst->SetForegroundColour(wxColour(255,127,39));
                wydarzenia->Add(tekst, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

                listopad[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wl.jpg")));

                if (ContainsRedColor(bitmapa))
                {
                    listopad[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                }

                if (dzien == 0 || dzien == 10)
                {
                    listopad[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wl.jpg")));

                    if (ContainsRedColor(bitmapa))
                    {
                        listopad[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wlp.jpg")));
                    }
                }
                if (dzien == 1 || dzien == 28)
                {
                    listopad[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wl.jpg")));

                    if (ContainsRedColor(bitmapa))
                    {
                        listopad[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                    }
                }
                height = height + 40;
                infoDialog->SetMinSize(wxSize(720, height));
                infoDialog->SetSize(wxSize(720, height));
            }

        wxString label = tekst->GetLabel();
        wxFont font = tekst->GetFont();
        wxColour colour = tekst->GetForegroundColour();

        kalendarzDialog::WydarzenieData noweWydarzenie{label, font, colour};
        wlasne_wyd_listopad[dzien].push_back(noweWydarzenie);
    }



    if (nazwa_mies == _("Grudzień"))
    {
        wxSize rozmiar_okna = infoDialog->GetSize();
        int wysokosc = rozmiar_okna.GetHeight();
        static int height = wysokosc;

        if (lastDay != dzien)
        {
            // Jeśli dzień został zmieniony, przywróć domyślną wartość height
            height = wysokosc;
            lastDay = dzien;
        }

        wxBitmap bitmapa = grudzien[dzien]->GetBitmap();

        wxStaticText* tekst;

            if (CheckBox1->GetValue() == true)
            {
                tekst = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_grudzien[dzien]);
                tekst->SetLabel(h + ":" + m + " - " + nazwa_wydarzenia);
                wxFont tekst_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
                tekst->SetFont(tekst_font);
                tekst->SetForegroundColour(wxColour(237,28,36));
                wydarzenia->Add(tekst, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

                grudzien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_p.jpg")));

                if (ContainsOrangeColor(bitmapa))
                {
                    grudzien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                }

                if (dzien == 23 || dzien == 24 || dzien == 25)
                {
                    grudzien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_p.jpg")));

                    if (ContainsOrangeColor(bitmapa))
                    {
                        grudzien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wlp.jpg")));
                    }
                }
                if  (dzien == 3 || dzien == 5 || dzien == 20 || dzien == 26 || dzien == 30)
                {
                    grudzien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_p.jpg")));

                    if (ContainsOrangeColor(bitmapa))
                    {
                        grudzien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                    }
                }
                height = height + 40;
                infoDialog->SetMinSize(wxSize(720, height));
                infoDialog->SetSize(wxSize(720, height));
            }
            else
            {
                tekst = new wxStaticText(infoDialog, wxID_ANY, wydarzenia_grudzien[dzien]);
                tekst->SetLabel(h + ":" + m + " - " + nazwa_wydarzenia);
                wxFont tekst_font(17,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
                tekst->SetFont(tekst_font);
                tekst->SetForegroundColour(wxColour(255,127,39));
                wydarzenia->Add(tekst, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

                grudzien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wl.jpg")));

                if (ContainsRedColor(bitmapa))
                {
                    grudzien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                }

                if (dzien == 23 || dzien == 24 || dzien == 25)
                {
                    grudzien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wl.jpg")));

                    if (ContainsRedColor(bitmapa))
                    {
                        grudzien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wlp.jpg")));
                    }
                }
                if (dzien == 3 || dzien == 5 || dzien == 20 || dzien == 26 || dzien == 30)
                {
                    grudzien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wl.jpg")));

                    if (ContainsRedColor(bitmapa))
                    {
                        grudzien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                    }
                }
                height = height + 40;
                infoDialog->SetMinSize(wxSize(720, height));
                infoDialog->SetSize(wxSize(720, height));
            }

        wxString label = tekst->GetLabel();
        wxFont font = tekst->GetFont();
        wxColour colour = tekst->GetForegroundColour();

        kalendarzDialog::WydarzenieData noweWydarzenie{label, font, colour};
        wlasne_wyd_grudzien[dzien].push_back(noweWydarzenie);
    }


    std::time_t teraz = std::time(nullptr);
    std::tm* czas = std::localtime(&teraz);
    int d = czas->tm_mday;
    int m = czas->tm_mon + 1;
    int r = czas->tm_year + 1900;


    // Zmiana koloru czcionki dla dzisiejszego dnia, jeśli tego dnia dodano wydarzenie
    if (r == 2025)
    {
        if (m == 1)
        {
            if (ContainsOrangeColor(styczen[d-1]->GetBitmap()))
            {
                text_dzis_dzien->SetForegroundColour(wxColour(255, 127, 39));
                text_dzis_dzien->Refresh();
                text_dzis_dzien->Update();
            }
            if (ContainsRedColor(styczen[d-1]->GetBitmap()))
            {
                text_dzis_dzien->SetForegroundColour(wxColour(237, 28, 36));
                text_dzis_dzien->Refresh();
                text_dzis_dzien->Update();
            }
        }
        if (m == 2)
        {
            if (ContainsOrangeColor(luty[d-1]->GetBitmap()))
            {
                text_dzis_dzien->SetForegroundColour(wxColour(255, 127, 39));
                text_dzis_dzien->Refresh();
                text_dzis_dzien->Update();
            }
            if (ContainsRedColor(luty[d-1]->GetBitmap()))
            {
                text_dzis_dzien->SetForegroundColour(wxColour(237, 28, 36));
                text_dzis_dzien->Refresh();
                text_dzis_dzien->Update();
            }
        }
        if (m == 3)
        {
            if (ContainsOrangeColor(marzec[d-1]->GetBitmap()))
            {
                text_dzis_dzien->SetForegroundColour(wxColour(255, 127, 39));
                text_dzis_dzien->Refresh();
                text_dzis_dzien->Update();
            }
            if (ContainsRedColor(marzec[d-1]->GetBitmap()))
            {
                text_dzis_dzien->SetForegroundColour(wxColour(237, 28, 36));
                text_dzis_dzien->Refresh();
                text_dzis_dzien->Update();
            }
        }
        if (m == 4)
        {
            if (ContainsOrangeColor(kwiecien[d-1]->GetBitmap()))
            {
                text_dzis_dzien->SetForegroundColour(wxColour(255, 127, 39));
                text_dzis_dzien->Refresh();
                text_dzis_dzien->Update();
            }
            if (ContainsRedColor(kwiecien[d-1]->GetBitmap()))
            {
                text_dzis_dzien->SetForegroundColour(wxColour(237, 28, 36));
                text_dzis_dzien->Refresh();
                text_dzis_dzien->Update();
            }
        }
        if (m == 5)
        {
            if (ContainsOrangeColor(maj[d-1]->GetBitmap()))
            {
                text_dzis_dzien->SetForegroundColour(wxColour(255, 127, 39));
                text_dzis_dzien->Refresh();
                text_dzis_dzien->Update();
            }
            if (ContainsRedColor(maj[d-1]->GetBitmap()))
            {
                text_dzis_dzien->SetForegroundColour(wxColour(237, 28, 36));
                text_dzis_dzien->Refresh();
                text_dzis_dzien->Update();
            }
        }
        if (m == 6)
        {
            if (ContainsOrangeColor(czerwiec[d-1]->GetBitmap()))
            {
                text_dzis_dzien->SetForegroundColour(wxColour(255, 127, 39));
                text_dzis_dzien->Refresh();
                text_dzis_dzien->Update();
            }
            if (ContainsRedColor(czerwiec[d-1]->GetBitmap()))
            {
                text_dzis_dzien->SetForegroundColour(wxColour(237, 28, 36));
                text_dzis_dzien->Refresh();
                text_dzis_dzien->Update();
            }
        }
        if (m == 7)
        {
            if (ContainsOrangeColor(lipiec[d-1]->GetBitmap()))
            {
                text_dzis_dzien->SetForegroundColour(wxColour(255, 127, 39));
                text_dzis_dzien->Refresh();
                text_dzis_dzien->Update();
            }
            if (ContainsRedColor(lipiec[d-1]->GetBitmap()))
            {
                text_dzis_dzien->SetForegroundColour(wxColour(237, 28, 36));
                text_dzis_dzien->Refresh();
                text_dzis_dzien->Update();
            }
        }
        if (m == 8)
        {
            if (ContainsOrangeColor(sierpien[d-1]->GetBitmap()))
            {
                text_dzis_dzien->SetForegroundColour(wxColour(255, 127, 39));
                text_dzis_dzien->Refresh();
                text_dzis_dzien->Update();
            }
            if (ContainsRedColor(sierpien[d-1]->GetBitmap()))
            {
                text_dzis_dzien->SetForegroundColour(wxColour(237, 28, 36));
                text_dzis_dzien->Refresh();
                text_dzis_dzien->Update();
            }
        }
        if (m == 9)
        {
            if (ContainsOrangeColor(wrzesien[d-1]->GetBitmap()))
            {
                text_dzis_dzien->SetForegroundColour(wxColour(255, 127, 39));
                text_dzis_dzien->Refresh();
                text_dzis_dzien->Update();
            }
            if (ContainsRedColor(wrzesien[d-1]->GetBitmap()))
            {
                text_dzis_dzien->SetForegroundColour(wxColour(237, 28, 36));
                text_dzis_dzien->Refresh();
                text_dzis_dzien->Update();
            }
        }
        if (m == 10)
        {
            if (ContainsOrangeColor(pazdziernik[d-1]->GetBitmap()))
            {
                text_dzis_dzien->SetForegroundColour(wxColour(255, 127, 39));
                text_dzis_dzien->Refresh();
                text_dzis_dzien->Update();
            }
            if (ContainsRedColor(pazdziernik[d-1]->GetBitmap()))
            {
                text_dzis_dzien->SetForegroundColour(wxColour(237, 28, 36));
                text_dzis_dzien->Refresh();
                text_dzis_dzien->Update();
            }
        }
        if (m == 11)
        {
            if (ContainsOrangeColor(listopad[d-1]->GetBitmap()))
            {
                text_dzis_dzien->SetForegroundColour(wxColour(255, 127, 39));
                text_dzis_dzien->Refresh();
                text_dzis_dzien->Update();
            }
            if (ContainsRedColor(listopad[d-1]->GetBitmap()))
            {
                text_dzis_dzien->SetForegroundColour(wxColour(237, 28, 36));
                text_dzis_dzien->Refresh();
                text_dzis_dzien->Update();
            }
        }
        if (m == 12)
        {
            if (ContainsOrangeColor(grudzien[d-1]->GetBitmap()))
            {
                text_dzis_dzien->SetForegroundColour(wxColour(255, 127, 39));
                text_dzis_dzien->Refresh();
                text_dzis_dzien->Update();
            }
            if (ContainsRedColor(grudzien[d-1]->GetBitmap()))
            {
                text_dzis_dzien->SetForegroundColour(wxColour(237, 28, 36));
                text_dzis_dzien->Refresh();
                text_dzis_dzien->Update();
            }
        }
    }
}



void kalendarzDialog::OdtworzWydarzenia(wxBoxSizer* wydarzenia, const std::vector<WydarzenieData>& wydarzeniaDnia)
{
    int height = 190;

    for (const WydarzenieData& data : wydarzeniaDnia)
    {
        wxStaticText* nowyTekst = new wxStaticText(infoDialog, wxID_ANY, data.label);
        wxFont font(17, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, _T("Arial"), wxFONTENCODING_DEFAULT);
        nowyTekst->SetFont(font);
        nowyTekst->SetForegroundColour(data.colour);
        wydarzenia->Add(nowyTekst, 1, wxALL | wxALIGN_CENTER, 5);

        height = height + 40;
        infoDialog->SetSize(wxSize(720, height));
        infoDialog->SetMinSize(wxSize(720, height));
    }

    infoDialog->Layout();
}



bool kalendarzDialog::CzyIstniejeWydarzenie(const std::vector<std::vector<WydarzenieData>>& miesiac)
{
    for (const auto& dzien : miesiac)
    {
        if (!dzien.empty())
        {
            return true;
        }
    }
    return false;
}

bool kalendarzDialog::CzyIstniejeJakiekolwiekWydarzenie()
{
    return CzyIstniejeWydarzenie(wlasne_wyd_styczen) ||
           CzyIstniejeWydarzenie(wlasne_wyd_luty) ||
           CzyIstniejeWydarzenie(wlasne_wyd_marzec) ||
           CzyIstniejeWydarzenie(wlasne_wyd_kwiecien) ||
           CzyIstniejeWydarzenie(wlasne_wyd_maj) ||
           CzyIstniejeWydarzenie(wlasne_wyd_czerwiec) ||
           CzyIstniejeWydarzenie(wlasne_wyd_lipiec) ||
           CzyIstniejeWydarzenie(wlasne_wyd_sierpien) ||
           CzyIstniejeWydarzenie(wlasne_wyd_wrzesien) ||
           CzyIstniejeWydarzenie(wlasne_wyd_pazdziernik) ||
           CzyIstniejeWydarzenie(wlasne_wyd_listopad) ||
           CzyIstniejeWydarzenie(wlasne_wyd_grudzien);
}




// Funkcja zapisująca dane do pliku
void kalendarzDialog::ZapiszWydarzeniaDoPliku(const wxString& sciezkaPliku,
                             const std::vector<std::vector<WydarzenieData>>& styczen,
                             const std::vector<std::vector<WydarzenieData>>& luty,
                             const std::vector<std::vector<WydarzenieData>>& marzec,
                             const std::vector<std::vector<WydarzenieData>>& kwiecien,
                             const std::vector<std::vector<WydarzenieData>>& maj,
                             const std::vector<std::vector<WydarzenieData>>& czerwiec,
                             const std::vector<std::vector<WydarzenieData>>& lipiec,
                             const std::vector<std::vector<WydarzenieData>>& sierpien,
                             const std::vector<std::vector<WydarzenieData>>& wrzesien,
                             const std::vector<std::vector<WydarzenieData>>& pazdziernik,
                             const std::vector<std::vector<WydarzenieData>>& listopad,
                             const std::vector<std::vector<WydarzenieData>>& grudzien
                             )
{
    std::ofstream plik(sciezkaPliku.ToStdString(), std::ios::out | std::ios::trunc);

    if (!plik.is_open())
    {
        wxString komunikat;
        komunikat.Printf(_("Nie można otworzyć pliku do zapisu: %s"), sciezkaPliku);
        wxMessageBox(komunikat, _("Informacja"), wxOK | wxICON_ERROR);
        return;
    }

    auto zapiszMiesiac = [&plik](const std::vector<std::vector<WydarzenieData>>& miesiac, const wxString& nazwaMiesiaca)
    {
        for (size_t dzien=0; dzien < miesiac.size(); dzien++)
        {
            for (const auto& wydarzenie : miesiac[dzien])
            {
                plik << nazwaMiesiaca.ToStdString() << "," << (dzien + 1) << ",";
                plik << wydarzenie.label.ToStdString() << ","
                     << wydarzenie.colour.GetAsString(wxC2S_HTML_SYNTAX).ToStdString() << "\n";
            }
        }
    };

    zapiszMiesiac(styczen, _("Styczeń"));
    zapiszMiesiac(luty, _("Luty"));
    zapiszMiesiac(marzec, _("Marzec"));
    zapiszMiesiac(kwiecien, _("Kwiecień"));
    zapiszMiesiac(maj, _("Maj"));
    zapiszMiesiac(czerwiec, _("Czerwiec"));
    zapiszMiesiac(lipiec, _("Lipiec"));
    zapiszMiesiac(sierpien, _("Sierpień"));
    zapiszMiesiac(wrzesien, _("Wrzesień"));
    zapiszMiesiac(pazdziernik, _("Październik"));
    zapiszMiesiac(listopad, _("Listopad"));
    zapiszMiesiac(grudzien, _("Grudzień"));

    plik.close();

    wxString komunikat;
    komunikat.Printf(_("Zapisano stan do pliku: %s"), sciezkaPliku);
    wxMessageBox(komunikat, _("Informacja"), wxOK | wxICON_INFORMATION);
}





void kalendarzDialog::ZapiszStan(wxCommandEvent& event)
{
    if (CzyIstniejeJakiekolwiekWydarzenie())
    {
        ZapiszWydarzeniaDoPliku(sciezkaPliku, wlasne_wyd_styczen, wlasne_wyd_luty, wlasne_wyd_marzec, wlasne_wyd_kwiecien,
                        wlasne_wyd_maj, wlasne_wyd_czerwiec, wlasne_wyd_lipiec, wlasne_wyd_sierpien,
                        wlasne_wyd_wrzesien, wlasne_wyd_pazdziernik, wlasne_wyd_listopad, wlasne_wyd_grudzien);
    }
    else
    {
        wxMessageBox(_("Najpierw dodaj jakieś wydarzenie"), _("Błąd zapisu do pliku"), wxOK | wxICON_ERROR);
    }
}


bool kalendarzDialog::porownaj_wektory(const std::vector<std::vector<WydarzenieData>>& wczytywane,
                      const std::vector<std::vector<WydarzenieData>>& wlasne)
{
    if (wczytywane.size() != wlasne.size())
    {
        return false;  // Rozmiary głównych wektorów muszą być równe
    }

    for (size_t i = 0; i < wczytywane.size(); i++)
    {
        if (wczytywane[i].size() != wlasne[i].size())
        {
            return false;  // Rozmiary wektorów wydarzeń dla danego dnia muszą być równe
        }
        for (size_t j = 0; j < wczytywane[i].size(); j++)
        {
            const WydarzenieData& wczytane = wczytywane[i][j];
            const WydarzenieData& wlas = wlasne[i][j];
            if (wczytane.label != wlas.label ||
                wczytane.colour != wlas.colour)
            {
                return false;  // Znaleziono różnicę w danych wydarzenia
            }
        }
    }
    return true;  // Wszystkie elementy są równe
}




void kalendarzDialog::WczytajStan(wxCommandEvent& event)
{
    std::ifstream plik_wczyt(sciezkaPliku.ToStdString());

    if (!(plik_wczyt.is_open()))
    {
        wxString komunikat;
        komunikat.Printf(_("Nie można znaleźć pliku: %s"), sciezkaPliku);
        wxMessageBox(komunikat, _("Błąd wczytania z pliku"), wxOK | wxICON_ERROR);
    }
    else
    {
        // Czy plik jest pusty
        plik_wczyt.seekg(0, std::ios::end);

        if (plik_wczyt.tellg() == 0)
        {
            wxString komunikat;
            komunikat.Printf(_("Nie można wczytać stanu z pliku: %s \n (plik jest pusty)"), sciezkaPliku);
            wxMessageBox(komunikat, _("Błąd wczytania z pliku"), wxOK | wxICON_ERROR);
        }
        else
        {

            for (int i=0; i<31; i++)
            {
                if (!(wlasne_wyd_styczen[i].empty()) && !(wczytywane_wyd_styczen[i].empty()) && porownaj_wektory(wczytywane_wyd_styczen, wlasne_wyd_styczen))
                {
                    for (int i=0; i<28; i++)
                    {
                        if (!(wlasne_wyd_luty[i].empty()) && !(wczytywane_wyd_luty[i].empty()) && porownaj_wektory(wczytywane_wyd_luty, wlasne_wyd_luty))
                        {
                            for (int i=0; i<31; i++)
                            {
                                if (!(wlasne_wyd_marzec[i].empty()) && !(wczytywane_wyd_marzec[i].empty()) && porownaj_wektory(wczytywane_wyd_marzec, wlasne_wyd_marzec))
                                {
                                    for (int i=0; i<30; i++)
                                    {
                                        if (!(wlasne_wyd_kwiecien[i].empty()) && !(wczytywane_wyd_kwiecien[i].empty()) && porownaj_wektory(wczytywane_wyd_kwiecien, wlasne_wyd_kwiecien))
                                        {
                                            for (int i=0; i<31; i++)
                                            {
                                                if (!(wlasne_wyd_maj[i].empty()) && !(wczytywane_wyd_maj[i].empty()) && porownaj_wektory(wczytywane_wyd_maj, wlasne_wyd_maj))
                                                {
                                                    for (int i=0; i<30; i++)
                                                    {
                                                        if (!(wlasne_wyd_czerwiec[i].empty()) && !(wczytywane_wyd_czerwiec[i].empty()) && porownaj_wektory(wczytywane_wyd_czerwiec, wlasne_wyd_czerwiec))
                                                        {
                                                             for (int i=0; i<31; i++)
                                                            {
                                                                if (!(wlasne_wyd_lipiec[i].empty()) && !(wczytywane_wyd_lipiec[i].empty()) && porownaj_wektory(wczytywane_wyd_lipiec, wlasne_wyd_lipiec))
                                                                {
                                                                    for (int i=0; i<31; i++)
                                                                    {
                                                                        if (!(wlasne_wyd_sierpien[i].empty()) && !(wczytywane_wyd_sierpien[i].empty()) && porownaj_wektory(wczytywane_wyd_sierpien, wlasne_wyd_sierpien))
                                                                        {
                                                                            for (int i=0; i<30; i++)
                                                                            {
                                                                                if (!(wlasne_wyd_wrzesien[i].empty()) && !(wczytywane_wyd_wrzesien[i].empty()) && porownaj_wektory(wczytywane_wyd_wrzesien, wlasne_wyd_wrzesien))
                                                                                {
                                                                                    for (int i=0; i<31; i++)
                                                                                    {
                                                                                        if (!(wlasne_wyd_pazdziernik[i].empty()) && !(wczytywane_wyd_pazdziernik[i].empty()) && porownaj_wektory(wczytywane_wyd_pazdziernik, wlasne_wyd_pazdziernik))
                                                                                        {
                                                                                            for (int i=0; i<30; i++)
                                                                                            {
                                                                                                if (!(wlasne_wyd_listopad[i].empty()) && !(wczytywane_wyd_listopad[i].empty()) && porownaj_wektory(wczytywane_wyd_listopad, wlasne_wyd_listopad))
                                                                                                {
                                                                                                    for (int i=0; i<31; i++)
                                                                                                    {
                                                                                                        if (!(wlasne_wyd_grudzien[i].empty()) && !(wczytywane_wyd_grudzien[i].empty()) && porownaj_wektory(wczytywane_wyd_grudzien, wlasne_wyd_grudzien))
                                                                                                        {
                                                                                                            return;
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }



            for (auto& dzien : wczytywane_wyd_styczen)
            {
                dzien.clear();
            }
            for (auto& dzien : wlasne_wyd_styczen)
            {
                dzien.clear();
            }

            for (int i=0; i<31; i++)
            {
                std::string sciezka_std = "img//" + std::to_string(i+1) + ".jpg";
                wxString sciezka = wxString::FromUTF8(sciezka_std);
                styczen[i]->SetBitmap(wxImage(sciezka));
            }
            styczen[0]->SetBitmap(wxImage(_T("img/1swieto.jpg")));
            styczen[5]->SetBitmap(wxImage(_T("img/6swieto.jpg")));
            styczen[20]->SetBitmap(wxImage(_T("img/21inneswieto.jpg")));
            styczen[21]->SetBitmap(wxImage(_T("img/22inneswieto.jpg")));



            for (auto& dzien : wczytywane_wyd_luty)
            {
                dzien.clear();
            }
            for (auto& dzien : wlasne_wyd_luty)
            {
                dzien.clear();
            }

            for (int i=0; i<28; i++)
            {
                std::string sciezka_std = "img//" + std::to_string(i+1) + ".jpg";
                wxString sciezka = wxString::FromUTF8(sciezka_std);
                luty[i]->SetBitmap(wxImage(sciezka));
            }
            luty[1]->SetBitmap(wxImage(_T("img/2inneswieto.jpg")));
            luty[13]->SetBitmap(wxImage(_T("img/14inneswieto.jpg")));
            luty[26]->SetBitmap(wxImage(_T("img/27inneswieto.jpg")));

            for (auto& dzien : wczytywane_wyd_marzec)
            {
                dzien.clear();
            }
            for (auto& dzien : wlasne_wyd_marzec)
            {
                dzien.clear();
            }

            for (int i=0; i<31; i++)
            {
                std::string sciezka_std = "img//" + std::to_string(i+1) + ".jpg";
                wxString sciezka = wxString::FromUTF8(sciezka_std);
                marzec[i]->SetBitmap(wxImage(sciezka));
            }
            marzec[0]->SetBitmap(wxImage(_T("img/1inneswieto.jpg")));
            marzec[3]->SetBitmap(wxImage(_T("img/4inneswieto.jpg")));
            marzec[4]->SetBitmap(wxImage(_T("img/5inneswieto.jpg")));
            marzec[7]->SetBitmap(wxImage(_T("img/8inneswieto.jpg")));
            marzec[9]->SetBitmap(wxImage(_T("img/10inneswieto.jpg")));
            marzec[19]->SetBitmap(wxImage(_T("img/20inneswieto.jpg")));
            marzec[29]->SetBitmap(wxImage(_T("img/30inneswieto.jpg")));

            for (auto& dzien : wczytywane_wyd_kwiecien)
            {
                dzien.clear();
            }
            for (auto& dzien : wlasne_wyd_kwiecien)
            {
                dzien.clear();
            }

            for (int i=0; i<30; i++)
            {
                std::string sciezka_std = "img//" + std::to_string(i+1) + ".jpg";
                wxString sciezka = wxString::FromUTF8(sciezka_std);
                kwiecien[i]->SetBitmap(wxImage(sciezka));
            }
            kwiecien[0]->SetBitmap(wxImage(_T("img/1inneswieto.jpg")));
            kwiecien[12]->SetBitmap(wxImage(_T("img/13inneswieto.jpg")));
            kwiecien[16]->SetBitmap(wxImage(_T("img/17inneswieto.jpg")));
            kwiecien[17]->SetBitmap(wxImage(_T("img/18inneswieto.jpg")));
            kwiecien[18]->SetBitmap(wxImage(_T("img/19inneswieto.jpg")));
            kwiecien[19]->SetBitmap(wxImage(_T("img/20swieto.jpg")));
            kwiecien[20]->SetBitmap(wxImage(_T("img/21swieto.jpg")));
            kwiecien[21]->SetBitmap(wxImage(_T("img/22inneswieto.jpg")));
            kwiecien[26]->SetBitmap(wxImage(_T("img/27inneswieto.jpg")));

            for (auto& dzien : wczytywane_wyd_maj)
            {
                dzien.clear();
            }
            for (auto& dzien : wlasne_wyd_maj)
            {
                dzien.clear();
            }

            for (int i=0; i<31; i++)
            {
                std::string sciezka_std = "img//" + std::to_string(i+1) + ".jpg";
                wxString sciezka = wxString::FromUTF8(sciezka_std);
                maj[i]->SetBitmap(wxImage(sciezka));
            }
            maj[0]->SetBitmap(wxImage(_T("img/1swieto.jpg")));
            maj[1]->SetBitmap(wxImage(_T("img/2inneswieto.jpg")));
            maj[2]->SetBitmap(wxImage(_T("img/3swieto.jpg")));
            maj[25]->SetBitmap(wxImage(_T("img/26inneswieto.jpg")));

            for (auto& dzien : wczytywane_wyd_czerwiec)
            {
                dzien.clear();
            }
            for (auto& dzien : wlasne_wyd_czerwiec)
            {
                dzien.clear();
            }

            for (int i=0; i<30; i++)
            {
                std::string sciezka_std = "img//" + std::to_string(i+1) + ".jpg";
                wxString sciezka = wxString::FromUTF8(sciezka_std);
                czerwiec[i]->SetBitmap(wxImage(sciezka));
            }
            czerwiec[0]->SetBitmap(wxImage(_T("img/1inneswieto.jpg")));
            czerwiec[7]->SetBitmap(wxImage(_T("img/8swieto.jpg")));
            czerwiec[18]->SetBitmap(wxImage(_T("img/19swieto.jpg")));
            czerwiec[20]->SetBitmap(wxImage(_T("img/21inneswieto.jpg")));
            czerwiec[22]->SetBitmap(wxImage(_T("img/23inneswieto.jpg")));

            for (auto& dzien : wczytywane_wyd_lipiec)
            {
                dzien.clear();
            }
            for (auto& dzien : wlasne_wyd_lipiec)
            {
                dzien.clear();
            }

            for (int i=0; i<31; i++)
            {
                std::string sciezka_std = "img//" + std::to_string(i+1) + ".jpg";
                wxString sciezka = wxString::FromUTF8(sciezka_std);
                lipiec[i]->SetBitmap(wxImage(sciezka));
            }

            for (auto& dzien : wczytywane_wyd_sierpien)
            {
                dzien.clear();
            }
            for (auto& dzien : wlasne_wyd_sierpien)
            {
                dzien.clear();
            }

            for (int i=0; i<31; i++)
            {
                std::string sciezka_std = "img//" + std::to_string(i+1) + ".jpg";
                wxString sciezka = wxString::FromUTF8(sciezka_std);
                sierpien[i]->SetBitmap(wxImage(sciezka));
            }
            sierpien[0]->SetBitmap(wxImage(_T("img/1inneswieto.jpg")));
            sierpien[14]->SetBitmap(wxImage(_T("img/15swieto.jpg")));
            sierpien[30]->SetBitmap(wxImage(_T("img/31inneswieto.jpg")));

            for (auto& dzien : wczytywane_wyd_wrzesien)
            {
                dzien.clear();
            }
            for (auto& dzien : wlasne_wyd_wrzesien)
            {
                dzien.clear();
            }

            for (int i=0; i<30; i++)
            {
                std::string sciezka_std = "img//" + std::to_string(i+1) + ".jpg";
                wxString sciezka = wxString::FromUTF8(sciezka_std);
                wrzesien[i]->SetBitmap(wxImage(sciezka));
            }
            wrzesien[21]->SetBitmap(wxImage(_T("img/22inneswieto.jpg")));
            wrzesien[29]->SetBitmap(wxImage(_T("img/30inneswieto.jpg")));

            for (auto& dzien : wczytywane_wyd_pazdziernik)
            {
                dzien.clear();
            }
            for (auto& dzien : wlasne_wyd_pazdziernik)
            {
                dzien.clear();
            }

            for (int i=0; i<31; i++)
            {
                std::string sciezka_std = "img//" + std::to_string(i+1) + ".jpg";
                wxString sciezka = wxString::FromUTF8(sciezka_std);
                pazdziernik[i]->SetBitmap(wxImage(sciezka));
            }
            pazdziernik[13]->SetBitmap(wxImage(_T("img/14inneswieto.jpg")));
            pazdziernik[25]->SetBitmap(wxImage(_T("img/26inneswieto.jpg")));

            for (auto& dzien : wczytywane_wyd_listopad)
            {
                dzien.clear();
            }
            for (auto& dzien : wlasne_wyd_listopad)
            {
                dzien.clear();
            }

            for (int i=0; i<30; i++)
            {
                std::string sciezka_std = "img//" + std::to_string(i+1) + ".jpg";
                wxString sciezka = wxString::FromUTF8(sciezka_std);
                listopad[i]->SetBitmap(wxImage(sciezka));
            }
            listopad[0]->SetBitmap(wxImage(_T("img/1swieto.jpg")));
            listopad[1]->SetBitmap(wxImage(_T("img/2inneswieto.jpg")));
            listopad[10]->SetBitmap(wxImage(_T("img/11swieto.jpg")));
            listopad[28]->SetBitmap(wxImage(_T("img/29inneswieto.jpg")));

            for (auto& dzien : wczytywane_wyd_grudzien)
            {
                dzien.clear();
            }
            for (auto& dzien : wlasne_wyd_grudzien)
            {
                dzien.clear();
            }

            for (int i=0; i<31; i++)
            {
                std::string sciezka_std = "img//" + std::to_string(i+1) + ".jpg";
                wxString sciezka = wxString::FromUTF8(sciezka_std);
                grudzien[i]->SetBitmap(wxImage(sciezka));
            }
            grudzien[3]->SetBitmap(wxImage(_T("img/4inneswieto.jpg")));
            grudzien[5]->SetBitmap(wxImage(_T("img/6inneswieto.jpg")));
            grudzien[20]->SetBitmap(wxImage(_T("img/21inneswieto.jpg")));
            grudzien[23]->SetBitmap(wxImage(_T("img/24swieto.jpg")));
            grudzien[24]->SetBitmap(wxImage(_T("img/25swieto.jpg")));
            grudzien[25]->SetBitmap(wxImage(_T("img/26swieto.jpg")));
            grudzien[26]->SetBitmap(wxImage(_T("img/27inneswieto.jpg")));
            grudzien[30]->SetBitmap(wxImage(_T("img/31inneswieto.jpg")));


        plik_wczyt.seekg(0, std::ios::beg);  // Powrót wskaźnika na początek

            std::string linia;
            while (std::getline(plik_wczyt, linia))
            {
                std::istringstream ss(linia);
                std::string miesiac, label, kolorHex;
                int dzien;

                if (std::getline(ss, miesiac, ',') && ss >> dzien && ss.ignore() && std::getline(ss, label, ',') && std::getline(ss, kolorHex, ';'))
                {
                    WydarzenieData wydarzenie;
                    wydarzenie.label = wxString::FromUTF8(label);
                    wydarzenie.colour = wxColour(wxString::FromUTF8(kolorHex));

                        if (miesiac == _("Styczeń") && dzien >= 1 && dzien <= 31)
                        {
                            wczytywane_wyd_styczen[dzien - 1].push_back(wydarzenie);
                        }
                        else if (miesiac == _("Luty") && dzien >= 1 && dzien <= 28)
                        {
                            wczytywane_wyd_luty[dzien - 1].push_back(wydarzenie);
                        }
                        else if (miesiac == _("Marzec") && dzien >= 1 && dzien <= 31)
                        {
                            wczytywane_wyd_marzec[dzien - 1].push_back(wydarzenie);
                        }
                        else if (miesiac == _("Kwiecień") && dzien >= 1 && dzien <= 30)
                        {
                            wczytywane_wyd_kwiecien[dzien - 1].push_back(wydarzenie);
                        }
                        else if (miesiac == _("Maj") && dzien >= 1 && dzien <= 31)
                        {
                            wczytywane_wyd_maj[dzien - 1].push_back(wydarzenie);
                        }
                        else if (miesiac == _("Czerwiec") && dzien >= 1 && dzien <= 30)
                        {
                            wczytywane_wyd_czerwiec[dzien - 1].push_back(wydarzenie);
                        }
                        else if (miesiac == _("Lipiec") && dzien >= 1 && dzien <= 31)
                        {
                            wczytywane_wyd_lipiec[dzien - 1].push_back(wydarzenie);
                        }
                        else if (miesiac == _("Sierpień") && dzien >= 1 && dzien <= 31)
                        {
                            wczytywane_wyd_sierpien[dzien - 1].push_back(wydarzenie);
                        }
                        else if (miesiac == _("Wrzesień") && dzien >= 1 && dzien <= 30)
                        {
                            wczytywane_wyd_wrzesien[dzien - 1].push_back(wydarzenie);
                        }
                        else if (miesiac == _("Październik") && dzien >= 1 && dzien <= 31)
                        {
                            wczytywane_wyd_pazdziernik[dzien - 1].push_back(wydarzenie);
                        }
                        else if (miesiac == _("Listopad") && dzien >= 1 && dzien <= 30)
                        {
                            wczytywane_wyd_listopad[dzien - 1].push_back(wydarzenie);
                        }
                        else if (miesiac == _("Grudzień") && dzien >= 1 && dzien <= 31)
                        {
                            wczytywane_wyd_grudzien[dzien - 1].push_back(wydarzenie);
                        }
                }
            }

            plik_wczyt.close();




                if (
                    !(wczytywane_wyd_styczen.empty()) ||
                    !(wczytywane_wyd_luty.empty()) ||
                    !(wczytywane_wyd_marzec.empty()) ||
                    !(wczytywane_wyd_kwiecien.empty()) ||
                    !(wczytywane_wyd_maj.empty()) ||
                    !(wczytywane_wyd_czerwiec.empty()) ||
                    !(wczytywane_wyd_lipiec.empty()) ||
                    !(wczytywane_wyd_sierpien.empty()) ||
                    !(wczytywane_wyd_wrzesien.empty()) ||
                    !(wczytywane_wyd_pazdziernik.empty()) ||
                    !(wczytywane_wyd_listopad.empty()) ||
                    !(wczytywane_wyd_grudzien.empty())
                   )
                    {

                        wxString miesiac = StaticText1->GetLabel();

                        wxColour pomaranczowy(wxT("#FF7F27"));
                        wxColour czerwony(wxT("#ED1C24"));


                            for (size_t dzien = 0; dzien < wczytywane_wyd_styczen.size(); dzien++)
                            {
                                for (const auto& wydarzenie : wczytywane_wyd_styczen[dzien])
                                {
                                    int height = 190;

                                    if (wydarzenie.colour == czerwony)
                                    {
                                        wxBitmap bitmapa = styczen[dzien]->GetBitmap();

                                        std::string dz = std::to_string(dzien+1);

                                        styczen[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_p.jpg")));

                                        if (ContainsOrangeColor(bitmapa))
                                        {
                                            styczen[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                                        }

                                        if (dzien == 0 || dzien == 5)
                                        {
                                            styczen[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_p.jpg")));

                                            if (ContainsOrangeColor(bitmapa))
                                            {
                                                styczen[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wlp.jpg")));
                                            }
                                        }
                                        if  (dzien == 20 || dzien == 21)
                                        {
                                            styczen[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_p.jpg")));

                                            if (ContainsOrangeColor(bitmapa))
                                            {
                                                styczen[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                                            }
                                        }
                                        height = height + 40;
                                    }

                                    if (wydarzenie.colour == pomaranczowy)
                                    {
                                        wxBitmap bitmapa = styczen[dzien]->GetBitmap();

                                        std::string dz = std::to_string(dzien+1);

                                        styczen[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wl.jpg")));

                                        if (ContainsRedColor(bitmapa))
                                        {
                                            styczen[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                                        }

                                        if (dzien == 0 || dzien == 5)
                                        {
                                            styczen[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wl.jpg")));

                                            if (ContainsRedColor(bitmapa))
                                            {
                                                styczen[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wlp.jpg")));
                                            }
                                        }
                                        if (dzien == 20 || dzien == 21)
                                        {
                                            styczen[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wl.jpg")));

                                            if (ContainsRedColor(bitmapa))
                                            {
                                                styczen[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                                            }
                                        }

                                        height = height + 40;
                                    }
                                    wlasne_wyd_styczen[dzien].push_back(wydarzenie);
                                }
                            }

                            for (size_t dzien = 0; dzien < wczytywane_wyd_luty.size(); dzien++)
                            {
                                for (const auto& wydarzenie : wczytywane_wyd_luty[dzien])
                                {
                                    int height = 190;

                                    if (wydarzenie.colour == czerwony)
                                    {
                                        wxBitmap bitmapa = luty[dzien]->GetBitmap();

                                        std::string dz = std::to_string(dzien+1);

                                        luty[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_p.jpg")));

                                        if (ContainsOrangeColor(bitmapa))
                                        {
                                            luty[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                                        }
                                        if  (dzien == 1 || dzien == 13 || dzien == 26)
                                        {
                                            luty[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_p.jpg")));

                                            if (ContainsOrangeColor(bitmapa))
                                            {
                                                luty[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                                            }
                                        }
                                        height = height + 40;
                                    }

                                    if (wydarzenie.colour == pomaranczowy)
                                    {
                                        wxBitmap bitmapa = luty[dzien]->GetBitmap();

                                        std::string dz = std::to_string(dzien+1);

                                        luty[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wl.jpg")));

                                        if (ContainsRedColor(bitmapa))
                                        {
                                            luty[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                                        }
                                        if (dzien == 1 || dzien == 13 || dzien == 26)
                                        {
                                            luty[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wl.jpg")));

                                            if (ContainsRedColor(bitmapa))
                                            {
                                                luty[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                                            }
                                        }

                                        height = height + 40;
                                    }
                                    wlasne_wyd_luty[dzien].push_back(wydarzenie);
                                }
                            }

                            for (size_t dzien = 0; dzien < wczytywane_wyd_marzec.size(); dzien++)
                            {
                                for (const auto& wydarzenie : wczytywane_wyd_marzec[dzien])
                                {
                                    int height = 190;

                                    if (wydarzenie.colour == czerwony)
                                    {
                                        wxBitmap bitmapa = marzec[dzien]->GetBitmap();

                                        std::string dz = std::to_string(dzien+1);

                                        marzec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_p.jpg")));

                                        if (ContainsOrangeColor(bitmapa))
                                        {
                                            marzec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                                        }
                                        if  (dzien == 0 || dzien == 3 || dzien == 4 || dzien == 7 || dzien == 9 || dzien == 19 || dzien == 29)
                                        {
                                            marzec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_p.jpg")));

                                            if (ContainsOrangeColor(bitmapa))
                                            {
                                                marzec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                                            }
                                        }
                                        height = height + 40;
                                    }

                                    if (wydarzenie.colour == pomaranczowy)
                                    {
                                        wxBitmap bitmapa = marzec[dzien]->GetBitmap();

                                        std::string dz = std::to_string(dzien+1);

                                        marzec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wl.jpg")));

                                        if (ContainsRedColor(bitmapa))
                                        {
                                            marzec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                                        }
                                        if (dzien == 0 || dzien == 3 || dzien == 4 || dzien == 7 || dzien == 9 || dzien == 19 || dzien == 29)
                                        {
                                            marzec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wl.jpg")));

                                            if (ContainsRedColor(bitmapa))
                                            {
                                                marzec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                                            }
                                        }

                                        height = height + 40;
                                    }
                                    wlasne_wyd_marzec[dzien].push_back(wydarzenie);
                                }
                            }

                            for (size_t dzien = 0; dzien < wczytywane_wyd_kwiecien.size(); dzien++)
                            {
                                for (const auto& wydarzenie : wczytywane_wyd_kwiecien[dzien])
                                {
                                    int height = 190;

                                    if (wydarzenie.colour == czerwony)
                                    {
                                        wxBitmap bitmapa = kwiecien[dzien]->GetBitmap();

                                        std::string dz = std::to_string(dzien+1);

                                        kwiecien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_p.jpg")));

                                        if (ContainsOrangeColor(bitmapa))
                                        {
                                            kwiecien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                                        }

                                        if (dzien == 19 || dzien == 20)
                                        {
                                            kwiecien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_p.jpg")));

                                            if (ContainsOrangeColor(bitmapa))
                                            {
                                                kwiecien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wlp.jpg")));
                                            }
                                        }
                                        if  (dzien == 0 || dzien == 12 || dzien == 16 || dzien == 17 || dzien == 18 || dzien == 21 || dzien == 26)
                                        {
                                            kwiecien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_p.jpg")));

                                            if (ContainsOrangeColor(bitmapa))
                                            {
                                                kwiecien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                                            }
                                        }
                                        height = height + 40;
                                    }

                                    if (wydarzenie.colour == pomaranczowy)
                                    {
                                        wxBitmap bitmapa = kwiecien[dzien]->GetBitmap();

                                        std::string dz = std::to_string(dzien+1);

                                        kwiecien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wl.jpg")));

                                        if (ContainsRedColor(bitmapa))
                                        {
                                            kwiecien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                                        }

                                        if (dzien == 19 || dzien == 20)
                                        {
                                            kwiecien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wl.jpg")));

                                            if (ContainsRedColor(bitmapa))
                                            {
                                                kwiecien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wlp.jpg")));
                                            }
                                        }
                                        if (dzien == 0 || dzien == 12 || dzien == 16 || dzien == 17 || dzien == 18 || dzien == 21 || dzien == 26)
                                        {
                                            kwiecien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wl.jpg")));

                                            if (ContainsRedColor(bitmapa))
                                            {
                                                kwiecien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                                            }
                                        }

                                        height = height + 40;
                                    }
                                    wlasne_wyd_kwiecien[dzien].push_back(wydarzenie);
                                }
                            }

                            for (size_t dzien = 0; dzien < wczytywane_wyd_maj.size(); dzien++)
                            {
                                for (const auto& wydarzenie : wczytywane_wyd_maj[dzien])
                                {
                                    int height = 190;

                                    if (wydarzenie.colour == czerwony)
                                    {
                                        wxBitmap bitmapa = maj[dzien]->GetBitmap();

                                        std::string dz = std::to_string(dzien+1);

                                        maj[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_p.jpg")));

                                        if (ContainsOrangeColor(bitmapa))
                                        {
                                            maj[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                                        }

                                        if (dzien == 0 || dzien == 2)
                                        {
                                            maj[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_p.jpg")));

                                            if (ContainsOrangeColor(bitmapa))
                                            {
                                                maj[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wlp.jpg")));
                                            }
                                        }
                                        if  (dzien == 1 || dzien == 25)
                                        {
                                            maj[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_p.jpg")));

                                            if (ContainsOrangeColor(bitmapa))
                                            {
                                                maj[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                                            }
                                        }
                                        height = height + 40;
                                    }

                                    if (wydarzenie.colour == pomaranczowy)
                                    {
                                        wxBitmap bitmapa = maj[dzien]->GetBitmap();

                                        std::string dz = std::to_string(dzien+1);

                                        maj[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wl.jpg")));

                                        if (ContainsRedColor(bitmapa))
                                        {
                                            maj[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                                        }

                                        if (dzien == 0 || dzien == 2)
                                        {
                                            maj[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wl.jpg")));

                                            if (ContainsRedColor(bitmapa))
                                            {
                                                maj[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wlp.jpg")));
                                            }
                                        }
                                        if (dzien == 1 || dzien == 25)
                                        {
                                            maj[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wl.jpg")));

                                            if (ContainsRedColor(bitmapa))
                                            {
                                                maj[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                                            }
                                        }

                                        height = height + 40;
                                    }
                                    wlasne_wyd_maj[dzien].push_back(wydarzenie);
                                }
                            }

                            for (size_t dzien = 0; dzien < wczytywane_wyd_czerwiec.size(); dzien++)
                            {
                                for (const auto& wydarzenie : wczytywane_wyd_czerwiec[dzien])
                                {
                                    int height = 190;

                                    if (wydarzenie.colour == czerwony)
                                    {
                                        wxBitmap bitmapa = czerwiec[dzien]->GetBitmap();

                                        std::string dz = std::to_string(dzien+1);

                                        czerwiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_p.jpg")));

                                        if (ContainsOrangeColor(bitmapa))
                                        {
                                            czerwiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                                        }

                                        if (dzien == 7 || dzien == 18)
                                        {
                                            czerwiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_p.jpg")));

                                            if (ContainsOrangeColor(bitmapa))
                                            {
                                                czerwiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wlp.jpg")));
                                            }
                                        }
                                        if  (dzien == 0 || dzien == 20 || dzien == 22)
                                        {
                                            czerwiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_p.jpg")));

                                            if (ContainsOrangeColor(bitmapa))
                                            {
                                                czerwiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                                            }
                                        }
                                        height = height + 40;
                                    }

                                    if (wydarzenie.colour == pomaranczowy)
                                    {
                                        wxBitmap bitmapa = czerwiec[dzien]->GetBitmap();

                                        std::string dz = std::to_string(dzien+1);

                                        czerwiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wl.jpg")));

                                        if (ContainsRedColor(bitmapa))
                                        {
                                            czerwiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                                        }

                                        if (dzien == 7 || dzien == 18)
                                        {
                                            czerwiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wl.jpg")));

                                            if (ContainsRedColor(bitmapa))
                                            {
                                                czerwiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wlp.jpg")));
                                            }
                                        }
                                        if (dzien == 0 || dzien == 20 || dzien == 22)
                                        {
                                            czerwiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wl.jpg")));

                                            if (ContainsRedColor(bitmapa))
                                            {
                                                czerwiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                                            }
                                        }

                                        height = height + 40;
                                    }
                                    wlasne_wyd_czerwiec[dzien].push_back(wydarzenie);
                                }
                            }

                            for (size_t dzien = 0; dzien < wczytywane_wyd_lipiec.size(); dzien++)
                            {
                                for (const auto& wydarzenie : wczytywane_wyd_lipiec[dzien])
                                {
                                    int height = 190;

                                    if (wydarzenie.colour == czerwony)
                                    {
                                        wxBitmap bitmapa = lipiec[dzien]->GetBitmap();

                                        std::string dz = std::to_string(dzien+1);

                                        lipiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_p.jpg")));

                                        if (ContainsOrangeColor(bitmapa))
                                        {
                                            lipiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                                        }

                                        height = height + 40;
                                    }

                                    if (wydarzenie.colour == pomaranczowy)
                                    {
                                        wxBitmap bitmapa = lipiec[dzien]->GetBitmap();

                                        std::string dz = std::to_string(dzien+1);

                                        lipiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wl.jpg")));

                                        if (ContainsRedColor(bitmapa))
                                        {
                                            lipiec[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                                        }

                                        height = height + 40;
                                    }
                                    wlasne_wyd_lipiec[dzien].push_back(wydarzenie);
                                }
                            }

                            for (size_t dzien = 0; dzien < wczytywane_wyd_sierpien.size(); dzien++)
                            {
                                for (const auto& wydarzenie : wczytywane_wyd_sierpien[dzien])
                                {
                                    int height = 190;

                                    if (wydarzenie.colour == czerwony)
                                    {
                                        wxBitmap bitmapa = sierpien[dzien]->GetBitmap();

                                        std::string dz = std::to_string(dzien+1);

                                        sierpien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_p.jpg")));

                                        if (ContainsOrangeColor(bitmapa))
                                        {
                                            sierpien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                                        }

                                        if (dzien == 14)
                                        {
                                            sierpien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_p.jpg")));

                                            if (ContainsOrangeColor(bitmapa))
                                            {
                                                sierpien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wlp.jpg")));
                                            }
                                        }
                                        if  (dzien == 0 || dzien == 30)
                                        {
                                            sierpien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_p.jpg")));

                                            if (ContainsOrangeColor(bitmapa))
                                            {
                                                sierpien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                                            }
                                        }
                                        height = height + 40;
                                    }

                                    if (wydarzenie.colour == pomaranczowy)
                                    {
                                        wxBitmap bitmapa = sierpien[dzien]->GetBitmap();

                                        std::string dz = std::to_string(dzien+1);

                                        sierpien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wl.jpg")));

                                        if (ContainsRedColor(bitmapa))
                                        {
                                            sierpien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                                        }

                                        if (dzien == 14)
                                        {
                                            sierpien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wl.jpg")));

                                            if (ContainsRedColor(bitmapa))
                                            {
                                                sierpien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wlp.jpg")));
                                            }
                                        }
                                        if (dzien == 0 || dzien == 30)
                                        {
                                            sierpien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wl.jpg")));

                                            if (ContainsRedColor(bitmapa))
                                            {
                                                sierpien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                                            }
                                        }

                                        height = height + 40;
                                    }
                                    wlasne_wyd_sierpien[dzien].push_back(wydarzenie);
                                }
                            }

                            for (size_t dzien = 0; dzien < wczytywane_wyd_wrzesien.size(); dzien++)
                            {
                                for (const auto& wydarzenie : wczytywane_wyd_wrzesien[dzien])
                                {
                                    int height = 190;

                                    if (wydarzenie.colour == czerwony)
                                    {
                                        wxBitmap bitmapa = wrzesien[dzien]->GetBitmap();

                                        std::string dz = std::to_string(dzien+1);

                                        wrzesien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_p.jpg")));

                                        if (ContainsOrangeColor(bitmapa))
                                        {
                                            wrzesien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                                        }
                                        if  (dzien == 21 || dzien == 29)
                                        {
                                            wrzesien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_p.jpg")));

                                            if (ContainsOrangeColor(bitmapa))
                                            {
                                                wrzesien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                                            }
                                        }
                                        height = height + 40;
                                    }

                                    if (wydarzenie.colour == pomaranczowy)
                                    {
                                        wxBitmap bitmapa = wrzesien[dzien]->GetBitmap();

                                        std::string dz = std::to_string(dzien+1);

                                        wrzesien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wl.jpg")));

                                        if (ContainsRedColor(bitmapa))
                                        {
                                            wrzesien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                                        }
                                        if (dzien == 21 || dzien == 29)
                                        {
                                            wrzesien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wl.jpg")));

                                            if (ContainsRedColor(bitmapa))
                                            {
                                                wrzesien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                                            }
                                        }

                                        height = height + 40;
                                    }
                                    wlasne_wyd_wrzesien[dzien].push_back(wydarzenie);
                                }
                            }

                            for (size_t dzien = 0; dzien < wczytywane_wyd_pazdziernik.size(); dzien++)
                            {
                                for (const auto& wydarzenie : wczytywane_wyd_pazdziernik[dzien])
                                {
                                    int height = 190;

                                    if (wydarzenie.colour == czerwony)
                                    {
                                        wxBitmap bitmapa = pazdziernik[dzien]->GetBitmap();

                                        std::string dz = std::to_string(dzien+1);

                                        pazdziernik[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_p.jpg")));

                                        if (ContainsOrangeColor(bitmapa))
                                        {
                                            pazdziernik[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                                        }
                                        if  (dzien == 13 || dzien == 25)
                                        {
                                            pazdziernik[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_p.jpg")));

                                            if (ContainsOrangeColor(bitmapa))
                                            {
                                                pazdziernik[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                                            }
                                        }
                                        height = height + 40;
                                    }

                                    if (wydarzenie.colour == pomaranczowy)
                                    {
                                        wxBitmap bitmapa = pazdziernik[dzien]->GetBitmap();

                                        std::string dz = std::to_string(dzien+1);

                                        pazdziernik[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wl.jpg")));

                                        if (ContainsRedColor(bitmapa))
                                        {
                                            pazdziernik[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                                        }
                                        if (dzien == 13 || dzien == 25)
                                        {
                                            pazdziernik[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wl.jpg")));

                                            if (ContainsRedColor(bitmapa))
                                            {
                                                pazdziernik[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                                            }
                                        }

                                        height = height + 40;
                                    }
                                    wlasne_wyd_pazdziernik[dzien].push_back(wydarzenie);
                                }
                            }

                            for (size_t dzien = 0; dzien < wczytywane_wyd_listopad.size(); dzien++)
                            {
                                for (const auto& wydarzenie : wczytywane_wyd_listopad[dzien])
                                {
                                    int height = 190;

                                    if (wydarzenie.colour == czerwony)
                                    {
                                        wxBitmap bitmapa = listopad[dzien]->GetBitmap();

                                        std::string dz = std::to_string(dzien+1);

                                        listopad[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_p.jpg")));

                                        if (ContainsOrangeColor(bitmapa))
                                        {
                                            listopad[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                                        }

                                        if (dzien == 0 || dzien == 10)
                                        {
                                            listopad[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_p.jpg")));

                                            if (ContainsOrangeColor(bitmapa))
                                            {
                                                listopad[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wlp.jpg")));
                                            }
                                        }
                                        if  (dzien == 1 || dzien == 28)
                                        {
                                            listopad[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_p.jpg")));

                                            if (ContainsOrangeColor(bitmapa))
                                            {
                                                listopad[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                                            }
                                        }
                                        height = height + 40;
                                    }

                                    if (wydarzenie.colour == pomaranczowy)
                                    {
                                        wxBitmap bitmapa = listopad[dzien]->GetBitmap();

                                        std::string dz = std::to_string(dzien+1);

                                        listopad[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wl.jpg")));

                                        if (ContainsRedColor(bitmapa))
                                        {
                                            listopad[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                                        }

                                        if (dzien == 0 || dzien == 10)
                                        {
                                            listopad[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wl.jpg")));

                                            if (ContainsRedColor(bitmapa))
                                            {
                                                listopad[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wlp.jpg")));
                                            }
                                        }
                                        if (dzien == 1 || dzien == 28)
                                        {
                                            listopad[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wl.jpg")));

                                            if (ContainsRedColor(bitmapa))
                                            {
                                                listopad[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                                            }
                                        }

                                        height = height + 40;
                                    }
                                    wlasne_wyd_listopad[dzien].push_back(wydarzenie);
                                }
                            }

                            for (size_t dzien = 0; dzien < wczytywane_wyd_grudzien.size(); dzien++)
                            {
                                for (const auto& wydarzenie : wczytywane_wyd_grudzien[dzien])
                                {
                                    int height = 190;

                                    if (wydarzenie.colour == czerwony)
                                    {
                                        wxBitmap bitmapa = grudzien[dzien]->GetBitmap();

                                        std::string dz = std::to_string(dzien+1);

                                        grudzien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_p.jpg")));

                                        if (ContainsOrangeColor(bitmapa))
                                        {
                                            grudzien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                                        }

                                        if (dzien == 23 || dzien == 24 || dzien == 25)
                                        {
                                            grudzien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_p.jpg")));

                                            if (ContainsOrangeColor(bitmapa))
                                            {
                                                grudzien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wlp.jpg")));
                                            }
                                        }
                                        if  (dzien == 3 || dzien == 5 || dzien == 20 || dzien == 26 || dzien == 30)
                                        {
                                            grudzien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_p.jpg")));

                                            if (ContainsOrangeColor(bitmapa))
                                            {
                                                grudzien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                                            }
                                        }
                                        height = height + 40;
                                    }

                                    if (wydarzenie.colour == pomaranczowy)
                                    {
                                        wxBitmap bitmapa = grudzien[dzien]->GetBitmap();

                                        std::string dz = std::to_string(dzien+1);

                                        grudzien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wl.jpg")));

                                        if (ContainsRedColor(bitmapa))
                                        {
                                            grudzien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"_wlp.jpg")));
                                        }

                                        if (dzien == 23 || dzien == 24 || dzien == 25)
                                        {
                                            grudzien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wl.jpg")));

                                            if (ContainsRedColor(bitmapa))
                                            {
                                                grudzien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"swieto_wlp.jpg")));
                                            }
                                        }
                                        if (dzien == 3 || dzien == 5 || dzien == 20 || dzien == 26 || dzien == 30)
                                        {
                                            grudzien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wl.jpg")));

                                            if (ContainsRedColor(bitmapa))
                                            {
                                                grudzien[dzien]->SetBitmap(wxImage(_T("img/"+dz+"inneswieto_wlp.jpg")));
                                            }
                                        }

                                        height = height + 40;
                                    }
                                    wlasne_wyd_grudzien[dzien].push_back(wydarzenie);
                                }
                            }
                    }


                            std::time_t teraz = std::time(nullptr);
                            std::tm* czas = std::localtime(&teraz);
                            int d = czas->tm_mday;
                            int m = czas->tm_mon + 1;
                            int r = czas->tm_year + 1900;

                            // Zmiana koloru czcionki dla dzisiejszego dnia, jeśli tego dnia dodano wydarzenie
                            if (r == 2025)
                            {
                                if (m == 1)
                                {
                                    if (d == 1 || d == 6)
                                    {
                                        text_dzis_dzien->SetForegroundColour(wxColour(63, 71, 204));
                                        text_dzis_dzien->Refresh();
                                        text_dzis_dzien->Update();
                                    }
                                    else if (d == 21 || d == 22)
                                    {
                                        text_dzis_dzien->SetForegroundColour(wxColour(36, 148, 185));
                                        text_dzis_dzien->Refresh();
                                        text_dzis_dzien->Update();
                                    }
                                    else
                                    {
                                        text_dzis_dzien->SetForegroundColour(wxColour(0, 0, 0));
                                        text_dzis_dzien->Refresh();
                                        text_dzis_dzien->Update();
                                    }
                                        if (ContainsOrangeColor(styczen[d-1]->GetBitmap()))
                                        {
                                            text_dzis_dzien->SetForegroundColour(wxColour(255, 127, 39));
                                            text_dzis_dzien->Refresh();
                                            text_dzis_dzien->Update();
                                        }
                                        if (ContainsRedColor(styczen[d-1]->GetBitmap()))
                                        {
                                            text_dzis_dzien->SetForegroundColour(wxColour(237, 28, 36));
                                            text_dzis_dzien->Refresh();
                                            text_dzis_dzien->Update();
                                        }
                                }
                                if (m == 2)
                                {
                                    if (d == 2 || d == 14 || d == 27)
                                    {
                                        text_dzis_dzien->SetForegroundColour(wxColour(36, 148, 185));
                                        text_dzis_dzien->Refresh();
                                        text_dzis_dzien->Update();
                                    }
                                    else
                                    {
                                        text_dzis_dzien->SetForegroundColour(wxColour(0, 0, 0));
                                        text_dzis_dzien->Refresh();
                                        text_dzis_dzien->Update();
                                    }
                                        if (ContainsOrangeColor(luty[d-1]->GetBitmap()))
                                        {
                                            text_dzis_dzien->SetForegroundColour(wxColour(255, 127, 39));
                                            text_dzis_dzien->Refresh();
                                            text_dzis_dzien->Update();
                                        }
                                        if (ContainsRedColor(luty[d-1]->GetBitmap()))
                                        {
                                            text_dzis_dzien->SetForegroundColour(wxColour(237, 28, 36));
                                            text_dzis_dzien->Refresh();
                                            text_dzis_dzien->Update();
                                        }
                                }
                                if (m == 3)
                                {
                                    if (d == 1 || d == 4 || d == 5 || d == 8 || d == 10 || d == 20 || d == 30)
                                    {
                                        text_dzis_dzien->SetForegroundColour(wxColour(36, 148, 185));
                                        text_dzis_dzien->Refresh();
                                        text_dzis_dzien->Update();
                                    }
                                    else
                                    {
                                        text_dzis_dzien->SetForegroundColour(wxColour(0, 0, 0));
                                        text_dzis_dzien->Refresh();
                                        text_dzis_dzien->Update();
                                    }
                                        if (ContainsOrangeColor(marzec[d-1]->GetBitmap()))
                                        {
                                            text_dzis_dzien->SetForegroundColour(wxColour(255, 127, 39));
                                            text_dzis_dzien->Refresh();
                                            text_dzis_dzien->Update();
                                        }
                                        if (ContainsRedColor(marzec[d-1]->GetBitmap()))
                                        {
                                            text_dzis_dzien->SetForegroundColour(wxColour(237, 28, 36));
                                            text_dzis_dzien->Refresh();
                                            text_dzis_dzien->Update();
                                        }
                                }
                                if (m == 4)
                                {
                                    if (d == 20 || d == 21)
                                    {
                                        text_dzis_dzien->SetForegroundColour(wxColour(63, 71, 204));
                                        text_dzis_dzien->Refresh();
                                        text_dzis_dzien->Update();
                                    }
                                    else if (d == 1 || d == 13 || d == 17 || d == 18 || d == 19 || d == 22 || d == 27)
                                    {
                                        text_dzis_dzien->SetForegroundColour(wxColour(36, 148, 185));
                                        text_dzis_dzien->Refresh();
                                        text_dzis_dzien->Update();
                                    }
                                    else
                                    {
                                        text_dzis_dzien->SetForegroundColour(wxColour(0, 0, 0));
                                        text_dzis_dzien->Refresh();
                                        text_dzis_dzien->Update();
                                    }
                                        if (ContainsOrangeColor(kwiecien[d-1]->GetBitmap()))
                                        {
                                            text_dzis_dzien->SetForegroundColour(wxColour(255, 127, 39));
                                            text_dzis_dzien->Refresh();
                                            text_dzis_dzien->Update();
                                        }
                                        if (ContainsRedColor(kwiecien[d-1]->GetBitmap()))
                                        {
                                            text_dzis_dzien->SetForegroundColour(wxColour(237, 28, 36));
                                            text_dzis_dzien->Refresh();
                                            text_dzis_dzien->Update();
                                        }
                                }
                                if (m == 5)
                                {
                                    if (d == 1 || d == 3)
                                    {
                                        text_dzis_dzien->SetForegroundColour(wxColour(63, 71, 204));
                                        text_dzis_dzien->Refresh();
                                        text_dzis_dzien->Update();
                                    }
                                    else if (d == 2 || d == 26)
                                    {
                                        text_dzis_dzien->SetForegroundColour(wxColour(36, 148, 185));
                                        text_dzis_dzien->Refresh();
                                        text_dzis_dzien->Update();
                                    }
                                    else
                                    {
                                        text_dzis_dzien->SetForegroundColour(wxColour(0, 0, 0));
                                        text_dzis_dzien->Refresh();
                                        text_dzis_dzien->Update();
                                    }
                                        if (ContainsOrangeColor(maj[d-1]->GetBitmap()))
                                        {
                                            text_dzis_dzien->SetForegroundColour(wxColour(255, 127, 39));
                                            text_dzis_dzien->Refresh();
                                            text_dzis_dzien->Update();
                                        }
                                        if (ContainsRedColor(maj[d-1]->GetBitmap()))
                                        {
                                            text_dzis_dzien->SetForegroundColour(wxColour(237, 28, 36));
                                            text_dzis_dzien->Refresh();
                                            text_dzis_dzien->Update();
                                        }
                                }
                                if (m == 6)
                                {
                                    if (d == 8 || d == 19)
                                    {
                                        text_dzis_dzien->SetForegroundColour(wxColour(63, 71, 204));
                                        text_dzis_dzien->Refresh();
                                        text_dzis_dzien->Update();
                                    }
                                    else if (d == 1 || d == 21 || d == 23)
                                    {
                                        text_dzis_dzien->SetForegroundColour(wxColour(36, 148, 185));
                                        text_dzis_dzien->Refresh();
                                        text_dzis_dzien->Update();
                                    }
                                    else
                                    {
                                        text_dzis_dzien->SetForegroundColour(wxColour(0, 0, 0));
                                        text_dzis_dzien->Refresh();
                                        text_dzis_dzien->Update();
                                    }
                                        if (ContainsOrangeColor(czerwiec[d-1]->GetBitmap()))
                                        {
                                            text_dzis_dzien->SetForegroundColour(wxColour(255, 127, 39));
                                            text_dzis_dzien->Refresh();
                                            text_dzis_dzien->Update();
                                        }
                                        if (ContainsRedColor(czerwiec[d-1]->GetBitmap()))
                                        {
                                            text_dzis_dzien->SetForegroundColour(wxColour(237, 28, 36));
                                            text_dzis_dzien->Refresh();
                                            text_dzis_dzien->Update();
                                        }
                                }
                                if (m == 7)
                                {
                                        if (ContainsOrangeColor(lipiec[d-1]->GetBitmap()))
                                        {
                                            text_dzis_dzien->SetForegroundColour(wxColour(255, 127, 39));
                                            text_dzis_dzien->Refresh();
                                            text_dzis_dzien->Update();
                                        }
                                        if (ContainsRedColor(lipiec[d-1]->GetBitmap()))
                                        {
                                            text_dzis_dzien->SetForegroundColour(wxColour(237, 28, 36));
                                            text_dzis_dzien->Refresh();
                                            text_dzis_dzien->Update();
                                        }
                                }
                                if (m == 8)
                                {
                                    if (d == 15)
                                    {
                                        text_dzis_dzien->SetForegroundColour(wxColour(63, 71, 204));
                                        text_dzis_dzien->Refresh();
                                        text_dzis_dzien->Update();
                                    }
                                    else if (d == 1 || d == 31)
                                    {
                                        text_dzis_dzien->SetForegroundColour(wxColour(36, 148, 185));
                                        text_dzis_dzien->Refresh();
                                        text_dzis_dzien->Update();
                                    }
                                    else
                                    {
                                        text_dzis_dzien->SetForegroundColour(wxColour(0, 0, 0));
                                        text_dzis_dzien->Refresh();
                                        text_dzis_dzien->Update();
                                    }
                                        if (ContainsOrangeColor(sierpien[d-1]->GetBitmap()))
                                        {
                                            text_dzis_dzien->SetForegroundColour(wxColour(255, 127, 39));
                                            text_dzis_dzien->Refresh();
                                            text_dzis_dzien->Update();
                                        }
                                        if (ContainsRedColor(sierpien[d-1]->GetBitmap()))
                                        {
                                            text_dzis_dzien->SetForegroundColour(wxColour(237, 28, 36));
                                            text_dzis_dzien->Refresh();
                                            text_dzis_dzien->Update();
                                        }
                                }
                                if (m == 9)
                                {
                                    if (d == 22 || d == 30)
                                    {
                                        text_dzis_dzien->SetForegroundColour(wxColour(36, 148, 185));
                                        text_dzis_dzien->Refresh();
                                        text_dzis_dzien->Update();
                                    }
                                    else
                                    {
                                        text_dzis_dzien->SetForegroundColour(wxColour(0, 0, 0));
                                        text_dzis_dzien->Refresh();
                                        text_dzis_dzien->Update();
                                    }
                                        if (ContainsOrangeColor(wrzesien[d-1]->GetBitmap()))
                                        {
                                            text_dzis_dzien->SetForegroundColour(wxColour(255, 127, 39));
                                            text_dzis_dzien->Refresh();
                                            text_dzis_dzien->Update();
                                        }
                                        if (ContainsRedColor(wrzesien[d-1]->GetBitmap()))
                                        {
                                            text_dzis_dzien->SetForegroundColour(wxColour(237, 28, 36));
                                            text_dzis_dzien->Refresh();
                                            text_dzis_dzien->Update();
                                        }
                                }
                                if (m == 10)
                                {

                                    if (d == 14 || d == 26)
                                    {
                                        text_dzis_dzien->SetForegroundColour(wxColour(36, 148, 185));
                                        text_dzis_dzien->Refresh();
                                        text_dzis_dzien->Update();
                                    }
                                    else
                                    {
                                        text_dzis_dzien->SetForegroundColour(wxColour(0, 0, 0));
                                        text_dzis_dzien->Refresh();
                                        text_dzis_dzien->Update();
                                    }
                                        if (ContainsOrangeColor(pazdziernik[d-1]->GetBitmap()))
                                        {
                                            text_dzis_dzien->SetForegroundColour(wxColour(255, 127, 39));
                                            text_dzis_dzien->Refresh();
                                            text_dzis_dzien->Update();
                                        }
                                        if (ContainsRedColor(pazdziernik[d-1]->GetBitmap()))
                                        {
                                            text_dzis_dzien->SetForegroundColour(wxColour(237, 28, 36));
                                            text_dzis_dzien->Refresh();
                                            text_dzis_dzien->Update();
                                        }
                                }
                                if (m == 11)
                                {
                                    if (d == 1 || d == 11)
                                    {
                                            text_dzis_dzien->SetForegroundColour(wxColour(63, 71, 204));
                                            text_dzis_dzien->Refresh();
                                            text_dzis_dzien->Update();
                                    }
                                    else if (d == 2 || d == 29)
                                    {
                                            text_dzis_dzien->SetForegroundColour(wxColour(36, 148, 185));
                                            text_dzis_dzien->Refresh();
                                            text_dzis_dzien->Update();
                                    }
                                    else
                                    {
                                        text_dzis_dzien->SetForegroundColour(wxColour(0, 0, 0));
                                        text_dzis_dzien->Refresh();
                                        text_dzis_dzien->Update();
                                    }
                                        if (ContainsOrangeColor(listopad[d-1]->GetBitmap()))
                                        {
                                            text_dzis_dzien->SetForegroundColour(wxColour(255, 127, 39));
                                            text_dzis_dzien->Refresh();
                                            text_dzis_dzien->Update();
                                        }
                                        if (ContainsRedColor(listopad[d-1]->GetBitmap()))
                                        {
                                            text_dzis_dzien->SetForegroundColour(wxColour(237, 28, 36));
                                            text_dzis_dzien->Refresh();
                                            text_dzis_dzien->Update();
                                        }
                                }
                                if (m == 12)
                                {
                                    if (d == 24 || d == 25 || d == 26)
                                    {
                                        text_dzis_dzien->SetForegroundColour(wxColour(63, 71, 204));
                                        text_dzis_dzien->Refresh();
                                        text_dzis_dzien->Update();
                                    }
                                    else if (d == 4 || d == 6 || d == 21 || d == 27 || d == 31)
                                    {
                                        text_dzis_dzien->SetForegroundColour(wxColour(36, 148, 185));
                                        text_dzis_dzien->Refresh();
                                        text_dzis_dzien->Update();
                                    }
                                    else
                                    {
                                        text_dzis_dzien->SetForegroundColour(wxColour(0, 0, 0));
                                        text_dzis_dzien->Refresh();
                                        text_dzis_dzien->Update();
                                    }
                                        if (ContainsOrangeColor(grudzien[d-1]->GetBitmap()))
                                        {
                                            text_dzis_dzien->SetForegroundColour(wxColour(255, 127, 39));
                                            text_dzis_dzien->Refresh();
                                            text_dzis_dzien->Update();
                                        }
                                        if (ContainsRedColor(grudzien[d-1]->GetBitmap()))
                                        {
                                            text_dzis_dzien->SetForegroundColour(wxColour(237, 28, 36));
                                            text_dzis_dzien->Refresh();
                                            text_dzis_dzien->Update();
                                        }
                                }
                            }


                wxString komunikat;
                komunikat.Printf(_("Wczytano stan z pliku: %s"), sciezkaPliku);
                wxMessageBox(komunikat, _("Informacja"), wxOK | wxICON_INFORMATION);
        }
    }
}
