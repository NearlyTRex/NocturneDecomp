#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CVector3f.h"

// Structure: CGhoul
// Ghidra size: 0xbf38 (48952 bytes)
typedef struct CGhoul {
    CEnemy base; // 0x0
    uint sfx_handle; // 0xbebc
    int burp_timer; // 0xbec0
    int spasm_timer; // 0xbec4
    int arise_timer; // 0xbec8
    int pending_eat_state; // 0xbecc
    float flinch_blend_weight; // 0xbed0
    int flinch_motion_index; // 0xbed4
    int lives_left; // 0xbed8
    int spasm_count; // 0xbedc
    int part_indices[11]; // 0xbee0
    uint sfx_handles[3]; // 0xbf0c
    float stun_timer; // 0xbf18
    struct CDemonActor* dark_waypoint; // 0xbf1c
    float heal_timer; // 0xbf20
    int is_berserk; // 0xbf24
    float stuck_timer; // 0xbf28
    CVector3f prev_position; // 0xbf2c
} CGhoul;

