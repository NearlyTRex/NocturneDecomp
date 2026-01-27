#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActorType.h"
#include "types/structs/SMRGLHeaderPrimitive.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x30D0000
// =============================================================================

// CDemonActorType
extern CDemonActorType g_CPendulumClassInfo;
extern CDemonActorType g_CPlatformClassInfo;

// SMRGLHeaderPrimitive
extern SMRGLHeaderPrimitive DAT_030d4fd0;

// char[101][100]
extern char g_PathfindingVisited[101][100];

// char[65536]
extern char g_FileIOBuffer[65536];

// int
extern int g_PathfindingQueueHead;
extern int g_PathfindingQueueTail;
extern int g_PathfindingNodesExpanded;
extern int INT_030d4fe8;
extern int INT_030d4fec;
extern int INT_030d4ff0;
extern int INT_030d4ff4;
extern int INT_030d4ff8;
extern int INT_030d4ffc;
extern int INT_030d5000;
extern int INT_030d5004;
extern int INT_030d5008;
extern int INT_030d500c;
extern int INT_030d5010;
extern int INT_030d5014;

