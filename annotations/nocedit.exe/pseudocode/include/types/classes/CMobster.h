#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CMobster
// Ghidra size: 0xbf94 (49044 bytes)
typedef struct CMobster {
    CEnemy base; // 0x0
    char unk1[36]; // 0xbeb4
    int post_mode; // 0xbed8
    char unk2[8]; // 0xbedc
    int side_of_car; // 0xbee4
    int hold_pos_flag; // 0xbee8
    char unk3[168]; // 0xbeec
} CMobster;

