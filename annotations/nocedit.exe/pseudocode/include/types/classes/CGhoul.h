#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CGhoul
// Ghidra size: 0xbf38 (48952 bytes)
typedef struct CGhoul {
    CEnemy base; // 0x0
    char unk1[12]; // 0xbebc
    int arise_timer; // 0xbec8
    char unk2[12]; // 0xbecc
    int lives_left; // 0xbed8
    int spasm_count; // 0xbedc
    char unk3[88]; // 0xbee0
} CGhoul;

