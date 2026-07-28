#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CArmour
// Ghidra size: 0xbd88 (48520 bytes)
#pragma pack(push, 1)
typedef struct CArmour {
    CEnemy base; // 0x0
    char fall_apart_event[100]; // 0xbd24
} CArmour;
#pragma pack(pop)

