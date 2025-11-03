#pragma once

// Structure: CSkeleton
// Ghidra size: 0x2982c (170028 bytes)
typedef struct CSkeleton {
    CMotionList motion_list; // 0x0
    char loaded_filename[80]; // 0x28508
    int bone_count; // 0x28558
    SBone bone_list[100]; // 0x2855c
    int frame_count; // 0x2936c
    CQuaternion4f* bone_angle_frames; // 0x29370
    CVector3f* frame_positions_1; // 0x29374
    CVector3f* frame_positions_2; // 0x29378
    CVector3f bone_scales[100]; // 0x2937c
} CSkeleton;

