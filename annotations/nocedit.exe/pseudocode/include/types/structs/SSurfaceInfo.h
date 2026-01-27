#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CColor3i.h"
#include "types/classes/CVector3f.h"

// Structure: SSurfaceInfo
// Ghidra size: 0x54 (84 bytes)
typedef struct SSurfaceInfo {
    float intensity; // 0x0
    float unk1; // 0x4
    int unk2; // 0x8
    CColor3i color; // 0xc
    int unk3; // 0x18
    int unk4; // 0x1c
    char unk5[12]; // 0x20
    CVector3f hit_position; // 0x2c
    char unk6[12]; // 0x38
    float angle_or_rotation; // 0x44
    float reflectivity; // 0x48
    float angle_copy; // 0x4c
    float alpha_or_wetness; // 0x50
} SSurfaceInfo;

