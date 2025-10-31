#pragma once

// Structure: CMelee
// Ghidra size: 0x6cc (1740 bytes)
typedef struct CMelee {
    CWeapon base_weapon; // 0x0
    int allowed_attack_types; // 0x578
    float strength_lo; // 0x57c
    float strength_hi; // 0x580
    float dismember_prob; // 0x584
    int can_go_in_inventory; // 0x588
    char field_1420[16]; // 0x58c
    int ammo_type; // 0x59c
    char* thrust_hit_character_sound; // 0x5a0
    char field_1444[96]; // 0x5a4
    char* swing_hit_character_sound; // 0x604
    char field_1544[96]; // 0x608
    char* hit_other_sound; // 0x668
    char field_1644[96]; // 0x66c
} CMelee;

