#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActorType.h"
#include "types/structs/SMRGLPrimitiveQuad.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x30D0000
// =============================================================================

// CDemonActorType
extern CDemonActorType g_CPendulumClassInfo;
extern CDemonActorType g_CPlatformClassInfo;

// SMRGLPrimitiveQuad
extern SMRGLPrimitiveQuad SMRGLPrimitiveQuad_030d4fd0;

// char[101][100]
extern char g_PathfindingVisited[101][100];

// char[65536]
extern char g_FileIOBuffer[65536];

// int
extern int g_PathfindingQueueHead;
extern int g_PathfindingQueueTail;
extern int g_PathfindingNodesExpanded;

// uchar
extern uchar g_PathfindingVisitedMinus1;

