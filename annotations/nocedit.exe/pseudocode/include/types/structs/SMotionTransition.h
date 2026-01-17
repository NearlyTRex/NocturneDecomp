#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SMotionTransition
// Ghidra size: 0x18 (24 bytes)
typedef struct SMotionTransition {
    int desired_state; // 0x0
    int cmd; // 0x4
    int to_motion_number; // 0x8
    float to_frame_number; // 0xc
    float tween_time; // 0x10
    int set_new_state_as_desired; // 0x14
} SMotionTransition;

