#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBox.h"
#include "types/classes/CColor3i.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CWeapon
// Ghidra size: 0x578 (1400 bytes)
typedef struct CWeapon {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    int weapon_state; // 0x2d4
    int is_spread_weapon; // 0x2d8
    int fire_mode; // 0x2dc
    int weapon_type; // 0x2e0
    int can_penetrate; // 0x2e4
    float bolt_velocity; // 0x2e8
    float fire_cooldown; // 0x2ec
    int can_attach_light; // 0x2f0
    CColor3i muzzle_flash_color; // 0x2f4
    float fire_cooldown_timer; // 0x300
    struct CDemonActor* carried_by_actor; // 0x304
    CBox physics_box; // 0x308
    float ground_height; // 0x560
    float weight; // 0x564
    int ammo_count; // 0x568
    int ammo_type; // 0x56c
    float sim_timer; // 0x570
    int is_rendered; // 0x574
} CWeapon;

