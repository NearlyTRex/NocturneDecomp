#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CImp
// Ghidra size: 0xbd5c (48476 bytes)
#pragma pack(push, 1)
typedef struct CImp {
    CEnemy base; // 0x0
    uint sfx_handles[2]; // 0xbd24
    float laugh_timer; // 0xbd2c
    int part_indices[11]; // 0xbd30
} CImp;
#pragma pack(pop)

