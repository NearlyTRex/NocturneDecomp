#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CZombieDog
// Ghidra size: 0xbec8 (48840 bytes)
typedef struct CZombieDog {
    CEnemy base; // 0x0
    int bone_index_spine; // 0xbebc
    int bone_index_head; // 0xbec0
    uint sfx_handle; // 0xbec4
} CZombieDog;

