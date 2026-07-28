#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CDrone
// Ghidra size: 0xbd3c (48444 bytes)
#pragma pack(push, 1)
typedef struct CDrone {
    CEnemy base; // 0x0
    int dead; // 0xbd24
    int bone_indices[2]; // 0xbd28
    uint sfx_handles[3]; // 0xbd30
} CDrone;
#pragma pack(pop)

