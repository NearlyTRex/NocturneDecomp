#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/structs/SRenderBufferEntry.h"
#include "types/structs/SRenderVertex.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x770000
// =============================================================================

// SRenderBufferEntry[256]
extern SRenderBufferEntry g_RenderBufferPool[256];

// SRenderVertex
extern SRenderVertex g_QuadVertex0;
extern SRenderVertex g_QuadVertex1;
extern SRenderVertex g_QuadVertex2;
extern SRenderVertex g_QuadVertex3;

// float[256]
extern float g_PaletteLuminanceCache[256];

// int
extern int g_RenderingMode;
extern int g_StoredWindowWidth;
extern int g_StoredWindowHeight;
extern int g_StoredClipLeft;
extern int g_StoredClipTop;
extern int g_StoredClipRight;
extern int g_StoredClipBottom;
extern int g_StoredBitsPerPixel;
extern int g_ScreenBufferStride;
extern int g_CurrentPolygonColor;
extern int g_PlaneTestCount;
extern int g_BypassClipping;
extern int g_TexturesDisabled;
extern int g_CullingMode;
extern int g_CurrentInvertedColor;
extern int g_RenderResult;
extern int g_StoredX;
extern int g_StoredY;
extern int g_StoredZ;
extern int g_RenderBufferEnabled;
extern int g_RenderBufferCount;

// int[24]
extern int g_ProcessedVertexIndices[24];

// uint
extern uint g_ProcessedVertexOffset;
extern uint g_ProcessedVertexBackupOffset;

// undefined4
extern undefined4 DAT_00772a70;
extern undefined4 DAT_00772a78;

// void*
extern void* g_SoftwareZBuffer;
extern void* g_StoredMappedFrameBuffer;
extern void* g_CurrentVertexData;

