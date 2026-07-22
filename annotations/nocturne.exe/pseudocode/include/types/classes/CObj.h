#pragma once

// Forward declarations
struct CObj_vtable;
struct CPoly;
struct CVert;

// Dependencies
#include "system/basetypes.h"

// Structure: CObj
// Ghidra size: 0x1c (28 bytes)
#pragma pack(push, 1)
typedef struct CObj {
    int vertex_count; // 0x0
    struct CVert* vertex_data; // 0x4
    int poly_count; // 0x8
    struct CPoly* poly_array; // 0xc
    int flags; // 0x10
    int is_valid; // 0x14
    struct CObj_vtable* vtable; // 0x18
} CObj;
#pragma pack(pop)

