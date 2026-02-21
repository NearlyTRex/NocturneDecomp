#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CDrone
// Ghidra size: 0xbed4 (48852 bytes)
typedef struct CDrone {
    CEnemy base; // 0x0
    int unk; // 0xbebc
    int bone_index_attack1; // 0xbec0
    int bone_index_attack2; // 0xbec4
    uint hurt_sfx_handle; // 0xbec8
    uint move_sfx_handle; // 0xbecc
    uint attack_sfx_handle; // 0xbed0
} CDrone;

