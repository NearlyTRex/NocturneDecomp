#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/WinDef.h"
#include "system/ddraw.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x10130000
// =============================================================================

// HWND
extern HWND g_WindowHandle;

// IDirectDrawSurface*[4][8]
extern IDirectDrawSurface* g_StagingTextures[4][8];

// char[16][512]
extern char g_AdapterDriverName[16][512];

// int
extern int g_HWRedShift;
extern int g_BlueShift;
extern int g_UseHoldBuffer;

// uchar*
extern uchar* g_TexturePalette;

// uint[16]
extern uint g_AdapterDeviceId[16];
extern uint g_AdapterVendorId[16];

// undefined4
extern undefined4 DAT_101386f0;
extern undefined4 DAT_10138f30;
extern undefined4 DAT_10138f34;
extern undefined4 DAT_10138f50;
extern undefined4 DAT_10138fc0;
extern undefined4 DAT_10138fc4;
extern undefined4 DAT_101390c8;
extern undefined4 DAT_101390cc;
extern undefined4 DAT_101394c8;
extern undefined4 DAT_101394cc;

// void**
extern void** g_ScanlinePtrBase;

