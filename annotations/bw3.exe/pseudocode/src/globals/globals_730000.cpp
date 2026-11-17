#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x730000
// =============================================================================

// SRenderBufferEntry[256]
SRenderBufferEntry g_RenderBufferPool[256] = {};

// int
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
int g_INT_007303f0 = {};
int g_TexturesDisabled = {};
int g_INT_007303f8 = {};
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

// void*
void* g_StoredMappedFrameBuffer = {};
void* g_CurrentVertexData = {};

