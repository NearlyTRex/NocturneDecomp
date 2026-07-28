#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CVector3f.h"

// Structure: CBatman
// Ghidra size: 0xbde0 (48608 bytes)
#pragma pack(push, 1)
typedef struct CBatman {
    CEnemy base; // 0x0
    char fall_event[100]; // 0xbd24
    int part_indices[14]; // 0xbd88
    int mist_state; // 0xbdc0
    float vanish_timer; // 0xbdc4
    CVector3f new_pos; // 0xbdc8
    uint sfx_handles[3]; // 0xbdd4
} CBatman;
#pragma pack(pop)

