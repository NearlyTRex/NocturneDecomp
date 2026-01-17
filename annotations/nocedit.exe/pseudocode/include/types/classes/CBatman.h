#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CVector3f.h"

// Structure: CBatman
// Ghidra size: 0xbf78 (49016 bytes)
typedef struct CBatman {
    CEnemy base_enemy; // 0x0
    char field_48820[164]; // 0xbeb4
    int mist_state; // 0xbf58
    float vanish_timer; // 0xbf5c
    CVector3f new_pos; // 0xbf60
    char field_49004[12]; // 0xbf6c
} CBatman;

