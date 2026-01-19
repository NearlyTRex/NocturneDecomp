#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x3270000
// =============================================================================

// CDemonCamera
CDemonCamera g_CDemonCameraInstance;

// CDemonGlobe*[100]
CDemonGlobe* g_CoronaGlobes[100] = {};

// CDemonLight*[4]
CDemonLight* g_DynamicLights[4] = {};

// CDemonLight*[96]
CDemonLight* g_MasterLightList[96] = {};
CDemonLight* g_ActiveLightList[96] = {};

// CDemonRaytrace
CDemonRaytrace g_CDemonRaytraceInstance;

// CKeyFramedModel
CKeyFramedModel g_CKeyFramedModelInstance;

// CRect
CRect DAT_032770b4;

// int[65536]
int g_IntensityToValueLookupTable[65536] = {};

