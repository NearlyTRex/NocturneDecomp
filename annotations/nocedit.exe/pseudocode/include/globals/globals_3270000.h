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

// CDemonCamera
extern CDemonCamera g_CDemonCameraInstance;

// CDemonGlobe*[100]
extern CDemonGlobe* g_CoronaGlobes[100];

// CDemonLight*[4]
extern CDemonLight* g_DynamicLights[4];

// CDemonLight*[96]
extern CDemonLight* g_MasterLightList[96];
extern CDemonLight* g_ActiveLightList[96];

// CDemonRaytrace
extern CDemonRaytrace g_CDemonRaytraceInstance;

// CKeyFramedModel
extern CKeyFramedModel g_CKeyFramedModelInstance;

// CRect
extern CRect DAT_032770b4;

// int[65536]
extern int g_IntensityToValueLookupTable[65536];

