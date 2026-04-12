#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CImp
// Ghidra size: 0xbef4 (48884 bytes)
#pragma pack(push, 1)
typedef struct CImp {
    CEnemy base; // 0x0
    uint sfx_handles[2]; // 0xbebc
    float laugh_timer; // 0xbec4
    int part_indices[11]; // 0xbec8
} CImp;
#pragma pack(pop)

