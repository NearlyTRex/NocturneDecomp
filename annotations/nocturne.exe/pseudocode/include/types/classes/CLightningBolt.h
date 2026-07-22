#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: CLightningBolt
// Ghidra size: 0x2c (44 bytes)
#pragma pack(push, 1)
typedef struct CLightningBolt {
    int mode; // 0x0
    CVector3f start_position; // 0x4
    float start_width; // 0x10
    float lifetime; // 0x14
    float end_width; // 0x18
    CVector3f end_position; // 0x1c
    float end_spread; // 0x28
} CLightningBolt;
#pragma pack(pop)

