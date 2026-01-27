#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SCapsuleCollision
// Ghidra size: 0x3c (60 bytes)
typedef struct SCapsuleCollision {
    float constant; // 0x0
    char unk[12]; // 0x4
    float start_x; // 0x10
    float start_z; // 0x14
    float dir_x; // 0x18
    float dir_z; // 0x1c
    float radius; // 0x20
    void* user_data1; // 0x24
    void* user_data2; // 0x28
    float dot_product; // 0x2c
    float expanded_term; // 0x30
    float normal_x; // 0x34
    float normal_z; // 0x38
} SCapsuleCollision;

