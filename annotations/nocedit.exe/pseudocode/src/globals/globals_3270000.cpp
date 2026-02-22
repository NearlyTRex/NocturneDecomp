#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x3270000
// =============================================================================

// C3DSLight*[200]
C3DSLight* g_OmniLights[200] = {};

// CDemonCamera
CDemonCamera g_CDemonCameraInstance = {};

// CDemonGlobe*[100]
CDemonGlobe* g_CoronaGlobes[100] = {};
CDemonGlobe* g_QueuedCoronaGlobes[100] = {};
CDemonGlobe* g_VisibleCoronaGlobes[100] = {};

// CDemonLight*[4]
CDemonLight* g_DynamicLights[4] = {};

// CDemonLight*[96]
CDemonLight* g_MasterLightList[96] = {};
CDemonLight* g_ActiveLightList[96] = {};

// CDemonRaytrace
CDemonRaytrace g_CDemonRaytraceInstance = {};

// CKeyFramedModel
CKeyFramedModel g_CKeyFramedModelInstance = {};

// CRect[96]
CRect g_ActiveLightBounds[96] = {};

// int
int g_MasterLightCount = {};
int g_ActiveLightCount = {};
int g_DynamicLightCount = {};
int g_CoronaGlobeCount = {};
int g_QueuedCoronaGlobeCount = {};
int g_VisibleCoronaGlobeCount = {};
int g_OmniLightCount = {};

// int[100]
int g_QueuedCoronaGlobeAlphaMasks[100] = {};

// int[65536]
int g_IntensityToValueLookupTable[65536] = {};

