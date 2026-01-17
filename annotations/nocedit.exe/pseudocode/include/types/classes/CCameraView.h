#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCameraView_vtable.h"
#include "types/classes/CMatrix3x3i.h"
#include "types/classes/CVector3i.h"

// Structure: CCameraView
// Ghidra size: 0x40 (64 bytes)
typedef struct CCameraView {
    void* field_0; // 0x0
    CVector3i position; // 0x4
    CMatrix3x3i rotation_matrix; // 0x10
    int field_52; // 0x34
    float projection_scale; // 0x38
    struct CCameraView_vtable* vtable; // 0x3c
} CCameraView;

