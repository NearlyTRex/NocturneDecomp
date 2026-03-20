#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CBitFont.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonRenderer.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SEdgeTableEntry.h"
#include "types/structs/SFace.h"
#include "types/structs/SFreaky.h"
#include "types/structs/SSoftwareEdge.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2C60000
// =============================================================================

// CBitFont*
extern CBitFont* g_CurrentFont;

// CDemonActorType
extern CDemonActorType g_CDraculaBrideClassInfo;

// CDemonRenderer
extern CDemonRenderer g_CDemonRendererInstance;

// CVector3f
extern CVector3f CVector3f_02c6d040;
extern CVector3f CVector3f_02c6d04c;
extern CVector3f CVector3f_02c6d058;

// SEdgeTableEntry[40]
extern SEdgeTableEntry g_GlobalEdgeTable[40];

// SFace[5000]
extern SFace g_CapturedFaces[5000];

// SFreaky[6]
extern SFreaky SFreaky_ARRAY_02c6d0c0[6];

// SSoftwareEdge[16]
extern SSoftwareEdge g_EdgeInterpolationArray[16];

// float
extern float g_DashAnimationAccumulator;
extern float g_DashAnimationOffset;
extern float g_DashAnimationAccumulatorOther;
extern float g_DashOffsetCounter;

// int
extern int g_RenderTriangleEdgeCount;
extern int g_RenderTriangleMinScanlineY;
extern int g_RenderTriangleMaxScanlineY;
extern int g_RasterizerDepthBias;
extern int g_DashAnimationLastFrame;
extern int g_LastAnimationTimerValue;
extern int g_CurrentDrawColor;
extern int g_PaletteColorIndex;
extern int g_UseRGBConversion;
extern int g_OriginalColorValue;
extern int g_ScaledRedComponent;
extern int g_ScaledGreenComponent;
extern int g_ScaledBlueComponent;
extern int g_PackedPixelColor;
extern int g_DuplicatedPixelColor;
extern int g_RenderPixelCounter;
extern int g_RenderAbortFlag;
extern int g_CaptureFaceCount;
extern int g_CaptureTextureCount;

// int[16]
extern int g_VertexIndexBuffer[16];

// int[8]
extern int g_DraculaBrideIndices[8];

