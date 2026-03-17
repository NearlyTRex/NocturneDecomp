#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CWeapon.h"
#include "types/enums/ETurretState.h"
#include "types/unions/UOrientationVector.h"

// Structure: CTurret
// Ghidra size: 0x8bc (2236 bytes)
typedef struct CTurret {
    CWeapon base; // 0x0
    UOrientationVector home_orient; // 0x578
    CKeyFramedModelInstance model; // 0x584
    ETurretState state; // 0x700
    char activate_event[100]; // 0x704
    float charge_time; // 0x768
    float patrol_time; // 0x76c
    float power_down_time; // 0x770
    float fire_delay_time; // 0x774
    float rotate_deg_per_sec; // 0x778
    float timer; // 0x77c
    struct CDemonActor* guard_zone_box_trigger; // 0x780
    char allowed_victim_types[200]; // 0x784
    CVector3f patrol_target; // 0x84c
    int can_manual_aim; // 0x858
    struct CDemonActor* user; // 0x85c
    CVector3f barrel_tip_pos; // 0x860
    float fire_sound_timer; // 0x86c
    char dead[64]; // 0x870
    int fire_sound_frames; // 0x8b0
    uint sfx_handles[2]; // 0x8b4
} CTurret;

