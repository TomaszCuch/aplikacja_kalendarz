/***************************************************************
 * Name:      kalendarzApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Tomasz Cuch, Aleksander Bzowski ()
 * Created:   2024-12-16
 * Copyright: Tomasz Cuch, Aleksander Bzowski ()
 * License:
 **************************************************************/

#include "kalendarzApp.h"

//(*AppHeaders
#include "kalendarzMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(kalendarzApp);

bool kalendarzApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	kalendarzDialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}
