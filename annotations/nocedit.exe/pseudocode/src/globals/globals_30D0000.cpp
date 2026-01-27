#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x30D0000
// =============================================================================

// CDemonActorType
CDemonActorType g_CPendulumClassInfo = {};
CDemonActorType g_CPlatformClassInfo = {};

// SMRGLHeaderPrimitive
SMRGLHeaderPrimitive DAT_030d4fd0 = {};

// char[101][100]
char g_PathfindingVisited[101][100] = {};

// char[65536]
char g_FileIOBuffer[65536] = {};

// int
int g_PathfindingQueueHead = {};
int g_PathfindingQueueTail = {};
int g_PathfindingNodesExpanded = {};
int INT_030d4fe8 = {};
int INT_030d4fec = {};
int INT_030d4ff0 = {};
int INT_030d4ff4 = {};
int INT_030d4ff8 = {};
int INT_030d4ffc = {};
int INT_030d5000 = {};
int INT_030d5004 = {};
int INT_030d5008 = {};
int INT_030d500c = {};
int INT_030d5010 = {};
int INT_030d5014 = {};

