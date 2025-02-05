/***************************************************************
 * Name:      kalendarzMain.h
 * Purpose:   Defines Application Frame
 * Author:    Tomasz Cuch, Aleksander Bzowski ()
 * Created:   2024-12-16
 * Copyright: Tomasz Cuch, Aleksander Bzowski ()
 * License:
 **************************************************************/

#ifndef KALENDARZMAIN_H
#define KALENDARZMAIN_H

#include <string>
#include <map>
#include <vector>
#include <ctime>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <wx/arrstr.h>
#include <wx/wx.h>
#include <wx/bmpbuttn.h>
#include <wx/grid.h>
#include <wx/timectrl.h>
#include <wx/stdpaths.h>
#include <wx/filename.h>


//(*Headers(kalendarzDialog)
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)

class kalendarzDialog: public wxDialog
{
    public:

        kalendarzDialog(wxWindow* parent,wxWindowID id = -1);
        virtual ~kalendarzDialog();

    private:

        //(*Handlers(kalendarzDialog)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnNastepnyMiesiac(wxCommandEvent& event);
        void OnPoprzedniMiesiac(wxCommandEvent& event);
        void OnClick(wxCommandEvent& event);
        void ZapiszStan(wxCommandEvent& event);
        void WczytajStan(wxCommandEvent& event);
        //*)

        //(*Identifiers(kalendarzDialog)
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT3;
        static const long ID_STATICTEXT4;
        static const long ID_STATICTEXT5;
        static const long ID_STATICTEXT6;
        static const long ID_STATICTEXT7;
        static const long ID_STATICTEXT8;
        static const long ID_STATICTEXT9;
        static const long ID_STATICTEXT10;
        static const long ID_BITMAPBUTTON1;
        static const long ID_BUTTON3;
        static const long ID_BUTTON4;
        static const long ID_STATICTEXT16;
        static const long ID_STATICTEXT17;
        static const long ID_STATICBITMAP1;
        static const long ID_STATICTEXT11;
        static const long ID_STATICBITMAP2;
        static const long ID_STATICTEXT12;
        static const long ID_STATICBITMAP3;
        static const long ID_STATICTEXT13;
        static const long ID_STATICBITMAP4;
        static const long ID_STATICTEXT14;
        static const long ID_STATICBITMAP5;
        static const long ID_STATICTEXT15;
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        //*)

        //(*Declarations(kalendarzDialog)
        wxBitmapButton* BitmapButton1;
        wxBoxSizer* BoxSizer1;
        wxBoxSizer* BoxSizer2;
        wxBoxSizer* BoxSizer4;
        wxBoxSizer* box_dzisiaj;
        wxButton* Button1;
        wxButton* Button2;
        wxButton* Button3;
        wxButton* Button4;
        wxGridSizer* GridSizer1;
        wxStaticBitmap* StaticBitmap1;
        wxStaticBitmap* StaticBitmap2;
        wxStaticBitmap* StaticBitmap3;
        wxStaticBitmap* StaticBitmap4;
        wxStaticBitmap* StaticBitmap5;
        wxStaticText* StaticText10;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        wxStaticText* StaticText3;
        wxStaticText* StaticText4;
        wxStaticText* StaticText5;
        wxStaticText* StaticText6;
        wxStaticText* StaticText7;
        wxStaticText* StaticText8;
        wxStaticText* StaticText9;
        wxStaticText* info_inne;
        wxStaticText* info_swieta;
        wxStaticText* info_wlasne;
        wxStaticText* info_wlasne_priorytet;
        wxStaticText* info_zwykly;
        wxStaticText* text_dzis;
        wxStaticText* text_dzis_dzien;
        //*)

        DECLARE_EVENT_TABLE()

        wxStaticText* StaticText11;
        wxStaticText* StaticText12;
        wxStaticText* StaticText13;
        wxStaticText* StaticText14;

        wxBitmapButton** przyciski; // Tablica przycisków

        wxBitmap rysunki[31];

        wxString miesiace[12];

        int liczbaPrzyciskow = 0;

        void Nastepny(wxWindow* parent);

        void Poprzedni(wxWindow* parent);

        void OnWroc(wxCommandEvent& event);
        void OnOpenNewWindow(wxCommandEvent& event);

        void DodajWydarzenie();

        wxBitmapButton* styczen[31];
        wxBitmapButton* luty[28];
        wxBitmapButton* marzec[31];
        wxBitmapButton* kwiecien[30];
        wxBitmapButton* maj[31];
        wxBitmapButton* czerwiec[30];
        wxBitmapButton* lipiec[31];
        wxBitmapButton* sierpien[31];
        wxBitmapButton* wrzesien[30];
        wxBitmapButton* pazdziernik[31];
        wxBitmapButton* listopad[30];
        wxBitmapButton* grudzien[31];

        std::map<int, int> dni_styczen;
        std::map<int, int> dni_luty;
        std::map<int, int> dni_marzec;
        std::map<int, int> dni_kwiecien;
        std::map<int, int> dni_maj;
        std::map<int, int> dni_czerwiec;
        std::map<int, int> dni_lipiec;
        std::map<int, int> dni_sierpien;
        std::map<int, int> dni_wrzesien;
        std::map<int, int> dni_pazdziernik;
        std::map<int, int> dni_listopad;
        std::map<int, int> dni_grudzien;

        void JakiDzienTygodnia();

        // tabele stringów z wydarzeniami w danych miesiącach;
        wxString wydarzenia_styczen[31];
        wxString wydarzenia_luty[28];
        wxString wydarzenia_marzec[31];
        wxString wydarzenia_kwiecien[30];
        wxString wydarzenia_maj[31];
        wxString wydarzenia_czerwiec[30];
        wxString wydarzenia_lipiec[31];
        wxString wydarzenia_sierpien[31];
        wxString wydarzenia_wrzesien[30];
        wxString wydarzenia_pazdziernik[31];
        wxString wydarzenia_listopad[30];
        wxString wydarzenia_grudzien[31];



struct WydarzenieData
{
    wxString label;
    wxFont font;
    wxColour colour;
};

void OdtworzWydarzenia(wxBoxSizer* wydarzenia, const std::vector<WydarzenieData>& wydarzeniaDnia);



        std::vector<std::vector<WydarzenieData>> wlasne_wyd_styczen{31};
        std::vector<std::vector<WydarzenieData>> wlasne_wyd_luty{28};
        std::vector<std::vector<WydarzenieData>> wlasne_wyd_marzec{31};
        std::vector<std::vector<WydarzenieData>> wlasne_wyd_kwiecien{30};
        std::vector<std::vector<WydarzenieData>> wlasne_wyd_maj{31};
        std::vector<std::vector<WydarzenieData>> wlasne_wyd_czerwiec{30};
        std::vector<std::vector<WydarzenieData>> wlasne_wyd_lipiec{31};
        std::vector<std::vector<WydarzenieData>> wlasne_wyd_sierpien{31};
        std::vector<std::vector<WydarzenieData>> wlasne_wyd_wrzesien{30};
        std::vector<std::vector<WydarzenieData>> wlasne_wyd_pazdziernik{31};
        std::vector<std::vector<WydarzenieData>> wlasne_wyd_listopad{30};
        std::vector<std::vector<WydarzenieData>> wlasne_wyd_grudzien{31};


        wxDialog* infoDialog;
        wxBoxSizer* main;
        wxBoxSizer* wydarzenia;
        wxStaticText* wyd_styczen;
        wxStaticText* wyd_luty;
        wxStaticText* wyd_marzec;
        wxStaticText* wyd_kwiecien;
        wxStaticText* wyd_maj;
        wxStaticText* wyd_czerwiec;
        wxStaticText* wyd_lipiec;
        wxStaticText* wyd_sierpien;
        wxStaticText* wyd_wrzesien;
        wxStaticText* wyd_pazdziernik;
        wxStaticText* wyd_listopad;
        wxStaticText* wyd_grudzien;

        wxTextCtrl* pole_nazwa;

        wxString nazwa_mies;
        // godzina wydarzenia
        std::string h;
        // minuta wydarzenia
        std::string m;

        wxCheckBox* CheckBox1;

        int lastDay = -1;

        void WyczyśćSizer();

        void OdtworzPrzyciski();

        void DaneWydarzen();

        bool ContainsOrangeColor(const wxBitmap& bitmap);
        bool ContainsRedColor(const wxBitmap& bitmap);

        bool CzyIstniejeWydarzenie(const std::vector<std::vector<WydarzenieData>>& miesiac);
        bool CzyIstniejeJakiekolwiekWydarzenie();

        void ZapiszWydarzeniaDoPliku(const wxString& sciezkaPliku,
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
                             );

        wxString sciezkaPliku;

        std::vector<std::vector<WydarzenieData>> wczytywane_wyd_styczen{31};
        std::vector<std::vector<WydarzenieData>> wczytywane_wyd_luty{28};
        std::vector<std::vector<WydarzenieData>> wczytywane_wyd_marzec{31};
        std::vector<std::vector<WydarzenieData>> wczytywane_wyd_kwiecien{30};
        std::vector<std::vector<WydarzenieData>> wczytywane_wyd_maj{31};
        std::vector<std::vector<WydarzenieData>> wczytywane_wyd_czerwiec{30};
        std::vector<std::vector<WydarzenieData>> wczytywane_wyd_lipiec{31};
        std::vector<std::vector<WydarzenieData>> wczytywane_wyd_sierpien{31};
        std::vector<std::vector<WydarzenieData>> wczytywane_wyd_wrzesien{30};
        std::vector<std::vector<WydarzenieData>> wczytywane_wyd_pazdziernik{31};
        std::vector<std::vector<WydarzenieData>> wczytywane_wyd_listopad{30};
        std::vector<std::vector<WydarzenieData>> wczytywane_wyd_grudzien{31};

        bool porownaj_wektory(const std::vector<std::vector<WydarzenieData>>& wczytywane,
                      const std::vector<std::vector<WydarzenieData>>& wlasne);

};

#endif // KALENDARZMAIN_H
