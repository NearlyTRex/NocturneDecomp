#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CBiggs
// Ghidra size: 0xccd0 (52432 bytes)
typedef struct CBiggs {
    CEnemy base; // 0x0
    CKeyFramedModelInstance model; // 0xbebc
    int morphing; // 0xc038
    float morph_timer; // 0xc03c
    char unk3[3116]; // 0xc040
    char morph_event[100]; // 0xcc6c
} CBiggs;

