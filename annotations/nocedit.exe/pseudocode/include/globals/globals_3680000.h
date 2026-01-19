#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDeformableModel.h"
#include "types/classes/CVector3f.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x3680000
// =============================================================================

// CDeformableModel[64]
extern CDeformableModel g_DeformableModelPool[64];

// CVector3f
extern CVector3f g_DeformableModelRayHitNormal;

// CVector3f[3000]
extern CVector3f g_ShatterVertexArray[3000];

