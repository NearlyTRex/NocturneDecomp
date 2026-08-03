#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CKeyFramedModel.h"

// Structure: CMoon
// Ghidra size: 0x3a0 (928 bytes)
#pragma pack(push, 1)
typedef struct CMoon {
    int is_loaded; // 0x0
    float rotation_phase; // 0x4
    CKeyFramedModel moon; // 0x8
} CMoon;
#pragma pack(pop)

