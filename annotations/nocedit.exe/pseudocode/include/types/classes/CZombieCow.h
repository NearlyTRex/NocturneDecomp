#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CZombieCow
// Ghidra size: 0xbef0 (48880 bytes)
typedef struct CZombieCow {
    CEnemy base; // 0x0
    int bone_spine; // 0xbebc
    int bone_head; // 0xbec0
    uint sfx_handle; // 0xbec4
    int part_index_head; // 0xbec8
    int part_index_neck; // 0xbecc
    int part_index_lfrontleg; // 0xbed0
    int part_index_rfrontleg; // 0xbed4
    int part_index_rbackleg; // 0xbed8
    int part_index_lbackleg; // 0xbedc
    int part_index_torso; // 0xbee0
    int part_index_udder; // 0xbee4
    int part_index_back; // 0xbee8
    int part_index_tail; // 0xbeec
} CZombieCow;

