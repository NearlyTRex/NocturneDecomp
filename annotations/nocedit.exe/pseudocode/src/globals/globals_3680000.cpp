#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x3680000
// =============================================================================

// CDeformableModel[64]
CDeformableModel g_DeformableModelPool[64] = {};

// CVector3f
CVector3f g_DeformableModelRayHitNormal = {};

// CVector3f[3000]
CVector3f g_ShatterVertexArray[3000] = {};

// int
int g_DeformableModelRayHitPartIndex = {};
int g_DeformableModelRayHitLodIndex = {};
int g_DeformableModelRayHitTriangleIndex = {};
int g_DeformableModelCount = {};

// uchar
uchar g_FloatVertexArrayInitialized = {};
uchar g_ShatterVertexArrayInitialized = {};

