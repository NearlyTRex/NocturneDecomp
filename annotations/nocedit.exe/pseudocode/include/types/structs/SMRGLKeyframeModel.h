#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3i.h"
#include "types/structs/SMRGLHeaderExtended.h"
#include "types/structs/SMRGLKeyframe.h"

// Structure: SMRGLKeyframeModel
// Ghidra size: 0x158 (344 bytes)
typedef struct SMRGLKeyframeModel {
    SMRGLHeaderExtended header; // 0x0
    int cycle_length; // 0xc
    int current_position; // 0x10
    struct SMRGLKeyframe* base_keyframes; // 0x14
    char filenames[16][16]; // 0x18
    struct SMRGLKeyframe* loaded_frames[16]; // 0x118
} SMRGLKeyframeModel;

