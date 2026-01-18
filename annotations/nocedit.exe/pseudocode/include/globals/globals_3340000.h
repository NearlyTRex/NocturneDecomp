#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CZThumb.h"
#include "types/structs/SRaytraceState.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x3340000
// =============================================================================

extern CVector3f g_SavedCameraOrigin;
extern CVector3f g_SavedCameraRotation;
extern SRaytraceState g_RaytraceStateStack[5];
extern CVector3f g_VDTempVector;
extern CZThumb g_CZThumbPool[1500];

