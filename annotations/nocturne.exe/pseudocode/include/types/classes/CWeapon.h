#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CBox.h"
#include "types/classes/CColor3i.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CWeapon
// Ghidra size: 0x570 (1392 bytes)
#pragma pack(push, 1)
typedef struct CWeapon {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x150
    int weapon_state; // 0x2cc
    int is_spread_weapon; // 0x2d0
    int fire_mode; // 0x2d4
    int weapon_type; // 0x2d8
    int can_penetrate; // 0x2dc
    float bolt_velocity; // 0x2e0
    int fire_cooldown; // 0x2e4
    int can_attach_light; // 0x2e8
    CColor3i muzzle_flash_color; // 0x2ec
    float fire_cooldown_timer; // 0x2f8
    struct CDemonActor* carried_by_actor; // 0x2fc
    CBox physics_box; // 0x300
    float ground_height; // 0x558
    float weight; // 0x55c
    int ammo_count; // 0x560
    int ammo_type; // 0x564
    float sim_timer; // 0x568
    int is_rendered; // 0x56c
} CWeapon;
#pragma pack(pop)

