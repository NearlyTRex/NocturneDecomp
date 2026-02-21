#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CImp
// Ghidra size: 0xbef4 (48884 bytes)
typedef struct CImp {
    CEnemy base; // 0x0
    uint sfx_handle; // 0xbebc
    uint hurt_sfx_handle; // 0xbec0
    float laugh_timer; // 0xbec4
    int part_index_larm; // 0xbec8
    int part_index_lforearm; // 0xbecc
    int part_index_rarm; // 0xbed0
    int part_index_rforearm; // 0xbed4
    int part_index_rthigh; // 0xbed8
    int part_index_rshin; // 0xbedc
    int part_index_lthigh; // 0xbee0
    int part_index_lshin; // 0xbee4
    int part_index_ass; // 0xbee8
    int part_index_torso; // 0xbeec
    int part_index_head; // 0xbef0
} CImp;

