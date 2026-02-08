#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"

// Structure: CTrigger
// Ghidra size: 0x370 (880 bytes)
typedef struct CTrigger {
    CDemonActor base; // 0x0
    float test_radius; // 0x158
    int event_type; // 0x15c
    char unk1[16]; // 0x160
    int shape; // 0x170
    int hero_triggers_me; // 0x174
    char actor_name[80]; // 0x178
    char actor_type[80]; // 0x1c8
    int pressure_plate; // 0x218
    float light_min; // 0x21c
    float light_max; // 0x220
    char on_event[100]; // 0x224
    char off_event[100]; // 0x288
    char unk2[8]; // 0x2ec
    int laser_type; // 0x2f4
    float hit_points; // 0x2f8
    int unk3; // 0x2fc
    int auto_aim_at_me; // 0x300
    char damage_actor_name_wildcard_name[100]; // 0x304
    char unk4[8]; // 0x368
} CTrigger;

