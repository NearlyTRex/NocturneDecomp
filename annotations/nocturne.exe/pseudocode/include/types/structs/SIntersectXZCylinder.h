#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: SIntersectXZCylinder
// Ghidra size: 0x5c (92 bytes)
#pragma pack(push, 1)
typedef struct SIntersectXZCylinder {
    float closest_t; // 0x0
    CVector3f push_normal; // 0x4
    float center_x; // 0x10
    float center_z; // 0x14
    float dir_x; // 0x18
    float dir_z; // 0x1c
    float radius; // 0x20
    float top_y; // 0x24
    float bottom_y; // 0x28
    float sweep_slab_near; // 0x2c
    float sweep_slab_far; // 0x30
    float normal_x; // 0x34
    float normal_z; // 0x38
    float edge_x1; // 0x3c
    float edge_z1; // 0x40
    float edge_x2; // 0x44
    float edge_z2; // 0x48
    float param_t; // 0x4c
    float param_clamped; // 0x50
    float intersect_x; // 0x54
    float intersect_z; // 0x58
} SIntersectXZCylinder;
#pragma pack(pop)

