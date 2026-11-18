#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x6A0000
// =============================================================================

// float[256]
float g_PaletteLuminanceCache[256] = {};

// int
int g_RenderingMode = {};
int g_FogColorIndex = {};

// int[256]
int g_FontCharWidths[256] = {};

// uchar*
uchar* g_FontBitmapData = {};

// uchar*[256]
uchar* g_FontGlyphPtrs[256] = {};

// void*
void* g_SoftwareZBuffer = {};

