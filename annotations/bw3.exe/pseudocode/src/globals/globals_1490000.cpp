#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1490000
// =============================================================================

// SFogGrid
SFogGrid g_CameraFogGrid = {};

// int
int g_ImageProcessingState1 = {};
int g_ImageProcessingState2 = {};
int g_ImageBytesPerPixel = {};
int g_CameraScreenWidth = {};
int g_CameraScreenHeight = {};
int g_ScanlineSpanCount = {};
int g_BackgroundSceneDepth = {};
int g_BackgroundSavedBitsPerPixel = {};
int g_BackgroundSavedUseExternalRenderer = {};

// int[256]
int g_ScanlineSpanLeft[256] = {};
int g_ScanlineSpanRight[256] = {};

// void*[GAME_SCREEN_MAX_HEIGHT]
void* g_BackgroundSavedScreenBufferArray[GAME_SCREEN_MAX_HEIGHT] = {};

