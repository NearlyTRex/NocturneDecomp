#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CMimic
// Ghidra size: 0x4ca58 (313944 bytes)
typedef struct CMimic {
    CEnemy base; // 0x0
    char unk1[261952]; // 0xbeb4
    int attack_mode; // 0x4bdf4
    char unk2[3168]; // 0x4bdf8
} CMimic;

