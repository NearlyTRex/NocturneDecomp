#pragma once

// Forward declarations
struct CCameraView_vtable;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CMatrix3x3f.h"
#include "types/unions/UVector3.h"

// Structure: CCameraView
// Ghidra size: 0x40 (64 bytes)
#pragma pack(push, 1)
typedef struct CCameraView {
    float fixed_point_scale; // 0x0
    UVector3 position; // 0x4
    CMatrix3x3f rotation_matrix; // 0x10
    int dead; // 0x34
    float focal_length; // 0x38
    struct CCameraView_vtable* vtable; // 0x3c
} CCameraView;
#pragma pack(pop)

