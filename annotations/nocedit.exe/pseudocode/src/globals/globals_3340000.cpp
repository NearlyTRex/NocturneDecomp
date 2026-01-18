#include "globals.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x3340000
// =============================================================================

CVector3f g_SavedCameraOrigin;
CVector3f g_SavedCameraRotation;
SRaytraceState g_RaytraceStateStack[5] = {};
CVector3f g_VDTempVector;
CZThumb g_CZThumbPool[1500] = {};

