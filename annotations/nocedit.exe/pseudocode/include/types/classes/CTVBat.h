#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CVector3f.h"

// Structure: CTVBat
// Ghidra size: 0xc0f4 (49396 bytes)
typedef struct CTVBat {
    CEnemy base_enemy; // 0x0
    char field_48820[392]; // 0xbeb4
    float speed; // 0xc03c
    char field_49216[4]; // 0xc040
    CVector3f home_pos; // 0xc044
    float max_distance; // 0xc050
    float max_height; // 0xc054
    float rot_speed; // 0xc058
    float move_speed; // 0xc05c
    char field_49248[4]; // 0xc060
    int follow_orders; // 0xc064
    char field_49256[16]; // 0xc068
    int state; // 0xc078
    char field_49276[100]; // 0xc07c
    float periodic_sound_timer_min; // 0xc0e0
    float periodic_sound_timer_max; // 0xc0e4
    char field_49384[12]; // 0xc0e8
} CTVBat;

