#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1FE0000
// =============================================================================

// CDemonCamera
CDemonCamera g_CDemonCameraInstance = {};

// CDemonGlobe*[100]
CDemonGlobe* g_CoronaGlobes[100] = {};
CDemonGlobe* g_QueuedCoronaGlobes[100] = {};
CDemonGlobe* g_VisibleCoronaGlobes[100] = {};

// CDemonLight*[4]
CDemonLight* g_DynamicLights[4] = {};

// CDemonLight*[96]
CDemonLight* g_CDemonLight_PTR_ARRAY_01fe4cb8[96] = {};
CDemonLight* g_CDemonLight_PTR_ARRAY_01fe4e3c[96] = {};

// CDemonRaytrace
CDemonRaytrace g_CDemonRaytraceInstance = {};

// CKeyFramedModel
CKeyFramedModel g_CKeyFramedModelInstance = {};

// CRect[96]
CRect g_SpotLightBounds[96] = {};

// int
int g_MasterLightCount = {};
int g_SpotLightCount = {};
int g_INT_01fe55bc = {};
int g_INT_01fe55d0 = {};
int g_QueuedCoronaGlobeCount = {};
int g_VisibleCoronaGlobeCount = {};
int g_INT_01fe5c88 = {};
int g_INT_01fe5c8c = {};

// int[100]
int g_QueuedCoronaGlobeAlphaMasks[100] = {};

// int[65536]
int g_IntensityToValueLookupTable[65536] = {};

