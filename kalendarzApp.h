/***************************************************************
 * Name:      kalendarzApp.h
 * Purpose:   Defines Application Class
 * Author:    Tomasz Cuch, Aleksander Bzowski ()
 * Created:   2024-12-16
 * Copyright: Tomasz Cuch, Aleksander Bzowski ()
 * License:
 **************************************************************/

#ifndef KALENDARZAPP_H
#define KALENDARZAPP_H

#include <wx/app.h>

class kalendarzApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // KALENDARZAPP_H
