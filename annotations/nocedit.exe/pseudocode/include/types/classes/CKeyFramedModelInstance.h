#pragma once

// Forward declarations
struct CKeyFramedModel;

// Dependencies
#include "system/basetypes.h"

// Structure: CKeyFramedModelInstance
// Ghidra size: 0x17c (380 bytes)
typedef struct CKeyFramedModelInstance {
    int part_visibility_flags[30]; // 0x0
    char model_name[100]; // 0x78
    char animation_state[156]; // 0xdc
    struct CKeyFramedModel* model_ptr; // 0x178
} CKeyFramedModelInstance;

