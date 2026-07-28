#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CMatrix3x4f.h"

// Structure: CTentacle
// Ghidra size: 0xbd94 (48532 bytes)
#pragma pack(push, 1)
typedef struct CTentacle {
    CEnemy base; // 0x0
    float wait_timer; // 0xbd24
    float chase_timer; // 0xbd28
    struct CDemonActor* grave_actor; // 0xbd2c
    float target_blend; // 0xbd30
    CMatrix3x4f target_matrix; // 0xbd34
    CMatrix3x4f prev_target_matrix; // 0xbd64
} CTentacle;
#pragma pack(pop)

