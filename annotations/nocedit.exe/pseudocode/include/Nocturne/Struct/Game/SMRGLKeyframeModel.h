#pragma once

// Structure: SMRGLKeyframeModel
// Ghidra size: 0x158 (344 bytes)
typedef struct SMRGLKeyframeModel {
    SMRGLHeaderExtended header; // 0x0
    int cycle_length; // 0xc
    int current_position; // 0x10
    SMRGLKeyframe* base_keyframes; // 0x14
    char filenames[16][16]; // 0x18
    SMRGLKeyframe* loaded_frames[16]; // 0x118
} SMRGLKeyframeModel;

