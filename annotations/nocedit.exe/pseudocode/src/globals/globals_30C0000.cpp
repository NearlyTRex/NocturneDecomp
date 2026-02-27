#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x30C0000
// =============================================================================

// CPathMap*[200]
CPathMap* g_PathMapList[200] = {};

// CPathQueueNode[5000]
CPathQueueNode g_PathfindingQueue[5000] = {};

// int
int g_PathfindingMaxClimbHeight = {};
int g_PathMapCount = {};
int g_PathfindingCurrentX = {};
int g_PathfindingCurrentZ = {};
int g_PathfindingDestX = {};
int g_PathfindingDestZ = {};

// uchar
uchar g_PathMapCacheInitFlag = {};

