#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CBride
// Ghidra size: 0xbeec (48876 bytes)
typedef struct CBride {
    CEnemy base; // 0x0
    int part_index_lshoulder; // 0xbebc
    int part_index_lforearm; // 0xbec0
    int part_index_rshoulder; // 0xbec4
    int part_index_rforearm; // 0xbec8
    int part_index_lshin; // 0xbecc
    int part_index_rshin; // 0xbed0
    int part_index_torso; // 0xbed4
    int part_index_lowerbody; // 0xbed8
    int part_index_head; // 0xbedc
    float action_timer; // 0xbee0
    uint sfx_handle; // 0xbee4
    uint attack_sfx_handle; // 0xbee8
} CBride;

