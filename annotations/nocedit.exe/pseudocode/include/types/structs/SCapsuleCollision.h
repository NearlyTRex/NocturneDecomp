#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: SCapsuleCollision
// Ghidra size: 0x3c (60 bytes)
typedef struct SCapsuleCollision {
    float closest_t; // 0x0
    CVector3f push_normal; // 0x4
    float start_x; // 0x10
    float start_z; // 0x14
    float dir_x; // 0x18
    float dir_z; // 0x1c
    float radius; // 0x20
    void* top_y; // 0x24
    void* bottom_y; // 0x28
    float sweep_slab_near; // 0x2c
    float sweep_slab_far; // 0x30
    float normal_x; // 0x34
    float normal_z; // 0x38
} SCapsuleCollision;

