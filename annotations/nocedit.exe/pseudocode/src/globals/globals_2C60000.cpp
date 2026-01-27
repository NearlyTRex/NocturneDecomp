#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x2C60000
// =============================================================================

// CBitFont*
CBitFont* g_CurrentFont = {};

// CDemonActorType
CDemonActorType g_CDraculaBrideClassInfo = {};

// CDemonRenderer
CDemonRenderer g_CDemonRendererInstance = {};

// SEdgeData[16]
SEdgeData g_EdgeInterpolationArray[16] = {};

// SEdgeTableEntry[40]
SEdgeTableEntry g_GlobalEdgeTable[40] = {};

// SFace[5000]
SFace g_CapturedFaces[5000] = {};

// SFreaky[6]
SFreaky SFreaky_ARRAY_02c6d0c0[6] = {};

// float
float FLOAT_02c6d040 = {};
float FLOAT_02c6d044 = {};
float FLOAT_02c6d048 = {};
float FLOAT_02c6d04c = {};
float FLOAT_02c6d050 = {};
float FLOAT_02c6d054 = {};
float FLOAT_02c6d058 = {};
float FLOAT_02c6d05c = {};
float FLOAT_02c6d060 = {};
float g_DashAnimationAccumulator = {};
float g_DashAnimationOffset = {};
float g_DashAnimationAccumulatorOther = {};
float g_DashOffsetCounter = {};

// int
int g_RenderTriangleEdgeCount = {};
int g_RenderTriangleMinScanlineY = {};
int g_RenderTriangleMaxScanlineY = {};
int g_RasterizerDepthBias = {};
int INT_02c6d0a0 = {};
int INT_02c6d0a4 = {};
int INT_02c6d0a8 = {};
int INT_02c6d0ac = {};
int INT_02c6d0b0 = {};
int INT_02c6d0b4 = {};
int INT_02c6d0b8 = {};
int INT_02c6d0bc = {};
int g_DashAnimationLastFrame = {};
int g_LastAnimationTimerValue = {};
int g_CurrentDrawColor = {};
int g_PaletteColorIndex = {};
int g_UseRGBConversion = {};
int g_OriginalColorValue = {};
int g_ScaledRedComponent = {};
int g_ScaledGreenComponent = {};
int g_ScaledBlueComponent = {};
int g_PackedPixelColor = {};
int g_DuplicatedPixelColor = {};
int g_RenderPixelCounter = {};
int g_RenderAbortFlag = {};
int g_CaptureFaceCount = {};
int g_CaptureTextureCount = {};

// int[16]
int g_VertexIndexBuffer[16] = {};

