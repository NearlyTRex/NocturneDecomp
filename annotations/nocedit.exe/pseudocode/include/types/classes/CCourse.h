#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCourseFrame.h"
#include "types/classes/CCourseFrameList.h"

// Structure: CCourse
// Ghidra size: 0xc (12 bytes)
typedef struct CCourse {
    int len; // 0x0
    struct CCourseFrameList* frame_list; // 0x4
    int loop; // 0x8
} CCourse;

