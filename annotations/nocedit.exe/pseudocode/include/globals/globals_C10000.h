#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/structs/SRGBColorPalette.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0xC10000
// =============================================================================

// SRGBColorPalette
extern SRGBColorPalette g_CameraImagePaletteData;

// char[25][307200]
extern char g_LightBufferPool[25][307200];

// uint[256]
extern uint g_CameraConvertedPalette[256];
extern uint g_LightmapTexturePalette[256];

