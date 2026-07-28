#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "system/winnt.h"
#include "types/classes/CEnemy.h"

// Structure: CMobster
// Ghidra size: 0xbdfc (48636 bytes)
#pragma pack(push, 1)
typedef struct CMobster {
    CEnemy base; // 0x0
    int ai_idle_counter; // 0xbd24
    float idle_timer; // 0xbd28
    float weapon_approach_timer; // 0xbd2c
    struct CDemonActor* target_weapon; // 0xbd30
    int weapon_search_count; // 0xbd34
    _BIT_INTEGER32 sound_variant; // 0xbd38
    float taunt_timer; // 0xbd3c
    int post_mode; // 0xbd40
    struct CDemonActor* our_post; // 0xbd44
    struct CDemonActor* vehicle; // 0xbd48
    int side_of_car; // 0xbd4c
    int hold_pos_flag; // 0xbd50
    char hold_pos_condition[100]; // 0xbd54
    uint sfx_handles[2]; // 0xbdb8
    int death_sound_played; // 0xbdc0
    uint sfx_handle; // 0xbdc4
    int part_indices[11]; // 0xbdc8
    float firing_blend; // 0xbdf4
    float firing_cooldown; // 0xbdf8
} CMobster;
#pragma pack(pop)

