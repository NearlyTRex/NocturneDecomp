#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"

// Structure: SInteractionInfo
// Ghidra size: 0x20 (32 bytes)
#pragma pack(push, 1)
typedef struct SInteractionInfo {
    int can_interact; // 0x0
    struct CDemonActor* interacting_actor; // 0x4
    float approach_offset; // 0x8
    float distance_max; // 0xc
    float yaw_max; // 0x10
    float yaw_min; // 0x14
    float pitch_max; // 0x18
    float pitch_min; // 0x1c
} SInteractionInfo;
#pragma pack(pop)

