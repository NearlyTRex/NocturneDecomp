#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x30D0000
// =============================================================================

// CDemonActorType
CDemonActorType g_CPendulumClassInfo = {};
CDemonActorType g_CPlatformClassInfo = {};

// SMRGLPrimitiveQuad
SMRGLPrimitiveQuad SMRGLPrimitiveQuad_030d4fd0 = {};

// char[101][100]
char g_PathfindingVisited[101][100] = {};

// char[65536]
char g_FileIOBuffer[65536] = {};

// int
int g_PathfindingQueueHead = {};
int g_PathfindingQueueTail = {};
int g_PathfindingNodesExpanded = {};

// uchar
uchar g_PathfindingVisitedMinus1 = {};

