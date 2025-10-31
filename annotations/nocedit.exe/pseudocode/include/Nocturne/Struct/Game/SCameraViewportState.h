#pragma once

// Structure: SCameraViewportState
// Ghidra size: 0x90 (144 bytes)
typedef struct SCameraViewportState {
    int viewport_center_x; // 0x0
    int viewport_center_y; // 0x4
    int viewport_right; // 0x8
    int viewport_bottom; // 0xc
    int camera_origin_x; // 0x10
    int camera_origin_y; // 0x14
    int camera_origin_z; // 0x18
    int camera_pitch; // 0x1c
    int camera_yaw; // 0x20
    int camera_roll; // 0x24
    int clip_left; // 0x28
    int clip_right; // 0x2c
    int clip_top; // 0x30
    int clip_bottom; // 0x34
    int relative_x; // 0x38
    int relative_y; // 0x3c
    int relative_z; // 0x40
    CMatrix3x3i transform_matrix; // 0x44
    CMatrix3x3i inverse_matrix; // 0x68
    int projection_scale; // 0x8c
} SCameraViewportState;

