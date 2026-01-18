#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/structs/SRenderBufferEntry.h"
#include "types/structs/SRenderVertex.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x770000
// =============================================================================

extern SRenderVertex g_QuadVertex0;
extern SRenderVertex g_QuadVertex1;
extern SRenderVertex g_QuadVertex2;
extern SRenderVertex g_QuadVertex3;
extern int g_ProcessedVertexIndices[24];
extern SRenderBufferEntry g_RenderBufferPool[256];

