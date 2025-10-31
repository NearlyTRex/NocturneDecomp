#pragma once

// Structure: CAmmoBox
// Ghidra size: 0x4a4 (1188 bytes)
typedef struct CAmmoBox {
    CDemonActor base_actor; // 0x0
    char model_name[380]; // 0x158
    char weapon_class_name[64]; // 0x2d4
    int ammo_count; // 0x314
    int ammo_type; // 0x318
    float field_796; // 0x31c
    char* item; // 0x320
    int has_collision; // 0x324
    char open_sound[380]; // 0x328
} CAmmoBox;

