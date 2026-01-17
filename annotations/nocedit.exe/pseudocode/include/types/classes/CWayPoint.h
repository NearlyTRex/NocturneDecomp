#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CTrigger.h"

// Structure: CWayPoint
// Ghidra size: 0x558 (1368 bytes)
typedef struct CWayPoint {
    CTrigger base_trigger; // 0x0
    int num_adjacent_waypoints; // 0x370
    char field_884[484]; // 0x374
} CWayPoint;

