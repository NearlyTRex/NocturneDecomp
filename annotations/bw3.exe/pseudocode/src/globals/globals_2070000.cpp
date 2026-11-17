#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2070000
// =============================================================================

// C3DSLight*[200]
C3DSLight* g_VisibleOmniLights[200] = {};

// CDemonActor*[2000]
CDemonActor* g_CDemonActor_PTR_ARRAY_0207da18[2000] = {};

// CDemonLight*[4]
CDemonLight* g_PrimaryDirectionalLights[4] = {};

// CDemonLight*[96]
CDemonLight* g_CDemonLight_PTR_ARRAY_0207f95c[96] = {};

// CMatrix3x3f
CMatrix3x3f g_LightingRotationMatrix = {};

// float
float g_FLOAT_0207bac0 = {};
float g_FLOAT_0207ffac = {};
float g_FLOAT_0207ffb4 = {};
float g_FLOAT_0207ffb8 = {};
float g_FLOAT_0207ffc0 = {};
float g_FLOAT_0207ffc4 = {};
float g_FLOAT_0207ffcc = {};
float g_FLOAT_0207ffd0 = {};
float g_FLOAT_0207ffd8 = {};

// int
int g_InMirrorRenderPass = {};
int g_INT_0207baa8 = {};
int g_INT_0207bab8 = {};
int g_INT_0207babc = {};
int g_INT_0207bad4 = {};
int g_SecondaryDirectionalLightCount = {};
int g_PrimaryDirectionalLightCount = {};
int g_INT_0207faf0 = {};
int g_INT_0207faf4 = {};
int g_ColorCorrectionCount = {};
int g_LightingSystemDirty = {};

// int[2000]
int g_INT_ARRAY_0207bad8[2000] = {};

