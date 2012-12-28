// GainSliders.cpp : implementation file
//

#include "stdafx.h"
#include "ExtIODll.h"
#include "ExtIODialog.h"


// Our empty class definition template. While there are likely more beutiful ways for this 
// in c++, this one works, so there are no experiments with templates.

// All the classes are left empty, because we are communicating using messages with the 
// controls on dialog screen. All the setup for the controls is performed at the 
// ExtIODlg.cpp OnInitDialog() to keep all control initializations at the same place
//
// Basically, what you need to do is following:
//
//	- Create control on the resource screen
//	- Add class definition with the macro here and ExtIODialogClasses.h, be sure to use appropriate public class
//	- Add class to the CExtIODialog class definition at ExtIODialog.h
//	- Add DDX message handler to the ExtIODialog.cpp CExtIODialog::DoDataExchange()
//	- If the main dialog has to receive specific events from control, add appropriate
//	  messaging definitions to ExtIODialog.cpp message map.
//

#define DialogClass(ClassName, PublicClass)	\
	IMPLEMENT_DYNAMIC(ClassName, PublicClass)		\
													\
	ClassName::##ClassName()						\
	{												\
	}												\
													\
	ClassName::~##ClassName()						\
	{												\
	}												\
													\
	BEGIN_MESSAGE_MAP(ClassName, PublicClass)		\
	END_MESSAGE_MAP()

//ExtIO Dialog
DialogClass(CGainSliderCHA, CSliderCtrl)
DialogClass(CGainSliderCHB, CSliderCtrl)
DialogClass(CPhaseSliderCoarse, CSliderCtrl)
DialogClass(CPhaseSliderFine, CSliderCtrl)
DialogClass(CCheckBoxDiversity, CButton)
DialogClass(CCheckBoxSyncGain, CButton)
DialogClass(CCheckBoxSyncTune, CButton)
DialogClass(CPhaseInfo, CEdit)
DialogClass(CTransparencySlider, CSliderCtrl)
DialogClass(CCheckBoxDllIQ, CButton)
DialogClass(CCheckBoxDebugConsole, CButton)
DialogClass(CDataRateInfo, CEdit)
DialogClass(CButton1, CButton) 

//Panadapter Dialog
DialogClass(CSpeedSlider, CSliderCtrl)
DialogClass(CRangeInfo, CEdit)
DialogClass(CActiveInfo, CEdit)