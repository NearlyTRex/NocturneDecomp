#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x32C0000
// =============================================================================

// CDemonGlobe*
CDemonGlobe* g_GlobeLights = {};

// CDemonLight*
CDemonLight* g_PrimaryDirectionalLights = {};

// CDemonLight*[32]
CDemonLight* g_SecondaryDirectionalLights[32] = {};

// CVector3f[4000]
CVector3f g_FaceNormalArray[4000] = {};

// CVector3i[20000]
CVector3i g_TransformedVertexArray[20000] = {};

// int
int g_SecondaryDirectionalLightCount = {};
int g_PrimaryDirectionalLightCount = {};
int g_GlobeLightCount = {};
int g_ColorCorrectionEnabled = {};
int g_LightingSystemDirty = {};
int g_ColorCorrectionLightMultiplier = {};
int g_ColorCorrectionColorMultiplier = {};
int g_ColorCorrectionFogMultiplier = {};

// undefined4
undefined4 DAT_032c1944 = {};
undefined4 DAT_032c1948 = {};
undefined4 DAT_032c1c68 = {};
undefined4 DAT_032c1c6c = {};
undefined4 DAT_032c1c70 = {};
undefined4 DAT_032c1c98 = {};
undefined4 DAT_032c1c9c = {};

