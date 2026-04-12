#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CLarva
// Ghidra size: 0xbec8 (48840 bytes)
#pragma pack(push, 1)
typedef struct CLarva {
    CEnemy base; // 0x0
    int dead; // 0xbebc
    uint sfx_handles[2]; // 0xbec0
} CLarva;
#pragma pack(pop)

