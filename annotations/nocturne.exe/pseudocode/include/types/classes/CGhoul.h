#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CVector3f.h"

// Structure: CGhoul
// Ghidra size: 0xbda0 (48544 bytes)
#pragma pack(push, 1)
typedef struct CGhoul {
    CEnemy base; // 0x0
    uint sfx_handle; // 0xbd24
    int burp_timer; // 0xbd28
    int spasm_timer; // 0xbd2c
    int arise_timer; // 0xbd30
    int pending_eat_state; // 0xbd34
    float flinch_blend_weight; // 0xbd38
    int flinch_motion_index; // 0xbd3c
    int lives_left; // 0xbd40
    int spasm_count; // 0xbd44
    int part_indices[11]; // 0xbd48
    uint sfx_handles[3]; // 0xbd74
    float stun_timer; // 0xbd80
    struct CDemonActor* dark_waypoint; // 0xbd84
    float heal_timer; // 0xbd88
    int is_berserk; // 0xbd8c
    float stuck_timer; // 0xbd90
    CVector3f prev_position; // 0xbd94
} CGhoul;
#pragma pack(pop)

