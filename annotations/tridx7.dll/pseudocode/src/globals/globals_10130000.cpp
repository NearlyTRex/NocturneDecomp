#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x10130000
// =============================================================================

// HWND
HWND g_WindowHandle = nullptr;

// IDirectDrawSurface*[4][8]
IDirectDrawSurface* g_StagingTextures[4][8] = {};

// char[16][512]
char g_AdapterDriverName[16][512] = {};

// int
int g_HWRedShift = 0;
int g_BlueShift = 0;
int g_UseHoldBuffer = 0;

// uchar*
uchar* g_TexturePalette = nullptr;

// uint[16]
uint g_AdapterDeviceId[16] = {};
uint g_AdapterVendorId[16] = {};

// undefined4
undefined4 DAT_101386f0 = 0x00000000;
undefined4 DAT_10138f30 = 0x00000000;
undefined4 DAT_10138f34 = 0x00000000;
undefined4 DAT_10138f50 = 0x00000000;
undefined4 DAT_10138fc0 = 0x00000000;
undefined4 DAT_10138fc4 = 0x00000000;
undefined4 DAT_101390c8 = 0x00000000;
undefined4 DAT_101390cc = 0x00000000;
undefined4 DAT_101394c8 = 0x00000000;
undefined4 DAT_101394cc = 0x00000000;

// void**
void** g_ScanlinePtrBase = nullptr;

