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
    uint sfx_handles[2]; // 0xbf50
    int death_sound_played; // 0xbf58
    uint sfx_handle; // 0xbf5c
    int part_indices[11]; // 0xbf60
    float firing_blend; // 0xbf8c
    float firing_cooldown; // 0xbf90
} CMobster;

