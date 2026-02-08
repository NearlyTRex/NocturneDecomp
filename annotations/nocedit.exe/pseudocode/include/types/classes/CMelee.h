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
    char unk1[16]; // 0x58c
    int damage_type; // 0x59c
    char* thrust_hit_character_sound; // 0x5a0
    char unk2[96]; // 0x5a4
    char* swing_hit_character_sound; // 0x604
    char unk3[96]; // 0x608
    char* hit_other_sound; // 0x668
    char unk4[96]; // 0x66c
} CMelee;

