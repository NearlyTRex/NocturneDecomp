#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CHotDemon
// Ghidra size: 0xbd58 (48472 bytes)
#pragma pack(push, 1)
typedef struct CHotDemon {
    CEnemy base; // 0x0
    uint sfx_handles[2]; // 0xbd24
    char dead[44]; // 0xbd2c
} CHotDemon;
#pragma pack(pop)

