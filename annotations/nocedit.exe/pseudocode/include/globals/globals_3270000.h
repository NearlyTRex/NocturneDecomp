#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/C3DSLight.h"
#include "types/classes/CDemonCamera.h"
#include "types/classes/CDemonGlobe.h"
#include "types/classes/CDemonLight.h"
#include "types/classes/CDemonRaytrace.h"
#include "types/classes/CKeyFramedModel.h"
#include "types/classes/CRect.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x3270000
// =============================================================================

// C3DSLight*[200]
extern C3DSLight* g_OmniLights[200];

// CDemonCamera
extern CDemonCamera g_CDemonCameraInstance;

// CDemonGlobe*[100]
extern CDemonGlobe* g_CoronaGlobes[100];
extern CDemonGlobe* g_QueuedCoronaGlobes[100];
extern CDemonGlobe* g_VisibleCoronaGlobes[100];

// CDemonLight*[4]
extern CDemonLight* g_DynamicLights[4];

// CDemonLight*[96]
extern CDemonLight* g_MasterLightList[96];
extern CDemonLight* g_ActiveLightList[96];

// CDemonRaytrace
extern CDemonRaytrace g_CDemonRaytraceInstance;

// CKeyFramedModel
extern CKeyFramedModel g_CKeyFramedModelInstance;

// CRect[96]
extern CRect g_ActiveLightBounds[96];

// int
extern int g_MasterLightCount;
extern int g_ActiveLightCount;
extern int g_DynamicLightCount;
extern int g_CoronaGlobeCount;
extern int g_QueuedCoronaGlobeCount;
extern int g_VisibleCoronaGlobeCount;
extern int g_OmniLightCount;

// int[100]
extern int g_QueuedCoronaGlobeAlphaMasks[100];

// int[65536]
extern int g_IntensityToValueLookupTable[65536];

