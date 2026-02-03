#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CSmiley
// Ghidra size: 0xbf00 (48896 bytes)
typedef struct CSmiley {
    CEnemy base; // 0x0
    char unk1[12]; // 0xbeb4
    float guard_distance; // 0xbec0
    char unk2[60]; // 0xbec4
} CSmiley;

