#pragma once

// Forward declarations
struct CQuaternion4f;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CMotionList.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SBone.h"

// Structure: CSkeleton
// Ghidra size: 0x2982c (170028 bytes)
typedef struct CSkeleton {
    CMotionList motion_list; // 0x0
    char loaded_filename[80]; // 0x28508
    int bone_count; // 0x28558
    SBone bone_list[100]; // 0x2855c
    int frame_count; // 0x2936c
    struct CQuaternion4f* bone_angle_frames; // 0x29370
    struct CVector3f* frame_positions_1; // 0x29374
    struct CVector3f* frame_positions_2; // 0x29378
    CVector3f bone_scales[100]; // 0x2937c
} CSkeleton;

