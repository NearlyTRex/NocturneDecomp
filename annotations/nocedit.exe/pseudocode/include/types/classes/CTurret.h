#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CWeapon.h"

// Structure: CTurret
// Ghidra size: 0x8bc (2236 bytes)
typedef struct CTurret {
    CWeapon base; // 0x0
    char unk1[12]; // 0x578
    CKeyFramedModelInstance model; // 0x584
    int state; // 0x700
    char activate_event[100]; // 0x704
    float charge_time; // 0x768
    float patrol_time; // 0x76c
    float power_down_time; // 0x770
    float fire_delay_time; // 0x774
    float rotate_deg_per_sec; // 0x778
    float timer; // 0x77c
    int unk3; // 0x780
    char allowed_victim_types[200]; // 0x784
    char unk4[12]; // 0x84c
    int can_manual_aim; // 0x858
    struct CDemonActor* user; // 0x85c
    char unk5[92]; // 0x860
} CTurret;

