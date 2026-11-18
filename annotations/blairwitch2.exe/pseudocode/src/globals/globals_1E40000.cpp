#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1E40000
// =============================================================================

// CPathMap*[200]
CPathMap* g_PathMapList[200] = {};

// int
int g_PathfindingMaxClimbHeight = {};
int g_PathMapCount = {};

// uchar
uchar g_PathMapCacheInitFlag = {};

