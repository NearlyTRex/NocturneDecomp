#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"

// Structure: CBatCreature
// Ghidra size: 0xbf04 (48900 bytes)
typedef struct CBatCreature {
    CEnemy base; // 0x0
    int part_head; // 0xbebc
    int part_torso; // 0xbec0
    int part_pelvis; // 0xbec4
    int part_tail; // 0xbec8
    int part_lthigh; // 0xbecc
    int part_lshin; // 0xbed0
    int part_rthigh; // 0xbed4
    int part_rshin; // 0xbed8
    int part_larm; // 0xbedc
    int part_lforearm; // 0xbee0
    int part_rarm; // 0xbee4
    int part_rforearm; // 0xbee8
    int part_lwing; // 0xbeec
    int part_rwing; // 0xbef0
    uint alert_sound_handle; // 0xbef4
    uint voice_sound_handle; // 0xbef8
    uint attack_sound_handle; // 0xbefc
    int alert_played; // 0xbf00
} CBatCreature;

