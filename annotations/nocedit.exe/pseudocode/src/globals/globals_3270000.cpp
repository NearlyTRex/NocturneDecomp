#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x3270000
// =============================================================================

CDemonCamera g_CDemonCameraInstance;
CDemonLight* g_MasterLightList[96] = {};
CDemonLight* g_ActiveLightList[96] = {};
CRect DAT_032770b4;
CDemonLight* g_DynamicLights[4] = {};
CDemonGlobe* g_CoronaGlobes[100] = {};
CDemonRaytrace g_CDemonRaytraceInstance;
CKeyFramedModel g_CKeyFramedModelInstance;
int g_IntensityToValueLookupTable[65536] = {};

