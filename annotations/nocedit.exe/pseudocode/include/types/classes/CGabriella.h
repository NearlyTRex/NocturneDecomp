#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCloth.h"
#include "types/classes/CHero.h"

// Structure: CGabriella
// Ghidra size: 0x5fa88 (391816 bytes)
typedef struct CGabriella {
    CHero base; // 0x0
    int weapon_state_flags; // 0x1fbd4
    float holster_blend; // 0x1fbd8
    float draw_blend; // 0x1fbdc
    float aim_blend; // 0x1fbe0
    float light_aim_blend; // 0x1fbe4
    float flashlight_angle; // 0x1fbe8
    int fire_state; // 0x1fbec
    char unk1[20]; // 0x1fbf0
    float dynamite_throw_angle; // 0x1fc04
    int unk2; // 0x1fc08
    float fire_cooldown_timer; // 0x1fc0c
    int unk3; // 0x1fc10
    CCloth coat; // 0x1fc14
    char unk4[12]; // 0x5fa78
    float dynamite_charge_power; // 0x5fa84
} CGabriella;

