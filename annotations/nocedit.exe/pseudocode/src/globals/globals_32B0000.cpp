#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x32B0000
// =============================================================================

// CDemonActor*[2000]
CDemonActor* g_ActorProfileActors[2000] = {};

// int
int g_InMirrorRenderPass = {};
int g_RenderingShadows = {};

// int[2000]
int g_ActorProfileTimes[2000] = {};

