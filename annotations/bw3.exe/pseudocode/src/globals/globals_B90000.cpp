#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0xB90000
// =============================================================================

// SRGBColorPalette
SRGBColorPalette g_CameraImagePaletteData = {};

// char[24][614400]
char g_LightBufferPool[24][614400] = {};

// int
int g_CoronaBlurFillValue = {};
int g_CoronaMaxDepth = {};
int g_CoronaDepthShift = {};
int g_LightBufferPoolIndex = {};

// uint[256]
uint g_CameraConvertedPalette[256] = {};
uint g_LightmapTexturePalette[256] = {};

