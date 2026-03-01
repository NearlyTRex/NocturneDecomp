#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CWeapon.h"

// Structure: CMelee
// Ghidra size: 0x6cc (1740 bytes)
typedef struct CMelee {
    CWeapon base; // 0x0
    int allowed_attack_types; // 0x578
    float strength_lo; // 0x57c
    float strength_hi; // 0x580
    float dismember_prob; // 0x584
    int can_go_in_inventory; // 0x588
    int blood_gore_type; // 0x58c
    int blood_spurt_count; // 0x590
    float blood_spurt_timer; // 0x594
    float blood_spurt_interval; // 0x598
    int ammo_type; // 0x59c
    char thrust_hit_character_sound[100]; // 0x5a0
    char swing_hit_character_sound[100]; // 0x604
    char hit_other_sound[100]; // 0x668
} CMelee;

