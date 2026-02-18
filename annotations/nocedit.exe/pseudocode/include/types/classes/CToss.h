#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBox.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CToss
// Ghidra size: 0x3e4 (996 bytes)
typedef struct CToss {
    int toss_type; // 0x0
    CKeyFramedModelInstance model; // 0x4
    CBox physics_box; // 0x180
    float ground_height; // 0x3d8
    float fuse_timer; // 0x3dc
    uint sfx_handle; // 0x3e0
} CToss;

