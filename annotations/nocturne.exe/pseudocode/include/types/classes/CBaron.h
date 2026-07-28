#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CHero.h"
#include "types/classes/CVector3f.h"

// Structure: CBaron
// Ghidra size: 0x1fb3c (129852 bytes)
#pragma pack(push, 1)
typedef struct CBaron {
    CHero base; // 0x0
    char summon_event[100]; // 0x1fa3c
    char go_away_event[100]; // 0x1faa0
    CVector3f head_rotation; // 0x1fb04
    float head_blend_weight; // 0x1fb10
    struct CDemonActor* target_actor; // 0x1fb14
    int new_attack; // 0x1fb18
    CVector3f left_hand_pos; // 0x1fb1c
    CVector3f right_hand_pos; // 0x1fb28
    int summoned; // 0x1fb34
    int shell_visible; // 0x1fb38
} CBaron;
#pragma pack(pop)

