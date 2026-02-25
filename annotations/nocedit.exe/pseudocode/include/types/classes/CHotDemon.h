#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CHotDemon
// Ghidra size: 0xbef0 (48880 bytes)
typedef struct CHotDemon {
    CEnemy base; // 0x0
    uint sfx_handles[2]; // 0xbebc
    char dead[44]; // 0xbec4
} CHotDemon;

