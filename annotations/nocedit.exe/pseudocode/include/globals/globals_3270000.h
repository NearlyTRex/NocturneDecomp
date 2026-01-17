#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonGlobe.h"
#include "types/classes/CDemonLight.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x3270000
// =============================================================================

extern CDemonLight* g_MasterLightList[96];
extern CDemonLight* g_ActiveLightList[96];
extern CDemonLight* g_DynamicLights[4];
extern CDemonGlobe* g_CoronaGlobes[100];
extern int g_IntensityToValueLookupTable[65536];

