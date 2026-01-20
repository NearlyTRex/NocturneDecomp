#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x3270000
// =============================================================================

// CDemonCamera
CDemonCamera g_CDemonCameraInstance = {};

// CDemonGlobe*[100]
CDemonGlobe* g_CoronaGlobes[100] = {};

// CDemonLight*[4]
CDemonLight* g_DynamicLights[4] = {};

// CDemonLight*[96]
CDemonLight* g_MasterLightList[96] = {};
CDemonLight* g_ActiveLightList[96] = {};

// CDemonRaytrace
CDemonRaytrace g_CDemonRaytraceInstance = {};

// CKeyFramedModel
CKeyFramedModel g_CKeyFramedModelInstance = {};

// CRect
CRect DAT_032770b4 = {};

// int
int g_MasterLightCount = {};
int g_ActiveLightCount = {};
int g_DynamicLightCount = {};
int g_CoronaGlobeCount = {};

// int[65536]
int g_IntensityToValueLookupTable[65536] = {};

// undefined4
undefined4 DAT_0327785c = {};
undefined4 DAT_03277860 = {};
undefined4 DAT_03277864 = {};
undefined4 DAT_032779f0 = {};
undefined4 DAT_032779f4 = {};
undefined4 DAT_03277b80 = {};
undefined4 DAT_03277b84 = {};
undefined4 DAT_03277b88 = {};
undefined4 DAT_03277d80 = {};
undefined4 DAT_03277d84 = {};
undefined4 DAT_03277d88 = {};

