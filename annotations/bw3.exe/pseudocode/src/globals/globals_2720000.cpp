#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2720000
// =============================================================================

// CDeformableModel[64]
CDeformableModel g_DeformableModelPool[64] = {};

// CVector3f
CVector3f g_DeformableModelRayHitNormal = {};

// CVector3f[3000]
CVector3f g_ShatterVertexArray[3000] = {};

// int
int g_INT_0272af44 = {};
int g_INT_0272af54 = {};
int g_INT_0272af58 = {};

// uchar
uchar g_FloatVertexArrayInitialized = {};
uchar g_ShatterVertexArrayInitialized = {};

