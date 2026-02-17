#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CHero.h"
#include "types/classes/CVector3f.h"

// Structure: CBaron
// Ghidra size: 0x1fcd4 (130260 bytes)
typedef struct CBaron {
    CHero base; // 0x0
    char summon_event[100]; // 0x1fbd4
    char go_away_event[100]; // 0x1fc38
    CVector3f head_rotation; // 0x1fc9c
    float head_blend_weight; // 0x1fca8
    struct CDemonActor* target_actor; // 0x1fcac
    int new_attack; // 0x1fcb0
    CVector3f left_hand_pos; // 0x1fcb4
    CVector3f right_hand_pos; // 0x1fcc0
    int summoned; // 0x1fccc
    int shell_visible; // 0x1fcd0
} CBaron;

