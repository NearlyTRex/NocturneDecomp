#pragma once

// Forward declarations
struct CWayPoint;

// Dependencies
#include "system/basetypes.h"

// Structure: SWayPointAdjacency
// Ghidra size: 0x8 (8 bytes)
#pragma pack(push, 1)
typedef struct SWayPointAdjacency {
    struct CWayPoint* waypoint; // 0x0
    float distance; // 0x4
} SWayPointAdjacency;
#pragma pack(pop)

