#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "system/ddraw.h"
#include "system/winnt.h"
#include "types/classes/CExternalRendererBridge.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x10220000
// =============================================================================

// CExternalRendererBridge
extern CExternalRendererBridge g_ExternalRendererBridge;

// DDPIXELFORMAT
extern DDPIXELFORMAT g_TexturePixelFormat;

// DDSURFACEDESC2
extern DDSURFACEDESC2 g_PrimarySurfaceDesc;

// GUID*[16]
extern GUID* g_AdapterGuids[16];

// GUID[16]
extern GUID g_AdapterGuidStorage[16];

// int
extern int g_MasterZBufferCount;

// int[8]
extern int g_TextureSizeTable[8];

// undefined1
extern undefined1 DAT_10226a4c;
extern undefined1 DAT_10226a54;
extern undefined1 DAT_10226e80;

// undefined4
extern undefined4 DAT_10226868;
extern undefined4 DAT_10226a50;
extern undefined4 DAT_10226a80;

// void*[1024]
extern void* g_ScanlinePointers[1024];

