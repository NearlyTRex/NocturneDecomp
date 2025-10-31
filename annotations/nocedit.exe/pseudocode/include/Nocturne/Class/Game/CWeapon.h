#pragma once

// Structure: CWeapon
// Ghidra size: 0x578 (1400 bytes)
typedef struct CWeapon {
    CDemonActor base_actor; // 0x0
    CKeyFramedModelInstance* model_instance; // 0x158
    char field_348[376]; // 0x15c
    int weapon_state; // 0x2d4
    char field_728[24]; // 0x2d8
    int can_attach_light; // 0x2f0
    char field_756[16]; // 0x2f4
    char carried_by_actor; // 0x304
    char field_773[611]; // 0x305
    int ammo_count; // 0x568
    int ammo_type; // 0x56c
    float sim_timer; // 0x570
    int field_1396; // 0x574
} CWeapon;

