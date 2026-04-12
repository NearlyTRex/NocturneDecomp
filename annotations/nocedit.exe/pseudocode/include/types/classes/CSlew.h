#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: CSlew
// Ghidra size: 0x1c (28 bytes)
#pragma pack(push, 1)
typedef struct CSlew {
    CVector3f position; // 0x0
    float pitch; // 0xc
    float yaw; // 0x10
    float roll; // 0x14
    float slew_rate; // 0x18
} CSlew;
#pragma pack(pop)

