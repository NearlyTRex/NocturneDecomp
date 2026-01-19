#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x30C0000
// =============================================================================

// CPathMap*[200]
CPathMap* g_PathMapList[200] = {};

// CPathQueueNode[5000]
CPathQueueNode g_PathfindingQueue[5000] = {};

