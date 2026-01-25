#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDeformableModelInstance.h"
#include "types/classes/CDemonActor.h"
#include "types/structs/SCarryHand.h"

// Structure: CCharacter
// Ghidra size: 0xbe24 (48676 bytes)
typedef struct CCharacter {
    CDemonActor base_actor; // 0x0
    CDeformableModelInstance model; // 0x158
    char field_9228[48]; // 0x240c
    float hit_points; // 0x243c
    float max_hit_points; // 0x2440
    int health_bar_mode; // 0x2444
    char descriptive_name[100]; // 0x2448
    SCarryHand carry_hands[2]; // 0x24ac
    char talk_to_me_event[100]; // 0x2534
    struct CDemonActor* grabbed_by; // 0x2598
    int grabbed_type; // 0x259c
    char field_9632[124]; // 0x25a0
    float size_scale; // 0x261c
    char field_9760[1140]; // 0x2620
    int cloth_count; // 0x2a94
    char cloth_data[37772]; // 0x2a98
} CCharacter;

