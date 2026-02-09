#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CMobster
// Ghidra size: 0xbf94 (49044 bytes)
typedef struct CMobster {
    CEnemy base; // 0x0
    char unk1[28]; // 0xbebc
    int post_mode; // 0xbed8
    struct CDemonActor* our_post; // 0xbedc
    struct CDemonActor* vehicle; // 0xbee0
    int side_of_car; // 0xbee4
    int hold_pos_flag; // 0xbee8
    char hold_pos_condition[100]; // 0xbeec
    char unk2[68]; // 0xbf50
} CMobster;

