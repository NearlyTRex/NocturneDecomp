#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CColor3i.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SMRGLPrimitiveQuad.h"
#include "types/structs/SWaterVertex.h"

// Structure: CWaterActor
// Ghidra size: 0x2b230 (176688 bytes)
#pragma pack(push, 1)
typedef struct CWaterActor {
    CDemonActor base; // 0x0
    CVector3f size; // 0x150
    int opacity; // 0x15c
    float height_delta; // 0x160
    float time_to_move; // 0x164
    float time_to_move_down; // 0x168
    char move_sound[32]; // 0x16c
    char move_down_sound[32]; // 0x18c
    char move_event[100]; // 0x1ac
    char move_down_event[100]; // 0x210
    float param; // 0x274
    int state; // 0x278
    float patch_size; // 0x27c
    int round_flag; // 0x280
    CColor3i color; // 0x284
    int vertex_count; // 0x290
    SWaterVertex vertices[1000]; // 0x294
    float inv_delta_time; // 0x7f94
    int grid_cols; // 0x7f98
    int grid_rows; // 0x7f9c
    SMRGLPrimitiveQuad primitives[2000]; // 0x7fa0
    int texture_frame; // 0x2b220
    int texture_anim_accum; // 0x2b224
    float base_y; // 0x2b228
    int primitive_count; // 0x2b22c
} CWaterActor;
#pragma pack(pop)

