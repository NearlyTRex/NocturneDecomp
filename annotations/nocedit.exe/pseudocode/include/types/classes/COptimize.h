#pragma once

// Forward declarations
struct COptimize_vtable;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CObj.h"

// Structure: COptimize
// Ghidra size: 0x44 (68 bytes)
typedef struct COptimize {
    CObj obj; // 0x0
    double unk1; // 0x1c
    double unk2; // 0x24
    double unk3; // 0x2c
    int unk4; // 0x34
    int unk5; // 0x38
    void* unk6; // 0x3c
    struct COptimize_vtable* vtable; // 0x40
} COptimize;

