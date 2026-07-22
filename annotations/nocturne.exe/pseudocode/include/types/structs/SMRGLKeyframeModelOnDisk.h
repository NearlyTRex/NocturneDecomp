#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SMRGLHeaderExtended.h"

// Structure: SMRGLKeyframeModelOnDisk
// Ghidra size: 0x158 (344 bytes)
#pragma pack(push, 1)
typedef struct SMRGLKeyframeModelOnDisk {
    SMRGLHeaderExtended header; // 0x0
    int cycle_length; // 0xc
    int current_position; // 0x10
    uint base_keyframes; // 0x14
    char filenames[16][16]; // 0x18
    uint loaded_frames[16]; // 0x118
} SMRGLKeyframeModelOnDisk;
#pragma pack(pop)

