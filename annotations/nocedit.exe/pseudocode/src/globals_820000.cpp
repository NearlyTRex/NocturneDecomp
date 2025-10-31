#include "globals.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x820000
// =============================================================================

SMRGLHeaderPrimitive*[2000] g_RenderFaceArray = {};
CDemonActorType*[200] g_ActorClassRegistrations = {};
CDemonFilter[8] CDemonFilter_ARRAY_008229ec = {};
SEdge[512] g_TracedEdgeBuffer = {};
SRenderVertex[16] g_ClippedVertexBuffer = {};
SRenderVertex*[16] g_ClipperCullingPointers = {};
SRenderVertex[12] g_ClipperTempBuffer = {};
SRenderVertex[16] g_ClipperOutputBuffer = {};
SRenderVertex[16] g_ClipperInputBuffer = {};
SRenderVertex[16] g_ClipperWorkingBuffer = {};
SRenderVertex[16] g_ClipperIntermediateBuffer = {};

