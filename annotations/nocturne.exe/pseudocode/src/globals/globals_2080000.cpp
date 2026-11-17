#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2080000
// =============================================================================

// CVector3f
CVector3f g_SavedCameraOrigin = {};
CVector3f g_SavedCameraRotation = {};

// SRaytraceState[5]
SRaytraceState g_RaytraceStateStack[5] = {};

// float
float g_SavedProjectionFactor = {};

// int
int g_INT_02080430 = {};
int g_INT_02080438 = {};
int g_RaytraceStateStackDepth = {};
int g_INT_020875f4 = {};

// uint[250][48][64]
uint g_ThumbZBufferTable[250][48][64] = {};

