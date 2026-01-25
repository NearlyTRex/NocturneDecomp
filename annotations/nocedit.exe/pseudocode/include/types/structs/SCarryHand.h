#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"

// Structure: SCarryHand
// Ghidra size: 0x44 (68 bytes)
typedef struct SCarryHand {
    char field_0[8]; // 0x0
    struct CDemonActor* carry_actor; // 0x8
    char field_12[56]; // 0xc
} SCarryHand;

