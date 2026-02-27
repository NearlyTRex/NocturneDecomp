#pragma once

// Type dependencies
#include "system/basetypes.h"
#include "types/classes/CPathMap.h"
#include "types/classes/CPathQueueNode.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x30C0000
// =============================================================================

// CPathMap*[200]
extern CPathMap* g_PathMapList[200];

// CPathQueueNode[5000]
extern CPathQueueNode g_PathfindingQueue[5000];

// int
extern int g_PathfindingMaxClimbHeight;
extern int g_PathMapCount;
extern int g_PathfindingCurrentX;
extern int g_PathfindingCurrentZ;
extern int g_PathfindingDestX;
extern int g_PathfindingDestZ;

// uchar
extern uchar g_PathMapCacheInitFlag;

