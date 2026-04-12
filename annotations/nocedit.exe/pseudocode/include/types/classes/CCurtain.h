#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SCurtainMeshData.h"
#include "types/structs/SCurtainVertex.h"
#include "types/structs/SMRGLTextureBasic.h"

// Structure: CCurtain
// Ghidra size: 0x65b38 (416568 bytes)
#pragma pack(push, 1)
typedef struct CCurtain {
    CDemonActor base; // 0x0
    CVector3f curtain_size; // 0x158
    SMRGLTextureBasic curtain_texture; // 0x164
    int opacity; // 0x17c
    int cinched_top; // 0x180
    int cinched_left; // 0x184
    int cinched_right; // 0x188
    int cinched_bottom; // 0x18c
    int falling; // 0x190
    char let_go_event[100]; // 0x194
    int simulate_me; // 0x1f8
    float patch_size; // 0x1fc
    int block_virtual_director_flag; // 0x200
    int vertex_count; // 0x204
    SCurtainVertex vertices[1000]; // 0x208
    SCurtainMeshData mesh; // 0x1c728
    float weight; // 0x65b14
    float dampen; // 0x65b18
    float spring; // 0x65b1c
    float friction; // 0x65b20
    float gravity; // 0x65b24
    float floor_height; // 0x65b28
    int hit_floor; // 0x65b2c
    int is_visible; // 0x65b30
    int needs_update; // 0x65b34
} CCurtain;
#pragma pack(pop)

