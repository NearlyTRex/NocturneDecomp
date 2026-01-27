#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CBiggs
// Ghidra size: 0xccd0 (52432 bytes)
typedef struct CBiggs {
    CEnemy base; // 0x0
    char unk1[388]; // 0xbeb4
    int morphing; // 0xc038
    float morph_timer; // 0xc03c
    char unk2[3216]; // 0xc040
} CBiggs;

