#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CCameraView_vtable
// Ghidra size: 0x14 (20 bytes)
typedef struct CCameraView_vtable {
    void* dtor; // 0x0
    void* setupPerspectiveAndFog; // 0x4
    void* calculatePerspective; // 0x8
    void* isVisible; // 0xc
    void* saveAlphaTransform; // 0x10
} CCameraView_vtable;

