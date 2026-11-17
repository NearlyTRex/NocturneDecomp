#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1400000
// =============================================================================

// SFogGrid
SFogGrid g_CameraFogGrid = {};

// int
int g_ImageProcessingState1 = {};
int g_ImageProcessingState2 = {};
int g_ImageBytesPerPixel = {};
int g_ScanlineSpanCount = {};
int g_BackgroundSceneDepth = {};
int g_BackgroundSavedBitsPerPixel = {};
int g_BackgroundSavedUseExternalRenderer = {};

// int[256]
int g_INT_ARRAY_0140e7a8[256] = {};
int g_ScanlineSpanRight[256] = {};

// void*[1200]
void* g_ARRAY_PTR_0140efb4[1200] = {};

