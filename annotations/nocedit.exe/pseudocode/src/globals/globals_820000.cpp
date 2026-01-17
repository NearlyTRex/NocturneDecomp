#include "globals.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x820000
// =============================================================================

SMRGLHeaderPrimitive* g_RenderFaceArray[2000] = {};
CDemonActorType* g_ActorClassRegistrations[200] = {};
CDemonFilter CDemonFilter_ARRAY_008229ec[8] = {};
SEdge g_TracedEdgeBuffer[512] = {};
SRenderVertex g_ClippedVertexBuffer[16] = {};
SRenderVertex* g_ClipperCullingPointers[16] = {};
SRenderVertex g_ClipperTempBuffer[12] = {};
SRenderVertex g_ClipperOutputBuffer[16] = {};
SRenderVertex g_ClipperInputBuffer[16] = {};
SRenderVertex g_ClipperWorkingBuffer[16] = {};
SRenderVertex g_ClipperIntermediateBuffer[16] = {};

