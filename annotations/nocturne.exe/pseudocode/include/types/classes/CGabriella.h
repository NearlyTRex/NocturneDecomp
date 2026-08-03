#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCloth.h"
#include "types/classes/CHero.h"

// Structure: CGabriella
// Ghidra size: 0x5a5b0 (370096 bytes)
#pragma pack(push, 1)
typedef struct CGabriella {
    CHero base; // 0x0
    int weapon_state_flags; // 0x1fa3c
    float holster_blend; // 0x1fa40
    float draw_blend; // 0x1fa44
    float aim_blend; // 0x1fa48
    float light_aim_blend; // 0x1fa4c
    float flashlight_angle; // 0x1fa50
    int fire_state; // 0x1fa54
    float left_clavicle_blend; // 0x1fa58
    float right_clavicle_blend; // 0x1fa5c
    struct CDemonActor* aim_target; // 0x1fa60
    float target_aim_pitch; // 0x1fa64
    float target_aim_yaw; // 0x1fa68
    float aim_pitch; // 0x1fa6c
    float aim_yaw; // 0x1fa70
    float fire_cooldown_timer; // 0x1fa74
    float aim_weight; // 0x1fa78
    CCloth coat_cloth; // 0x1fa7c
    float dynamite_charge_power; // 0x5a5ac
} CGabriella;
#pragma pack(pop)

