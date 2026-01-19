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

