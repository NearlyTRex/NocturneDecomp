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

// float
float FLOAT_032c1c74 = {};
float FLOAT_032c1c78 = {};
float FLOAT_032c1c7c = {};
float FLOAT_032c1c80 = {};
float FLOAT_032c1c84 = {};
float FLOAT_032c1c88 = {};
float FLOAT_032c1c8c = {};
float FLOAT_032c1c90 = {};
float FLOAT_032c1c94 = {};
float FLOAT_032c1ca0 = {};
float FLOAT_032c1ca4 = {};
float FLOAT_032c1ca8 = {};
float FLOAT_032c1cac = {};
float FLOAT_032c1cb0 = {};
float FLOAT_032c1cb4 = {};
float FLOAT_032c1cb8 = {};

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

