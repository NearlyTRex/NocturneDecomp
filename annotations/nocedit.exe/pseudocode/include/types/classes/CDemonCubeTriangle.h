#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/STriangleRef.h"

// Structure: CDemonCubeTriangle
// Ghidra size: 0x20 (32 bytes)
typedef struct CDemonCubeTriangle {
    STriangleRef triangle; // 0x0
    uint dominant_axis; // 0x1c
} CDemonCubeTriangle;

