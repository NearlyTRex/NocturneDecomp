#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CZombie
// Ghidra size: 0xbfac (49068 bytes)
typedef struct CZombie {
    CEnemy base; // 0x0
    char unk1[140]; // 0xbeb4
    int is_miner_zombie; // 0xbf40
    int always_chase_fast; // 0xbf44
    char unk2[100]; // 0xbf48
} CZombie;

