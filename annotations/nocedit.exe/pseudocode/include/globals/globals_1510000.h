#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3i.h"
#include "types/structs/SCameraViewportState.h"
#include "types/structs/SFogGrid.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x1510000
// =============================================================================

extern SFogGrid g_CameraFogGrid;
extern int g_ScanlineSpanLeft[256];
extern int g_ScanlineSpanRight[256];
extern void* g_BackgroundSavedScreenBufferArray[1024];
extern SCameraViewportState g_BackgroundSavedCameraState;
extern CVector3i g_CameraOutOfBoundsCoord;

