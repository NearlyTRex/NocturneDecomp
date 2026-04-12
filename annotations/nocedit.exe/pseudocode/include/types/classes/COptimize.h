#pragma once

// Forward declarations
struct CComplexPolygon;
struct COptimize_vtable;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CObj.h"

// Structure: COptimize
// Ghidra size: 0x44 (68 bytes)
#pragma pack(push, 1)
typedef struct COptimize {
    CObj base; // 0x0
    double weld_threshold; // 0x1c
    double coplanar_angle_threshold; // 0x24
    double coplanar_distance_threshold; // 0x2c
    int max_polygon_sides; // 0x34
    int complex_polygon_count; // 0x38
    struct CComplexPolygon** complex_polygons; // 0x3c
    struct COptimize_vtable* vtable; // 0x40
} COptimize;
#pragma pack(pop)

