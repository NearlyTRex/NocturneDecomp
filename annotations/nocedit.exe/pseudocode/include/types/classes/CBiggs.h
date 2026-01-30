#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CBiggs
// Ghidra size: 0xccd0 (52432 bytes)
typedef struct CBiggs {
    CEnemy base; // 0x0
    int unk1; // 0xbeb4
    int unk2; // 0xbeb8
    CKeyFramedModelInstance model; // 0xbebc
    int morphing; // 0xc038
    float morph_timer; // 0xc03c
    char unk3[3216]; // 0xc040
} CBiggs;

