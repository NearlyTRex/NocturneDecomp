#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CKeyFramedModel.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SClothBone.h"
#include "types/structs/SClothVertex.h"

// Structure: CCloth
// Ghidra size: 0x3fe70 (261744 bytes)
typedef struct CCloth {
    CKeyFramedModel model; // 0x0
    SClothVertex vertices[800]; // 0x56d8
    float weight; // 0x3ce58
    float gravity; // 0x3ce5c
    float dampen; // 0x3ce60
    float spring; // 0x3ce64
    float body_friction; // 0x3ce68
    float floor_friction; // 0x3ce6c
    float wind_area; // 0x3ce70
    float mom_inert; // 0x3ce74
    char reserved[12]; // 0x3ce78
    int double_sided; // 0x3ce84
    float transparency; // 0x3ce88
    int collide_bone_count; // 0x3ce8c
    SClothBone collide_bones[50]; // 0x3ce90
    int locked_vertex_count; // 0x3f028
    int locked_vertex_indices[900]; // 0x3f02c
    int* vertex_sort_buffer; // 0x3fe3c
    float inv_delta_time; // 0x3fe40
    float floor_y; // 0x3fe44
    CVector3f last_position; // 0x3fe48
    CVector3f last_euler; // 0x3fe54
    int version_num; // 0x3fe60
    CVector3f unk; // 0x3fe64
} CCloth;

