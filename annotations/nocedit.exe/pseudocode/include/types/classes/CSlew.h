#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"
#include "types/unions/UOrientationVector.h"

// Structure: CSlew
// Ghidra size: 0x1c (28 bytes)
#pragma pack(push, 1)
typedef struct CSlew {
    CVector3f position; // 0x0
    UOrientationVector orientation; // 0xc
    float slew_rate; // 0x18
} CSlew;
#pragma pack(pop)

