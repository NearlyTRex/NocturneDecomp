#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CMatrix3x3f.h"
#include "types/classes/CVector3f.h"

// Structure: SRoom
// Ghidra size: 0x44 (68 bytes)
typedef struct SRoom {
    CVector3f position; // 0x0
    CVector3f extents; // 0xc
    CMatrix3x3f rotation_matrix; // 0x18
    int reserved; // 0x3c
    int reverb_preset; // 0x40
} SRoom;

