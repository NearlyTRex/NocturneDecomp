#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonLight.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x32C0000
// =============================================================================

// CDemonLight*[32]
extern CDemonLight* g_SecondaryDirectionalLights[32];

// CVector3f[4000]
extern CVector3f g_FaceNormalArray[4000];

// CVector3i[20000]
extern CVector3i g_TransformedVertexArray[20000];

