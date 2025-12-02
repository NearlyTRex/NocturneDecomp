#pragma once

// Structure: CObj
// Ghidra size: 0x1c (28 bytes)
typedef struct CObj {
    int vertex_count; // 0x0
    CVert* vertex_data; // 0x4
    int poly_count; // 0x8
    CPoly* poly_array; // 0xc
    int field_16; // 0x10
    int is_valid; // 0x14
    CObj_vtable* vtable; // 0x18
} CObj;

