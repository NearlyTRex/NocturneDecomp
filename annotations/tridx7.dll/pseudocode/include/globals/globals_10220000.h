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
extern int g_RedShift;
extern int g_GreenShift;
extern int g_HWBlueShift;

// int[16000]
extern int g_VertexCacheIndex[16000];

// int[8]
extern int g_TextureSizeTable[8];

// uint
extern uint g_HWGreenScale;
extern uint g_MasterZBufferCount;
extern uint g_HWRedScale;

// uint[256]
extern uint g_PackedPalette[256];

// undefined4
extern undefined4 DAT_10226a50;

// ushort*
extern ushort* g_ColorTable16;

// void*[1024]
extern void* g_ScanlinePointers[1024];

