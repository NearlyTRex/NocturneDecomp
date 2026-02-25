#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CZombieDog
// Ghidra size: 0xbec8 (48840 bytes)
typedef struct CZombieDog {
    CEnemy base; // 0x0
    int bone_indices[2]; // 0xbebc
    uint sfx_handle; // 0xbec4
} CZombieDog;

