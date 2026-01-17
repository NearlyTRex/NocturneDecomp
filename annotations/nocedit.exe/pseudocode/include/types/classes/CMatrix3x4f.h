#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CQuaternion4f.h"

// Structure: CMatrix3x4f
// Ghidra size: 0x30 (48 bytes)
typedef struct CMatrix3x4f {
    CQuaternion4f m[3]; // 0x0
} CMatrix3x4f;

