#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CMatrix3x4f.h"

// Structure: CTentacle
// Ghidra size: 0xbf2c (48940 bytes)
typedef struct CTentacle {
    CEnemy base; // 0x0
    float wait_timer; // 0xbebc
    float chase_timer; // 0xbec0
    struct CDemonActor* grave_actor; // 0xbec4
    float target_blend; // 0xbec8
    CMatrix3x4f target_matrix; // 0xbecc
    CMatrix3x4f prev_target_matrix; // 0xbefc
} CTentacle;

