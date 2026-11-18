#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2020000
// =============================================================================

// C3DSLight*[200]
C3DSLight* g_VisibleOmniLights[200] = {};

// CDemonActor*[2000]
CDemonActor* g_ActorProfileActors[2000] = {};

// CDemonLight*[4]
CDemonLight* g_PrimaryDirectionalLights[4] = {};

// CDemonLight*[96]
CDemonLight* g_CDemonLight_PTR_ARRAY_0202a1f4[96] = {};

// CMatrix3x3f
CMatrix3x3f g_LightingRotationMatrix = {};

// CVector3f[4000]
CVector3f g_FaceNormalArray[4000] = {};

// float
float g_FLOAT_0202a844 = {};
float g_FLOAT_0202a84c = {};
float g_FLOAT_0202a850 = {};
float g_FLOAT_0202a858 = {};
float g_FLOAT_0202a85c = {};
float g_FLOAT_0202a864 = {};
float g_FLOAT_0202a868 = {};
float g_FLOAT_0202a870 = {};

// int
int g_InMirrorRenderPass = {};
int g_INT_02026348 = {};
int g_INT_02026358 = {};
int g_INT_0202636c = {};
int g_SecondaryDirectionalLightCount = {};
int g_PrimaryDirectionalLightCount = {};
int g_INT_0202a388 = {};
int g_INT_0202a38c = {};
int g_ColorCorrectionCount = {};
int g_LightingSystemDirty = {};
int g_ColorCorrectionLightMultiplier = {};
int g_ColorCorrectionColorMultiplier = {};
int g_ColorCorrectionFogMultiplier = {};

// int[2000]
int g_ActorProfileTimes[2000] = {};

