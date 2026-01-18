#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonCamera.h"
#include "types/classes/CDemonGlobe.h"
#include "types/classes/CDemonLight.h"
#include "types/classes/CDemonRaytrace.h"
#include "types/classes/CKeyFramedModel.h"
#include "types/classes/CRect.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x3270000
// =============================================================================

extern CDemonCamera g_CDemonCameraInstance;
extern CDemonLight* g_MasterLightList[96];
extern CDemonLight* g_ActiveLightList[96];
extern CRect DAT_032770b4;
extern CDemonLight* g_DynamicLights[4];
extern CDemonGlobe* g_CoronaGlobes[100];
extern CDemonRaytrace g_CDemonRaytraceInstance;
extern CKeyFramedModel g_CKeyFramedModelInstance;
extern int g_IntensityToValueLookupTable[65536];

