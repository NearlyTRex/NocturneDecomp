#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x32B0000
// =============================================================================

// CDemonActor*[2000]
extern CDemonActor* g_ActorProfileActors[2000];

// int
extern int g_InMirrorRenderPass;
extern int g_RenderingShadows;

// int[2000]
extern int g_ActorProfileTimes[2000];

