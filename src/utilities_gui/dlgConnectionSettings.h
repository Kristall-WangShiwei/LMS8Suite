#ifndef __dlgConnectionSettings__
#define __dlgConnectionSettings__

/**
@file
Subclass of dlgConnectionSettings, which is generated by wxFormBuilder.
*/

#include "utilities_gui.h"

//// end generated include

class ConnectionManager;

/** Implementing dlgConnectionSettings */
class dlgConnectionSettings : public dlgConnectionSettings_view
{
	protected:
		// Handlers for dlgConnectionSettings events.
		void GetDeviceList( wxInitDialogEvent& event );
		void OnConnect( wxCommandEvent& event );
		void OnCancel( wxCommandEvent& event );
		void OnDisconnect( wxCommandEvent& event );
	public:
		/** Constructor */
		dlgConnectionSettings( wxWindow* parent );
	//// end generated class members
//		void SetConnectionManagers(ConnectionManager* lms8ctr, ConnectionManager* streamBrdctr);
		void SetConnectionManager(ConnectionManager* lms8ctr);
	protected:
		ConnectionManager* lms8port;
//		ConnectionManager* streamBrdPort;
	
};

#endif // __dlgConnectionSettings__
