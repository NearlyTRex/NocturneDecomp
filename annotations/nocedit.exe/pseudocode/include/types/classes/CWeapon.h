#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CKeyFramedModelInstance.h"

// Structure: CWeapon
// Ghidra size: 0x578 (1400 bytes)
typedef struct CWeapon {
    CDemonActor base; // 0x0
    CKeyFramedModelInstance model; // 0x158
    int weapon_state; // 0x2d4
    char unk1[16]; // 0x2d8
    float bolt_velocity; // 0x2e8
    float fire_cooldown; // 0x2ec
    int can_attach_light; // 0x2f0
    char unk2[16]; // 0x2f4
    struct CDemonActor* carried_by_actor; // 0x304
    char unk3[608]; // 0x308
    int ammo_count; // 0x568
    int ammo_type; // 0x56c
    float sim_timer; // 0x570
    int unk4; // 0x574
} CWeapon;

