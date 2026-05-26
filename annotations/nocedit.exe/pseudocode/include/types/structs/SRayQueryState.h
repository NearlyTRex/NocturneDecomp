#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CColor3i.h"

// Structure: SRayQueryState
// Ghidra size: 0x14 (20 bytes)
#pragma pack(push, 1)
typedef struct SRayQueryState {
    int ray_type; // 0x0
    int laser_type; // 0x4
    CColor3i laser_color; // 0x8
} SRayQueryState;
#pragma pack(pop)

