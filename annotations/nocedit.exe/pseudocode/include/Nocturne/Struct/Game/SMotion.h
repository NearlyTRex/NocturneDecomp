#pragma once

// Structure: SMotion
// Ghidra size: 0x54c (1356 bytes)
typedef struct SMotion {
    char motion_name[32]; // 0x0
    float fps; // 0x20
    int state_index; // 0x24
    int exit_forward_from_frame; // 0x28
    int unused1; // 0x2c
    int exit_forward_cmd; // 0x30
    int exit_forward_to_motion; // 0x34
    float exit_forward_to_frame; // 0x38
    float exit_forward_tween_time; // 0x3c
    int exit_forward_set_new_state; // 0x40
    char unused2[12]; // 0x44
    int exit_backward_to_motion; // 0x50
    float exit_backward_to_frame; // 0x54
    char unused3[8]; // 0x58
    int frame_start; // 0x60
    int frame_count; // 0x64
    int transition_count; // 0x68
    SMotionTransition transitions[45]; // 0x6c
    int signal_count; // 0x4a4
    SMotionSignal signals[15]; // 0x4a8
    int marker_count; // 0x520
    int markers[10]; // 0x524
} SMotion;

