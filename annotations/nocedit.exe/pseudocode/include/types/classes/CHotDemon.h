#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CHotDemon
// Ghidra size: 0xbef0 (48880 bytes)
typedef struct CHotDemon {
    CEnemy base; // 0x0
    uint attack_sfx_handle; // 0xbebc
    uint pain_sfx_handle; // 0xbec0
    char unk[44]; // 0xbec4
} CHotDemon;

