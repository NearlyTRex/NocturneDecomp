#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x14A0000
// =============================================================================

// CVector3i
CVector3i g_CameraOutOfBoundsCoord = {};

// SCameraViewportState
SCameraViewportState g_BackgroundSavedCameraState = {};

// char[307200]
char g_CameraIndexedImageData[307200] = {};

// int
int g_BackgroundSavedRedBitPosition = {};
int g_BackgroundSavedGreenBitPosition = {};
int g_BackgroundSavedBlueBitPosition = {};

