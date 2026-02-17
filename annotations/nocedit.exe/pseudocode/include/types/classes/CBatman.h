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
    int part_head; // 0xbf20
    int part_torso; // 0xbf24
    int part_larm; // 0xbf28
    int part_lforearm; // 0xbf2c
    int part_rarm; // 0xbf30
    int part_rforearm; // 0xbf34
    int part_pelvis; // 0xbf38
    int part_tail; // 0xbf3c
    int part_lthigh; // 0xbf40
    int part_lshin; // 0xbf44
    int part_rthigh; // 0xbf48
    int part_rshin; // 0xbf4c
    int part_lfoot; // 0xbf50
    int part_rfoot; // 0xbf54
    int mist_state; // 0xbf58
    float vanish_timer; // 0xbf5c
    CVector3f new_pos; // 0xbf60
    uint alert_sound_handle; // 0xbf6c
    uint voice_sound_handle; // 0xbf70
    uint attack_sound_handle; // 0xbf74
} CBatman;

