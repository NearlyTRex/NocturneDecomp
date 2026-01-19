#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1510000
// =============================================================================

// CVector3i
CVector3i g_CameraOutOfBoundsCoord = {};

// SCameraViewportState
SCameraViewportState g_BackgroundSavedCameraState = {};

// SFogGrid
SFogGrid g_CameraFogGrid = {};

// char[307200]
char g_CameraIndexedImageData[307200] = {};

// int[256]
int g_ScanlineSpanLeft[256] = {};
int g_ScanlineSpanRight[256] = {};

// void*[1024]
void* g_BackgroundSavedScreenBufferArray[1024] = {};

