#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CKeyFramedModel.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SClothBone.h"
#include "types/structs/SClothVertex.h"

// Structure: CCloth
// Ghidra size: 0x3ab30 (240432 bytes)
#pragma pack(push, 1)
typedef struct CCloth {
    CKeyFramedModel model; // 0x0
    SClothVertex vertices[800]; // 0x398
    float weight; // 0x37b18
    float gravity; // 0x37b1c
    float dampen; // 0x37b20
    float spring; // 0x37b24
    float body_friction; // 0x37b28
    float floor_friction; // 0x37b2c
    float wind_area; // 0x37b30
    float mom_inert; // 0x37b34
    char dead[12]; // 0x37b38
    int double_sided; // 0x37b44
    float transparency; // 0x37b48
    int collide_bone_count; // 0x37b4c
    SClothBone collide_bones[50]; // 0x37b50
    int locked_vertex_count; // 0x39ce8
    int locked_vertex_indices[900]; // 0x39cec
    int* vertex_sort_buffer; // 0x3aafc
    float inv_delta_time; // 0x3ab00
    float floor_y; // 0x3ab04
    CVector3f last_position; // 0x3ab08
    CVector3f last_euler; // 0x3ab14
    int version_num; // 0x3ab20
    CVector3f wind_velocity; // 0x3ab24
} CCloth;
#pragma pack(pop)

