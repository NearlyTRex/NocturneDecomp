//+-------------------------------------------------------------------------
//
//  Microsoft Windows
//  Copyright (C) Microsoft Corporation, 1992-1996.
//
//  File:       cguid.h
//
//--------------------------------------------------------------------------

#ifndef __CGUID_H__
#define __CGUID_H__

#ifdef __cplusplus
extern "C" {
#endif

extern const IID __cdecl GUID_NULL;
extern const IID __cdecl IID_IRpcChannel;
extern const IID __cdecl IID_IRpcStub;
extern const IID __cdecl IID_IStubManager;
extern const IID __cdecl IID_IRpcProxy;
extern const IID __cdecl IID_IProxyManager;
extern const IID __cdecl IID_IPSFactory;
extern const IID __cdecl IID_IInternalMoniker;
extern const IID __cdecl IID_IDfReserved1;
extern const IID __cdecl IID_IDfReserved2;
extern const IID __cdecl IID_IDfReserved3;
extern const CLSID __cdecl CLSID_StdMarshal;
extern const IID __cdecl IID_IStub;
extern const IID __cdecl IID_IProxy;
extern const IID __cdecl IID_IEnumGeneric;
extern const IID __cdecl IID_IEnumHolder;
extern const IID __cdecl IID_IEnumCallback;
extern const IID __cdecl IID_IOleManager;
extern const IID __cdecl IID_IOlePresObj;
extern const IID __cdecl IID_IDebug;
extern const IID __cdecl IID_IDebugStream;
extern const CLSID __cdecl CLSID_PSGenObject;
extern const CLSID __cdecl CLSID_PSClientSite;
extern const CLSID __cdecl CLSID_PSClassObject;
extern const CLSID __cdecl CLSID_PSInPlaceActive;
extern const CLSID __cdecl CLSID_PSInPlaceFrame;
extern const CLSID __cdecl CLSID_PSDragDrop;
extern const CLSID __cdecl CLSID_PSBindCtx;
extern const CLSID __cdecl CLSID_PSEnumerators;
extern const CLSID __cdecl CLSID_StaticMetafile;
extern const CLSID __cdecl CLSID_StaticDib;
extern const CLSID __cdecl CID_CDfsVolume;

//********************************************
//
// CD Forms CLSIDs
//
//********************************************

//
// Form Kernel objects
//
extern const CLSID __cdecl CLSID_CCDFormKrnl;
extern const CLSID __cdecl CLSID_CCDPropertyPage;
extern const CLSID __cdecl CLSID_CCDFormDialog;

//
// Control objects
//
extern const CLSID __cdecl CLSID_CCDCommandButton;
extern const CLSID __cdecl CLSID_CCDComboBox;
extern const CLSID __cdecl CLSID_CCDTextBox;
extern const CLSID __cdecl CLSID_CCDCheckBox;
extern const CLSID __cdecl CLSID_CCDLabel;
extern const CLSID __cdecl CLSID_CCDOptionButton;
extern const CLSID __cdecl CLSID_CCDListBox;
extern const CLSID __cdecl CLSID_CCDScrollBar;
extern const CLSID __cdecl CLSID_CCDGroupBox;

//
// Property Pages
//
extern const CLSID __cdecl CLSID_CCDGeneralPropertyPage;
extern const CLSID __cdecl CLSID_CCDGenericPropertyPage;
extern const CLSID __cdecl CLSID_CCDFontPropertyPage;
extern const CLSID __cdecl CLSID_CCDColorPropertyPage;
extern const CLSID __cdecl CLSID_CCDLabelPropertyPage;
extern const CLSID __cdecl CLSID_CCDCheckBoxPropertyPage;
extern const CLSID __cdecl CLSID_CCDTextBoxPropertyPage;
extern const CLSID __cdecl CLSID_CCDOptionButtonPropertyPage;
extern const CLSID __cdecl CLSID_CCDListBoxPropertyPage;
extern const CLSID __cdecl CLSID_CCDCommandButtonPropertyPage;
extern const CLSID __cdecl CLSID_CCDComboBoxPropertyPage;
extern const CLSID __cdecl CLSID_CCDScrollBarPropertyPage;
extern const CLSID __cdecl CLSID_CCDGroupBoxPropertyPage;
extern const CLSID __cdecl CLSID_CCDXObjectPropertyPage;

extern const CLSID __cdecl CLSID_CStdPropertyFrame;

extern const CLSID __cdecl CLSID_CFormPropertyPage;
extern const CLSID __cdecl CLSID_CGridPropertyPage;

extern const CLSID __cdecl CLSID_CWSJArticlePage;
extern const CLSID __cdecl CLSID_CSystemPage;

extern const CLSID __cdecl CLSID_IdentityUnmarshal;
extern const CLSID __cdecl CLSID_InProcFreeMarshaler;

extern const CLSID __cdecl CLSID_Picture_Metafile;
extern const CLSID __cdecl CLSID_Picture_EnhMetafile;
extern const CLSID __cdecl CLSID_Picture_Dib;

//
// Enumerations
//
extern const GUID __cdecl GUID_TRISTATE;

#ifdef __cplusplus
}
#endif


#endif // __CGUID_H__
