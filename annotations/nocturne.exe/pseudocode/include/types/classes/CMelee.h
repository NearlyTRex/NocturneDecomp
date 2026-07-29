#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CWeapon.h"

// Structure: CMelee
// Ghidra size: 0x6c4 (1732 bytes)
#pragma pack(push, 1)
typedef struct CMelee {
    CWeapon base; // 0x0
    int allowed_attack_types; // 0x570
    float strength_lo; // 0x574
    float strength_hi; // 0x578
    float dismember_prob; // 0x57c
    int can_go_in_inventory; // 0x580
    int blood_gore_type; // 0x584
    int blood_spurt_count; // 0x588
    float blood_spurt_timer; // 0x58c
    float blood_spurt_interval; // 0x590
    int ammo_type; // 0x594
    char thrust_hit_character_sound[100]; // 0x598
    char swing_hit_character_sound[100]; // 0x5fc
    char hit_other_sound[100]; // 0x660
} CMelee;
#pragma pack(pop)

