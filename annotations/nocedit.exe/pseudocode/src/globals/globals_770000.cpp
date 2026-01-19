#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x770000
// =============================================================================

// SRenderBufferEntry[256]
SRenderBufferEntry g_RenderBufferPool[256] = {};

// SRenderVertex
SRenderVertex g_QuadVertex0 = {};
SRenderVertex g_QuadVertex1 = {};
SRenderVertex g_QuadVertex2 = {};
SRenderVertex g_QuadVertex3 = {};

// int[24]
int g_ProcessedVertexIndices[24] = {};

