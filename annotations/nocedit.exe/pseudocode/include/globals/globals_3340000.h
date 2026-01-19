#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CZThumb.h"
#include "types/structs/SRaytraceState.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x3340000
// =============================================================================

// CVector3f
extern CVector3f g_SavedCameraOrigin;
extern CVector3f g_SavedCameraRotation;
extern CVector3f g_VDTempVector;

// CZThumb[1500]
extern CZThumb g_CZThumbPool[1500];

// SRaytraceState[5]
extern SRaytraceState g_RaytraceStateStack[5];

// float[250]
extern float g_VDCameraScores[250];

