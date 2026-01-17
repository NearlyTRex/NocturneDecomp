#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CMatrix3x3i.h"
#include "types/classes/CVector3i.h"

// Structure: CCameraTransformState
// Ghidra size: 0x3c (60 bytes)
typedef struct CCameraTransformState {
    CVector3i saved_camera_origin; // 0x0
    CVector3i saved_camera_position; // 0xc
    CMatrix3x3i saved_source_matrix; // 0x18
} CCameraTransformState;

