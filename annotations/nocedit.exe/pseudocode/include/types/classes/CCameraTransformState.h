#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CMatrix3x3i.h"
#include "types/classes/CVector3i.h"
#include "types/unions/UVector3.h"

// Structure: CCameraTransformState
// Ghidra size: 0x3c (60 bytes)
#pragma pack(push, 1)
typedef struct CCameraTransformState {
    CVector3i saved_camera_origin; // 0x0
    UVector3 saved_camera_position; // 0xc
    CMatrix3x3i saved_source_matrix; // 0x18
} CCameraTransformState;
#pragma pack(pop)

