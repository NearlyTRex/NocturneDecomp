#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CKeyFramedModel.h"

// Structure: CMoon
// Ghidra size: 0x56e0 (22240 bytes)
typedef struct CMoon {
    int is_loaded; // 0x0
    float rotation_phase; // 0x4
    CKeyFramedModel moon; // 0x8
} CMoon;

