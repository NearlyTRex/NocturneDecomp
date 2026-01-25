#pragma once

// Forward declarations
struct CParticle_vtable;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: CParticle
// Ghidra size: 0x38 (56 bytes)
typedef struct CParticle {
    CVector3f position; // 0x0
    CVector3f velocity; // 0xc
    float lifetime_remaining; // 0x18
    float gravity_acceleration; // 0x1c
    int collision_flag; // 0x20
    CVector3f previous_position; // 0x24
    int collision_result; // 0x30
    struct CParticle_vtable* vtable; // 0x34
} CParticle;

