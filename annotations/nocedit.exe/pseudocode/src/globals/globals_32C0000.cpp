#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x32C0000
// =============================================================================

// C3DSLight*[200]
C3DSLight* g_VisibleOmniLights[200] = {};

// CDemonGlobe*[100]
CDemonGlobe* g_GlobeLights[100] = {};

// CDemonLight*[32]
CDemonLight* g_SecondaryDirectionalLights[32] = {};

// CDemonLight*[4]
CDemonLight* g_PrimaryDirectionalLights[4] = {};

// CMatrix3x3f
CMatrix3x3f g_LightingRotationMatrix = {};

// CVector3f
CVector3f g_LightingReferencePosition = {};
CVector3f g_LightingOrientation = {};
CVector3f g_LightingAABBMin = {};
CVector3f g_LightingAABBMax = {};

// CVector3f[4000]
CVector3f g_FaceNormalArray[4000] = {};

// CVector3i[20000]
CVector3i g_TransformedVertexArray[20000] = {};

// int
int g_SecondaryDirectionalLightCount = {};
int g_PrimaryDirectionalLightCount = {};
int g_GlobeLightCount = {};
int g_ColorCorrectionCount = {};
int g_LightingSystemDirty = {};
int g_ColorCorrectionLightMultiplier = {};
int g_ColorCorrectionColorMultiplier = {};
int g_ColorCorrectionFogMultiplier = {};

