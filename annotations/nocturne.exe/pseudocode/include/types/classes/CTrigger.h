#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CVector3f.h"
#include "types/enums/ETriggerEventType.h"

// Structure: CTrigger
// Ghidra size: 0x368 (872 bytes)
#pragma pack(push, 1)
typedef struct CTrigger {
    CDemonActor base; // 0x0
    float test_radius; // 0x150
    ETriggerEventType event_type; // 0x154
    CVector3f trigger_size; // 0x158
    int trigger_state; // 0x164
    int shape; // 0x168
    int hero_triggers_me; // 0x16c
    char actor_name[80]; // 0x170
    char actor_type[80]; // 0x1c0
    int pressure_plate; // 0x210
    float light_min; // 0x214
    float light_max; // 0x218
    char on_event[100]; // 0x21c
    char off_event[100]; // 0x280
    int prev_triggered; // 0x2e4
    int event_flag; // 0x2e8
    int laser_type; // 0x2ec
    float hit_points; // 0x2f0
    struct CDemonActor* triggering_actor; // 0x2f4
    int auto_aim_at_me; // 0x2f8
    char damage_actor_wildcard_name[100]; // 0x2fc
    struct CDemonActor* cached_actor; // 0x360
    float damage_cooldown; // 0x364
} CTrigger;
#pragma pack(pop)

