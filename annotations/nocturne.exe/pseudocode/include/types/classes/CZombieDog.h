#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CZombieDog
// Ghidra size: 0xbd30 (48432 bytes)
#pragma pack(push, 1)
typedef struct CZombieDog {
    CEnemy base; // 0x0
    int bone_indices[2]; // 0xbd24
    uint sfx_handle; // 0xbd2c
} CZombieDog;
#pragma pack(pop)

