#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CMatrix3x3f.h"
#include "types/classes/CVector3f.h"

// Structure: SReflector
// Ghidra size: 0x60 (96 bytes)
#pragma pack(push, 1)
typedef struct SReflector {
    CVector3f start_position; // 0x0
    CVector3f target_position; // 0xc
    float interp_factor; // 0x18
    CVector3f position; // 0x1c
    CVector3f rotation; // 0x28
    CMatrix3x3f rotation_matrix; // 0x34
    int dead; // 0x58
    int panel_index; // 0x5c
} SReflector;
#pragma pack(pop)

