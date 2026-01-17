#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CObj.h"
#include "types/classes/COptimize_vtable.h"

// Structure: COptimize
// Ghidra size: 0x44 (68 bytes)
typedef struct COptimize {
    CObj obj; // 0x0
    double field_28; // 0x1c
    double field_36; // 0x24
    double field_44; // 0x2c
    int field_52; // 0x34
    int field_56; // 0x38
    void* field_60; // 0x3c
    struct COptimize_vtable* vtable; // 0x40
} COptimize;

