#include "globals.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1510000
// =============================================================================

SFogGrid g_CameraFogGrid;
int g_ScanlineSpanLeft[256] = {};
int g_ScanlineSpanRight[256] = {};
void* g_BackgroundSavedScreenBufferArray[1024] = {};
SCameraViewportState g_BackgroundSavedCameraState;
CVector3i g_CameraOutOfBoundsCoord;

