#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1E70000
// =============================================================================

// CDemonActorType
CDemonActorType g_CPendulumClassInfo = {};
CDemonActorType g_CPlatformClassInfo = {};
CDemonActorType g_CRifleClassInfo = {};
CDemonActorType g_CScatClassInfo = {};

// CDemonPod
CDemonPod g_CDemonPodInstance = {};

// SMRGLPrimitiveQuad
SMRGLPrimitiveQuad g_PathMapQuad = {};

// SSoftwareEdge[16]
SSoftwareEdge g_SSoftwareEdge_ARRAY_01e7d5bc[16] = {};
SSoftwareEdge g_SSoftwareEdge_ARRAY_01e7dad0[16] = {};

// char[101][100]
char g_PathfindingVisited[101][100] = {};

// char[10][1024]
char g_ScriptSubtitleLines[10][1024] = {};

// int
int g_PathfindingQueueHead = {};
int g_PathfindingQueueTail = {};
int g_PathfindingNodesExpanded = {};
int g_SoftwareEdgeCount = {};
int g_SoftwareMinScanline = {};
int g_SoftwareMaxScanline = {};
int g_RenderedTriangleCount = {};
int g_ActiveEdgeCount = {};
int g_MinScanline = {};
int g_MaxScanline = {};
int g_PreviousLetterboxMode = {};

// int[18]
int g_ScatIndices[18] = {};

// uchar
uchar g_PathfindingVisitedMinus1 = {};

