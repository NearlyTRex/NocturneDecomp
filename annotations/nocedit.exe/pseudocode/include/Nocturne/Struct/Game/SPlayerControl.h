#pragma once

// Structure: SPlayerControl
// Ghidra size: 0x2c (44 bytes)
typedef struct SPlayerControl {
    int action_states[8]; // 0x0
    float strafe_speed; // 0x20
    float turn_speed; // 0x24
    float look_up_down_speed; // 0x28
} SPlayerControl;

