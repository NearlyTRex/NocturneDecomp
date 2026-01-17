#include "globals.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x3270000
// =============================================================================

CDemonLight* g_MasterLightList[96] = {};
CDemonLight* g_ActiveLightList[96] = {};
CDemonLight* g_DynamicLights[4] = {};
CDemonGlobe* g_CoronaGlobes[100] = {};
int g_IntensityToValueLookupTable[65536] = {};

