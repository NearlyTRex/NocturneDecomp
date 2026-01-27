#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CVampireBoss
// Ghidra size: 0xce920 (846112 bytes)
typedef struct CVampireBoss {
    CEnemy base; // 0x0
    char unk1[794124]; // 0xbeb4
    int form; // 0xcdcc0
    char unk2[3116]; // 0xcdcc4
    float morph_t; // 0xce8f0
    char unk3[44]; // 0xce8f4
} CVampireBoss;

