#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CZombieCow
// Ghidra size: 0xbef0 (48880 bytes)
#pragma pack(push, 1)
typedef struct CZombieCow {
    CEnemy base; // 0x0
    int bone_spine; // 0xbebc
    int bone_head; // 0xbec0
    uint sfx_handle; // 0xbec4
    int part_indices[10]; // 0xbec8
} CZombieCow;
#pragma pack(pop)

