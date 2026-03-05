#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonTriangle.h"
#include "types/enums/EGroundType.h"

// Structure: CStairs
// Ghidra size: 0xa34 (2612 bytes)
typedef struct CStairs {
    CDemonActor base; // 0x0
    float rise; // 0x158
    float run; // 0x15c
    float width; // 0x160
    float bevel_y; // 0x164
    float bevel_z; // 0x168
    int stair_count; // 0x16c
    CDemonTriangle collision_triangles[40]; // 0x170
    EGroundType ground_type; // 0xa30
} CStairs;

