#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonGlobe.h"
#include "types/classes/CParticle.h"

// Structure: CFireball
// Ghidra size: 0x9c (156 bytes)
typedef struct CFireball {
    CParticle base; // 0x0
    int timer; // 0x38
    int fade_rate; // 0x3c
    int first_update_flag; // 0x40
    int lighting_active; // 0x44
    int spawn_timer; // 0x48
    int rotation_angle1; // 0x4c
    int rotation_angle2; // 0x50
    int padding; // 0x54
    uint sfx_handle; // 0x58
    CDemonGlobe light_globe; // 0x5c
} CFireball;

