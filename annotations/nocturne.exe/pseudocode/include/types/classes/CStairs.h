#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonTriangle.h"
#include "types/enums/EGroundType.h"

// Structure: CStairs
// Ghidra size: 0xa2c (2604 bytes)
#pragma pack(push, 1)
typedef struct CStairs {
    CDemonActor base; // 0x0
    float rise; // 0x150
    float run; // 0x154
    float width; // 0x158
    float bevel_y; // 0x15c
    float bevel_z; // 0x160
    int stair_count; // 0x164
    CDemonTriangle collision_triangles[40]; // 0x168
    EGroundType ground_type; // 0xa28
} CStairs;
#pragma pack(pop)

