#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CColor3i.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SMRGLPrimitiveQuad.h"
#include "types/structs/SWaterVertex.h"

// Structure: CWaterActor
// Ghidra size: 0x2b238 (176696 bytes)
typedef struct CWaterActor {
    CDemonActor base; // 0x0
    CVector3f size; // 0x158
    int opacity; // 0x164
    float height_delta; // 0x168
    float time_to_move; // 0x16c
    float time_to_move_down; // 0x170
    char move_sound[32]; // 0x174
    char move_down_sound[32]; // 0x194
    char move_event[100]; // 0x1b4
    char move_down_event[100]; // 0x218
    float param; // 0x27c
    int state; // 0x280
    float patch_size; // 0x284
    int round_flag; // 0x288
    CColor3i color; // 0x28c
    int vertex_count; // 0x298
    SWaterVertex vertices[1000]; // 0x29c
    float inv_delta_time; // 0x7f9c
    int grid_cols; // 0x7fa0
    int grid_rows; // 0x7fa4
    SMRGLPrimitiveQuad primitives[2000]; // 0x7fa8
    int texture_frame; // 0x2b228
    int texture_anim_accum; // 0x2b22c
    float base_y; // 0x2b230
    int primitive_count; // 0x2b234
} CWaterActor;

