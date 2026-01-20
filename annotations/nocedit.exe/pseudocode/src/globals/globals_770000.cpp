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

// float[256]
float g_PaletteLuminanceCache[256] = {};

// int
int g_RenderingMode = {};
int g_StoredWindowWidth = {};
int g_StoredWindowHeight = {};
int g_StoredClipLeft = {};
int g_StoredClipTop = {};
int g_StoredClipRight = {};
int g_StoredClipBottom = {};
int g_StoredBitsPerPixel = {};
int g_ScreenBufferStride = {};
int g_CurrentPolygonColor = {};
int g_PlaneTestCount = {};
int g_BypassClipping = {};
int g_TexturesDisabled = {};
int g_CullingMode = {};
int g_CurrentInvertedColor = {};
int g_RenderResult = {};
int g_StoredX = {};
int g_StoredY = {};
int g_StoredZ = {};
int g_RenderBufferEnabled = {};
int g_RenderBufferCount = {};

// int[24]
int g_ProcessedVertexIndices[24] = {};

// uint
uint g_ProcessedVertexOffset = {};
uint g_ProcessedVertexBackupOffset = {};

// undefined4
undefined4 DAT_00772a70 = {};
undefined4 DAT_00772a78 = {};

// void*
void* g_SoftwareZBuffer = {};
void* g_StoredMappedFrameBuffer = {};
void* g_CurrentVertexData = {};

