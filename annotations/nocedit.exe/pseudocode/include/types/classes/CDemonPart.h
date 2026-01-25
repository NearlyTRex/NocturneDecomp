#pragma once

// Forward declarations
struct SSurfacePlane;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"

// Structure: CDemonPart
// Ghidra size: 0x388 (904 bytes)
typedef struct CDemonPart {
    char format[32]; // 0x0
    int vertex_count; // 0x20
    int face_count; // 0x24
    int vertex_group_size; // 0x28
    struct CVector3i* vertex_positions; // 0x2c
    struct CVector3i* vertex_normals; // 0x30
    struct SSurfacePlane* face_data; // 0x34
    int mystery_array_size; // 0x38
    char field_60[8]; // 0x3c
    char mystery_array[760]; // 0x44
    CVector3i bbox1; // 0x33c
    CVector3i bbox2; // 0x348
    CVector3i bbox3; // 0x354
    CVector3i bbox4; // 0x360
    CVector3f bbox1_float; // 0x36c
    CVector3f bbox2_float; // 0x378
    int current_vertex_group; // 0x384
} CDemonPart;

