#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"

// Structure: SBug
// Ghidra size: 0x40 (64 bytes)
typedef struct SBug {
    int state; // 0x0
    int model_index; // 0x4
    CVector3f position; // 0x8
    CVector3f orientation; // 0x14
    CVector3f dest_position; // 0x20
    int current_vertex; // 0x2c
    int dest_vertex; // 0x30
    float interp_t; // 0x34
    float crawl_duration; // 0x38
    int downward_bias; // 0x3c
} SBug;

