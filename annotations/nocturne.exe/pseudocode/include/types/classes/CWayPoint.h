#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CTrigger.h"
#include "types/structs/SWayPointAdjacency.h"

// Structure: CWayPoint
// Ghidra size: 0x550 (1360 bytes)
#pragma pack(push, 1)
typedef struct CWayPoint {
    CTrigger base; // 0x0
    int num_adjacent_waypoints; // 0x368
    SWayPointAdjacency adjacency[60]; // 0x36c
    float pathfind_cost; // 0x54c
} CWayPoint;
#pragma pack(pop)

