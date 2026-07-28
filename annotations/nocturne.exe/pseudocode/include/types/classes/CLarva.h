#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CLarva
// Ghidra size: 0xbd30 (48432 bytes)
#pragma pack(push, 1)
typedef struct CLarva {
    CEnemy base; // 0x0
    int dead; // 0xbd24
    uint sfx_handles[2]; // 0xbd28
} CLarva;
#pragma pack(pop)

