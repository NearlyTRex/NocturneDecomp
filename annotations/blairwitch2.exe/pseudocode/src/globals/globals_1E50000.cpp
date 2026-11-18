#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1E50000
// =============================================================================

// CPathQueueNode[5000]
CPathQueueNode g_PathfindingQueue[5000] = {};

// char[101][100]
char g_PathfindingVisited[101][100] = {};

// int
int g_PathfindingCurrentX = {};
int g_PathfindingCurrentZ = {};
int g_PathfindingDestX = {};
int g_PathfindingDestZ = {};
int g_PathfindingQueueHead = {};
int g_PathfindingQueueTail = {};

// uchar
uchar g_PathfindingVisitedMinus1 = {};

