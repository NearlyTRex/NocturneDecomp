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
    int part_head; // 0xbec8
    int part_neck; // 0xbecc
    int part_l_front_leg; // 0xbed0
    int part_r_front_leg; // 0xbed4
    int part_r_back_leg; // 0xbed8
    int part_l_back_leg; // 0xbedc
    int part_torso; // 0xbee0
    int part_udder; // 0xbee4
    int part_back; // 0xbee8
    int part_tail; // 0xbeec
} CZombieCow;

