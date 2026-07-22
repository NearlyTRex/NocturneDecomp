#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCloth.h"
#include "types/classes/CHero.h"

// Structure: CGabriella
// Ghidra size: 0x5fa88 (391816 bytes)
#pragma pack(push, 1)
typedef struct CGabriella {
    CHero base; // 0x0
    int weapon_state_flags; // 0x1fbd4
    float holster_blend; // 0x1fbd8
    float draw_blend; // 0x1fbdc
    float aim_blend; // 0x1fbe0
    float light_aim_blend; // 0x1fbe4
    float flashlight_angle; // 0x1fbe8
    int fire_state; // 0x1fbec
    float left_clavicle_blend; // 0x1fbf0
    float right_clavicle_blend; // 0x1fbf4
    struct CDemonActor* aim_target; // 0x1fbf8
    float target_aim_pitch; // 0x1fbfc
    float target_aim_yaw; // 0x1fc00
    float aim_pitch; // 0x1fc04
    float aim_yaw; // 0x1fc08
    float fire_cooldown_timer; // 0x1fc0c
    float aim_weight; // 0x1fc10
    CCloth coat_cloth; // 0x1fc14
    float dynamite_charge_power; // 0x5fa84
} CGabriella;
#pragma pack(pop)

