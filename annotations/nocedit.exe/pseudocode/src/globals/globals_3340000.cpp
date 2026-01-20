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

// float
float g_SavedProjectionFactor = {};

// float[250]
float g_VDCameraScores[250] = {};

// int
int g_RaytraceStateStackDepth = {};
int g_VDCameraIndex = {};

// undefined4
undefined4 DAT_03342b4c = {};
undefined4 DAT_03342b50 = {};
undefined4 DAT_03342b54 = {};
undefined4 DAT_03342b58 = {};

