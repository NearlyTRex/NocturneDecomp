#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CVector3f.h"

// Structure: CBatman
// Ghidra size: 0xbf78 (49016 bytes)
typedef struct CBatman {
    CEnemy base; // 0x0
    char fall_event[100]; // 0xbebc
    int part_indices[14]; // 0xbf20
    int mist_state; // 0xbf58
    float vanish_timer; // 0xbf5c
    CVector3f new_pos; // 0xbf60
    uint sfx_handles[3]; // 0xbf6c
} CBatman;

