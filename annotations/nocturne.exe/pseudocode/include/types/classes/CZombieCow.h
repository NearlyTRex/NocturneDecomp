#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CZombieCow
// Ghidra size: 0xbd58 (48472 bytes)
#pragma pack(push, 1)
typedef struct CZombieCow {
    CEnemy base; // 0x0
    int bone_spine; // 0xbd24
    int bone_head; // 0xbd28
    uint sfx_handle; // 0xbd2c
    int part_indices[10]; // 0xbd30
} CZombieCow;
#pragma pack(pop)

