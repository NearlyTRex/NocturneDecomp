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
// Ghidra size: 0x8b4 (2228 bytes)
#pragma pack(push, 1)
typedef struct CTurret {
    CWeapon base; // 0x0
    UOrientationVector home_orient; // 0x570
    CKeyFramedModelInstance model; // 0x57c
    ETurretState state; // 0x6f8
    char activate_event[100]; // 0x6fc
    float charge_time; // 0x760
    float patrol_time; // 0x764
    float power_down_time; // 0x768
    float fire_delay_time; // 0x76c
    float rotate_deg_per_sec; // 0x770
    float timer; // 0x774
    struct CDemonActor* guard_zone_box_trigger; // 0x778
    char allowed_victim_types[200]; // 0x77c
    CVector3f patrol_target; // 0x844
    int can_manual_aim; // 0x850
    struct CDemonActor* user; // 0x854
    CVector3f barrel_tip_pos; // 0x858
    float fire_sound_timer; // 0x864
    char dead[64]; // 0x868
    int fire_sound_frames; // 0x8a8
    uint sfx_handles[2]; // 0x8ac
} CTurret;
#pragma pack(pop)

