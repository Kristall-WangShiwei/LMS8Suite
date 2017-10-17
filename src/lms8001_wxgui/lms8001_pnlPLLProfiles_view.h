#ifndef __lms8001_pnlPLLProfiles_view__
#define __lms8001_pnlPLLProfiles_view__

/**
@file
Subclass of pnlPLLProfiles_view, which is generated by wxFormBuilder.
*/

#include "lms8001_wxgui.h"
//// end generated include
#include <map>
#include "LMS8001_parameters.h"
#include "lms8001_statuses.h"
class LMS8001;
/** Implementing pnlPLLProfiles_view */
class lms8001_pnlPLLProfiles_view : public pnlPLLProfiles_view
{
	protected:
		// Handlers for pnlPLLProfiles_view events.
		void ParameterChangeHandler( wxCommandEvent& event );
	public:
		/** Constructor */
		lms8001_pnlPLLProfiles_view( wxWindow* parent );
	//// end generated class members
	lms8001_pnlPLLProfiles_view(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxTAB_TRAVERSAL);
    void Initialize(LMS8001* pControl);
    void UpdateGUI();

	void OnSwitchPLLProfile(wxCommandEvent& event);

	void chkPLL_LODIST_FSP_OUTCH2_n_Change(wxCommandEvent& event);

	void OnTuneClick(wxCommandEvent& event);

	void OnSmartTuneClick(wxCommandEvent& event);

	void On_FF_MOD_Change(wxCommandEvent& event);

//	void OnSetFocus_cmbPLL_LODIST_FSP_OUTCH10_n(wxFocusEvent& event);

	void OnUpdateUI_cmbPLL_LODIST_FSP_OUTCH10_n(wxUpdateUIEvent& event);

	void OnupdateUI_sttxtPLLFreq(wxUpdateUIEvent& event);
	void OnUpdateUI_sttxtFLockN(wxUpdateUIEvent& event);

	void OnUpdateUI_cmbFLOCK_PULSE_n(wxUpdateUIEvent& event);

	void OnTextRefClock(wxCommandEvent& event);

	liblms8_status configPLL(double fLO, int fref, bool slfbenXBUF, bool genIQ, bool intMode, int loopBW, double pm, bool fitKVCO, double bwef, int flock_N);
	liblms8_status setLOFREQ(double fLO, int fref, bool slfbenXBUF, bool genIQ, bool intMode);
	void setFFDIV(int FFMOD);
	liblms8_status vco_auto_ctune(double fVCO, int fref, bool slfbenXBUF, bool intMode, bool pdiv2 = false, int vtune_vct = 1, int vco_sel_force = 0, int vco_sel_init = 2, int freq_init_pos = 7, int freq_init  = 0, int freq_settling_N = 4, int vtune_wait_N = 128, int vco_sel_freq_max = 250, int vco_sel_freq_min = 5);
	void calc_fbdiv(double fVCO, int fref, bool intMode, bool pdiv2, int* nint, int* nfrac, int* nfix);
	void enablePLL(bool pdiv2, bool intMode, bool slfbenXBUF);
	liblms8_status centerVTUNE2(int fref, bool slfbenXBUF);
	double getNDIV();
	liblms8_status optim_PLL_LoopBW(double pm, double fc, bool fitKVCO);
	void setCP(int PULSE, int OFS, int ICT_CP);
	void setLPF(int C1,int C2, int R2, int C3, int R3);
	liblms8_status optimCPandLD();
	void setLD(int LD_VCT);
	liblms8_status setFLOCK(double bwef, int flock_N);

protected:
    LMS8001* lmsControl;
    std::map<wxWindow*, LMS8Parameter> wndId2Enum;
};

#endif // __lms8001_pnlPLLProfiles_view__
