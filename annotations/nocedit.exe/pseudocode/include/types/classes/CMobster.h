#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "system/winnt.h"
#include "types/classes/CEnemy.h"

// Structure: CMobster
// Ghidra size: 0xbf94 (49044 bytes)
typedef struct CMobster {
    CEnemy base; // 0x0
    int ai_idle_counter; // 0xbebc
    float idle_timer; // 0xbec0
    float weapon_approach_timer; // 0xbec4
    struct CDemonActor* target_weapon; // 0xbec8
    int weapon_search_count; // 0xbecc
    _BIT_INTEGER32 sound_variant; // 0xbed0
    float taunt_timer; // 0xbed4
    int post_mode; // 0xbed8
    struct CDemonActor* our_post; // 0xbedc
    struct CDemonActor* vehicle; // 0xbee0
    int side_of_car; // 0xbee4
    int hold_pos_flag; // 0xbee8
    char hold_pos_condition[100]; // 0xbeec
    int unk1; // 0xbf50
    uint sfx_handle_1; // 0xbf54
    int unk2; // 0xbf58
    uint sfx_handle_2; // 0xbf5c
    int part_larm; // 0xbf60
    int part_l4arm; // 0xbf64
    int part_rarm; // 0xbf68
    int part_r4arm; // 0xbf6c
    int part_rthigh; // 0xbf70
    int part_rshin; // 0xbf74
    int part_lthigh; // 0xbf78
    int part_lshin; // 0xbf7c
    int part_waist; // 0xbf80
    int part_torso; // 0xbf84
    int part_head; // 0xbf88
    float firing_blend; // 0xbf8c
    float firing_cooldown; // 0xbf90
} CMobster;

