#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0xC10000
// =============================================================================

// SRGBColorPalette
SRGBColorPalette g_CameraImagePaletteData = {};

// char[25][307200]
char g_LightBufferPool[25][307200] = {};

// int
int INT_00c199f8 = {};
int g_CoronaMaxDepth = {};
int g_CoronaDepthShift = {};
int g_LightBufferPoolIndex = {};

// uint[256]
uint g_CameraConvertedPalette[256] = {};
uint g_LightmapTexturePalette[256] = {};

