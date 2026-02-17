#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CKeyFramedModelInstance.h"
#include "types/classes/CVector3f.h"

// Structure: CTVBat
// Ghidra size: 0xc0f4 (49396 bytes)
typedef struct CTVBat {
    CEnemy base; // 0x0
    float anim_frame; // 0xbebc
    CKeyFramedModelInstance model; // 0xbec0
    float speed; // 0xc03c
    float anim_rate; // 0xc040
    CVector3f home_pos; // 0xc044
    float max_distance; // 0xc050
    float max_height; // 0xc054
    float rot_speed; // 0xc058
    float move_speed; // 0xc05c
    float height_offset; // 0xc060
    int follow_orders; // 0xc064
    float attack_timer; // 0xc068
    CVector3f velocity; // 0xc06c
    int state; // 0xc078
    char periodic_sound[100]; // 0xc07c
    float periodic_sound_timer_min; // 0xc0e0
    float periodic_sound_timer_max; // 0xc0e4
    uint periodic_sound_handle; // 0xc0e8
    float periodic_sound_timer; // 0xc0ec
    struct CDemonActor* boss_actor; // 0xc0f0
} CTVBat;

