#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x10220000
// =============================================================================

// CExternalRendererBridge
CExternalRendererBridge g_ExternalRendererBridge = {};

// DDPIXELFORMAT
DDPIXELFORMAT g_TexturePixelFormat = {};

// DDSURFACEDESC2
DDSURFACEDESC2 g_PrimarySurfaceDesc = {};

// GUID*[16]
GUID* g_AdapterGuids[16] = {};

// GUID[16]
GUID g_AdapterGuidStorage[16] = {};

// int
int g_RedShift = 0;
int g_GreenShift = 0;
int g_HWBlueShift = 0;

// int[16000]
int g_VertexCacheIndex[16000] = {};

// int[8]
int g_TextureSizeTable[8] = {};

// uint
uint g_HWGreenScale = 0;
uint g_MasterZBufferCount = 0;
uint g_HWRedScale = 0;

// uint[256]
uint g_PackedPalette[256] = {};

// undefined4
undefined4 DAT_10226a50 = 0x00000000;

// ushort*
ushort* g_DX7ColorTable16 = nullptr;

// void*[1024]
void* g_ScanlinePointers[1024] = {};

