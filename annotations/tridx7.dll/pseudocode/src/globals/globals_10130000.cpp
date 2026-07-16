#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x10130000
// =============================================================================

// HWND
HWND g_WindowHandle = nullptr;

// char[16][512]
char g_AdapterDriverName[16][512] = {};

// int
int g_UseHoldBuffer = 0;

// uint[16]
uint g_AdapterDeviceId[16] = {};
uint g_AdapterVendorId[16] = {};

// undefined1
undefined1 DAT_101386a8 = 0x00;
undefined1 DAT_10139040 = 0x00;

// undefined4
undefined4 DAT_101386f0 = 0x00000000;
undefined4 DAT_10138f30 = 0x00000000;
undefined4 DAT_10138f34 = 0x00000000;
undefined4 DAT_10138f50 = 0x00000000;
undefined4 DAT_10138fc0 = 0x00000000;
undefined4 DAT_10138fc4 = 0x00000000;
undefined4 DAT_10139048 = 0x00000000;
undefined4 DAT_10139068 = 0x00000000;
undefined4 DAT_101390c8 = 0x00000000;
undefined4 DAT_101390cc = 0x00000000;
undefined4 DAT_101394c8 = 0x00000000;
undefined4 DAT_101394cc = 0x00000000;

// void*
void* g_TexturePalette = nullptr;

// void**
void** g_ScanlinePtrBase = nullptr;

