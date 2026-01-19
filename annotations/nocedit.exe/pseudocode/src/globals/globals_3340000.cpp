#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x3340000
// =============================================================================

// CVector3f
CVector3f g_SavedCameraOrigin = {};
CVector3f g_SavedCameraRotation = {};
CVector3f g_VDTempVector = {};

// CZThumb[1500]
CZThumb g_CZThumbPool[1500] = {};

// SRaytraceState[5]
SRaytraceState g_RaytraceStateStack[5] = {};

