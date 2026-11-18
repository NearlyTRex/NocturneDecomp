#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x20C0000
// =============================================================================

// CDeformableModel[64]
CDeformableModel g_DeformableModelPool[64] = {};

// CVector3f
CVector3f g_DeformableModelRayHitNormal = {};

// CVector3f[3000]
CVector3f g_ShatterVertexArray[3000] = {};

// int
int g_INT_020ccfdc = {};
int g_INT_020ccfec = {};
int g_INT_020ccff0 = {};

// uchar
uchar g_FloatVertexArrayInitialized = {};
uchar g_ShatterVertexArrayInitialized = {};

