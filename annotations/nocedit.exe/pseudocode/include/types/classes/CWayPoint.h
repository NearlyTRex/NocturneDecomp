#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CTrigger.h"
#include "types/structs/SWayPointAdjacency.h"

// Structure: CWayPoint
// Ghidra size: 0x558 (1368 bytes)
#pragma pack(push, 1)
typedef struct CWayPoint {
    CTrigger base; // 0x0
    int num_adjacent_waypoints; // 0x370
    SWayPointAdjacency adjacency[60]; // 0x374
    float pathfind_cost; // 0x554
} CWayPoint;
#pragma pack(pop)

