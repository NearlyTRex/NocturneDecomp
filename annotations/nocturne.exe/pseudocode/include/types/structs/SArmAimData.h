#pragma once

// Forward declarations
struct CDemonActor;

// Dependencies
#include "system/basetypes.h"

// Structure: SArmAimData
// Ghidra size: 0x20 (32 bytes)
#pragma pack(push, 1)
typedef struct SArmAimData {
    float aim_pitch; // 0x0
    float aim_yaw; // 0x4
    float target_pitch; // 0x8
    float target_yaw; // 0xc
    float recoil_timer; // 0x10
    float kickback_factor; // 0x14
    struct CDemonActor* aim_target; // 0x18
    int aim_lock_state; // 0x1c
} SArmAimData;
#pragma pack(pop)

