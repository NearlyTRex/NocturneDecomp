#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CWeapon.h"

// Structure: CTurret
// Ghidra size: 0x8bc (2236 bytes)
typedef struct CTurret {
    CWeapon base; // 0x0
    char unk1[392]; // 0x578
    int state; // 0x700
    char unk2[100]; // 0x704
    float charge_time; // 0x768
    float patrol_time; // 0x76c
    float power_down_time; // 0x770
    float fire_delay_time; // 0x774
    float rotate_deg_per_sec; // 0x778
    float timer; // 0x77c
    char unk3[216]; // 0x780
    int can_manual_aim; // 0x858
    char unk4[96]; // 0x85c
} CTurret;

