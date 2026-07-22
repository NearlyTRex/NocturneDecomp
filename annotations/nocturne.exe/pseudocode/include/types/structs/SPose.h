#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CMatrix3x4f.h"
#include "types/structs/SPoseData.h"

// Structure: SPose
// Ghidra size: 0x1a9c (6812 bytes)
#pragma pack(push, 1)
typedef struct SPose {
    SPoseData pose_data; // 0x0
    float bone_scales[100]; // 0x64c
    CMatrix3x4f bone_world_matrices[100]; // 0x7dc
} SPose;
#pragma pack(pop)

