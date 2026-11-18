#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2000000
// =============================================================================

// C3DSLight*[200]
C3DSLight* g_VisibleOmniLights[200] = {};

// CDemonActor*[2000]
CDemonActor* g_ActorProfileActors[2000] = {};

// CDemonLight*[4]
CDemonLight* g_PrimaryDirectionalLights[4] = {};

// CDemonLight*[96]
CDemonLight* g_CDemonLight_PTR_ARRAY_0200e240[96] = {};

// CMatrix3x3f
CMatrix3x3f g_LightingRotationMatrix = {};

// CVector3f[4000]
CVector3f g_FaceNormalArray[4000] = {};

// float
float g_FLOAT_0200e890 = {};
float g_FLOAT_0200e898 = {};
float g_FLOAT_0200e89c = {};
float g_FLOAT_0200e8a4 = {};
float g_FLOAT_0200e8a8 = {};
float g_FLOAT_0200e8b0 = {};
float g_FLOAT_0200e8b4 = {};
float g_FLOAT_0200e8bc = {};

// int
int g_InMirrorRenderPass = {};
int g_INT_0200a394 = {};
int g_INT_0200a3a4 = {};
int g_INT_0200a3b8 = {};
int g_SecondaryDirectionalLightCount = {};
int g_PrimaryDirectionalLightCount = {};
int g_INT_0200e3d4 = {};
int g_INT_0200e3d8 = {};
int g_ColorCorrectionCount = {};
int g_LightingSystemDirty = {};
int g_ColorCorrectionLightMultiplier = {};
int g_ColorCorrectionColorMultiplier = {};
int g_ColorCorrectionFogMultiplier = {};

// int[2000]
int g_ActorProfileTimes[2000] = {};

