#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CColor3i.h"
#include "types/classes/CVector3f.h"

// Structure: SSurfaceInfo
// Ghidra size: 0x54 (84 bytes)
typedef struct SSurfaceInfo {
    float intensity; // 0x0
    float field_4; // 0x4
    int field_8; // 0x8
    CColor3i color; // 0xc
    int field_24; // 0x18
    int field_28; // 0x1c
    char field_32[12]; // 0x20
    CVector3f hit_position; // 0x2c
    char field_56[12]; // 0x38
    float angle_or_rotation; // 0x44
    float reflectivity; // 0x48
    float angle_copy; // 0x4c
    float alpha_or_wetness; // 0x50
} SSurfaceInfo;

