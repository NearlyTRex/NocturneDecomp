#pragma once

// Forward declarations
struct CKeyFramedModelInstance;

// Dependencies
#include "system/basetypes.h"

// Structure: SCollisionInfo
// Ghidra size: 0x28 (40 bytes)
typedef struct SCollisionInfo {
    int ray_type; // 0x0
    float unk1; // 0x4
    float unk2; // 0x8
    float unk3; // 0xc
    float unk4; // 0x10
    float cylinder_bottom_y; // 0x14
    float cylinder_top_y; // 0x18
    float cylinder_radius; // 0x1c
    void* result_ptr; // 0x20
    struct CKeyFramedModelInstance* model; // 0x24
} SCollisionInfo;

