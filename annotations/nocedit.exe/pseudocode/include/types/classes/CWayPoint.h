#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CTrigger.h"

// Structure: CWayPoint
// Ghidra size: 0x558 (1368 bytes)
typedef struct CWayPoint {
    CTrigger base; // 0x0
    int num_adjacent_waypoints; // 0x370
    char unk[484]; // 0x374
} CWayPoint;

