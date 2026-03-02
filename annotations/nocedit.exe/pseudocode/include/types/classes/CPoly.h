#pragma once

// Forward declarations
struct CObj;
struct CPoly_vtable;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CP2D.h"
#include "types/classes/CP3D.h"

// Structure: CPoly
// Ghidra size: 0x68 (104 bytes)
typedef struct CPoly {
    struct CObj* parent_obj; // 0x0
    int vertex_idx_0; // 0x4
    int vertex_idx_1; // 0x8
    int vertex_idx_2; // 0xc
    CP2D uv_coords[3]; // 0x10
    CP3D normal; // 0x40
    int adjacency_flags; // 0x58
    int material_id; // 0x5c
    uint flags; // 0x60
    struct CPoly_vtable* vtable; // 0x64
} CPoly;

