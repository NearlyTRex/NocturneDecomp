#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CMorphModel.h"

// Structure: CMorph
// Ghidra size: 0xc2c (3116 bytes)
typedef struct CMorph {
    CMorphModel models[2]; // 0x0
    char dead[24]; // 0xc10
    int rescale_enabled; // 0xc28
} CMorph;

