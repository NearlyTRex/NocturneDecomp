#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: SBat
// Ghidra size: 0x18 (24 bytes)
#pragma pack(push, 1)
typedef struct SBat {
    int course_index; // 0x0
    float course_position; // 0x4
    float animation_frame; // 0x8
    CVector3f random_offset; // 0xc
} SBat;
#pragma pack(pop)

