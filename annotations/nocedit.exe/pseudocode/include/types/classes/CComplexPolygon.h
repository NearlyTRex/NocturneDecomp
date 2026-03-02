#pragma once

// Forward declarations
struct CPoly;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CVector3d.h"

// Structure: CComplexPolygon
// Ghidra size: 0x34 (52 bytes)
typedef struct CComplexPolygon {
    int polygon_count; // 0x0
    struct CPoly** polygon_list; // 0x4
    int edge_count; // 0x8
    void* edge_array; // 0xc
    int material_id; // 0x10
    CVector3d normal; // 0x14
    int expanded_edge_count; // 0x2c
    void* expanded_edges; // 0x30
} CComplexPolygon;

