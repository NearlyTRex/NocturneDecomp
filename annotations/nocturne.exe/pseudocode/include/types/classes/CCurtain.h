#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SCurtainMeshData.h"
#include "types/structs/SCurtainVertex.h"
#include "types/structs/SMRGLTextureBasic.h"

// Structure: CCurtain
// Ghidra size: 0x65b30 (416560 bytes)
#pragma pack(push, 1)
typedef struct CCurtain {
    CDemonActor base; // 0x0
    CVector3f curtain_size; // 0x150
    SMRGLTextureBasic curtain_texture; // 0x15c
    int opacity; // 0x174
    int cinched_top; // 0x178
    int cinched_left; // 0x17c
    int cinched_right; // 0x180
    int cinched_bottom; // 0x184
    int falling; // 0x188
    char let_go_event[100]; // 0x18c
    int simulate_me; // 0x1f0
    float patch_size; // 0x1f4
    int block_virtual_director_flag; // 0x1f8
    int vertex_count; // 0x1fc
    SCurtainVertex vertices[1000]; // 0x200
    SCurtainMeshData mesh; // 0x1c720
    float weight; // 0x65b0c
    float dampen; // 0x65b10
    float spring; // 0x65b14
    float friction; // 0x65b18
    float gravity; // 0x65b1c
    float floor_height; // 0x65b20
    int hit_floor; // 0x65b24
    int is_visible; // 0x65b28
    int needs_update; // 0x65b2c
} CCurtain;
#pragma pack(pop)

