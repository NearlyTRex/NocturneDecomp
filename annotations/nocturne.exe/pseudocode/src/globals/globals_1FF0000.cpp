#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1FF0000
// =============================================================================

// C3DSLight*[200]
C3DSLight* g_VisibleOmniLights[200] = {};

// CDemonActor*[2000]
CDemonActor* g_ActorProfileActors[2000] = {};

// CDemonGlobe*[100]
CDemonGlobe* g_GlobeLights[100] = {};

// CDemonLight*[4]
CDemonLight* g_PrimaryDirectionalLights[4] = {};

// CDemonLight*[96]
CDemonLight* g_SecondaryDirectionalLights[96] = {};

// CMatrix3x3f
CMatrix3x3f g_LightingRotationMatrix = {};

// CVector3f[4000]
CVector3f g_FaceNormalArray[4000] = {};

// float
float g_FLOAT_01fff54c = {};
float g_FLOAT_01fff554 = {};
float g_FLOAT_01fff558 = {};
float g_FLOAT_01fff560 = {};
float g_FLOAT_01fff564 = {};
float g_FLOAT_01fff56c = {};
float g_FLOAT_01fff570 = {};
float g_FLOAT_01fff578 = {};

// int
int g_InMirrorRenderPass = {};
int g_RenderingShadows = {};
int g_SecondaryDirectionalLightCount = {};
int g_PrimaryDirectionalLightCount = {};
int g_GlobeLightCount = {};
int g_ColorCorrectionCount = {};
int g_LightingSystemDirty = {};
int g_ColorCorrectionLightMultiplier = {};
int g_ColorCorrectionColorMultiplier = {};
int g_ColorCorrectionFogMultiplier = {};

// int[2000]
int g_ActorProfileTimes[2000] = {};

