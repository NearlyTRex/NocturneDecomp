#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CMatrix3x4f.h"

// Structure: SCarryHand
// Ghidra size: 0x44 (68 bytes)
#pragma pack(push, 1)
typedef struct SCarryHand {
    int bone_index; // 0x0
    int secondary_bone_index; // 0x4
    struct CDemonActor* carry_actor; // 0x8
    CMatrix3x4f initial_carry_transform; // 0xc
    float blend_speed; // 0x3c
    float blend_factor; // 0x40
} SCarryHand;
#pragma pack(pop)

