#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonFilter.h"
#include "types/structs/SEdge.h"
#include "types/structs/SMRGLHeaderPrimitive.h"
#include "types/structs/SRenderVertex.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x820000
// =============================================================================

extern SMRGLHeaderPrimitive* g_RenderFaceArray[2000];
extern CDemonActorType* g_ActorClassRegistrations[200];
extern CDemonFilter CDemonFilter_ARRAY_008229ec[8];
extern SEdge g_TracedEdgeBuffer[512];
extern SRenderVertex g_ClippedVertexBuffer[16];
extern SRenderVertex* g_ClipperCullingPointers[16];
extern SRenderVertex g_ClipperTempBuffer[12];
extern SRenderVertex g_ClipperOutputBuffer[16];
extern SRenderVertex g_ClipperInputBuffer[16];
extern SRenderVertex g_ClipperWorkingBuffer[16];
extern SRenderVertex g_ClipperIntermediateBuffer[16];

