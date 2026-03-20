#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/structs/SRGBColorPalette.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0xC10000
// =============================================================================

// SRGBColorPalette
extern SRGBColorPalette g_CameraImagePaletteData;

// char[24][307200]
extern char g_LightBufferPool[24][307200];

// int
extern int INT_00c199f8;
extern int g_CoronaMaxDepth;
extern int g_CoronaDepthShift;
extern int g_LightBufferPoolIndex;

// uint[256]
extern uint g_CameraConvertedPalette[256];
extern uint g_LightmapTexturePalette[256];

