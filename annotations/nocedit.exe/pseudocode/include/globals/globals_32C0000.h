#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/C3DSLight.h"
#include "types/classes/CDemonGlobe.h"
#include "types/classes/CDemonLight.h"
#include "types/classes/CMatrix3x3f.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x32C0000
// =============================================================================

// C3DSLight*[200]
extern C3DSLight* g_VisibleOmniLights[200];

// CDemonGlobe*[100]
extern CDemonGlobe* g_GlobeLights[100];

// CDemonLight*[4]
extern CDemonLight* g_PrimaryDirectionalLights[4];

// CDemonLight*[96]
extern CDemonLight* g_SecondaryDirectionalLights[96];

// CMatrix3x3f
extern CMatrix3x3f g_LightingRotationMatrix;

// CVector3f
extern CVector3f g_LightingReferencePosition;
extern CVector3f g_LightingOrientation;
extern CVector3f g_LightingAABBMin;
extern CVector3f g_LightingAABBMax;

// CVector3f[4000]
extern CVector3f g_FaceNormalArray[4000];

// CVector3i[20000]
extern CVector3i g_TransformedVertexArray[20000];

// int
extern int g_SecondaryDirectionalLightCount;
extern int g_PrimaryDirectionalLightCount;
extern int g_GlobeLightCount;
extern int g_ColorCorrectionCount;
extern int g_LightingSystemDirty;
extern int g_ColorCorrectionLightMultiplier;
extern int g_ColorCorrectionColorMultiplier;
extern int g_ColorCorrectionFogMultiplier;

