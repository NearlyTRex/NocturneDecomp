#pragma once

// Structure: CMotionController
// Ghidra size: 0x54 (84 bytes)
typedef struct CMotionController {
    CMotionList* motion_list_ptr; // 0x0
    int current_motion_index; // 0x4
    float current_frame_number; // 0x8
    int tween_type; // 0xc
    float tween_speed; // 0x10
    float tween_progress; // 0x14
    int tween_target_motion; // 0x18
    float tween_target_frame; // 0x1c
    int tween_direction; // 0x20
    int tween_set_new_state; // 0x24
    int state_index; // 0x28
    int in_transition; // 0x2c
    char current_motion_name[32]; // 0x30
    CMotionController_vtable* vtable; // 0x50
} CMotionController;

