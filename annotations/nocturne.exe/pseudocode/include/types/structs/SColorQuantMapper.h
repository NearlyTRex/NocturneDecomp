#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SColorQuantBox.h"
#include "types/structs/SColorQuantCentroid.h"

// Structure: SColorQuantMapper
// Ghidra size: 0x8308 (33544 bytes)
#pragma pack(push, 1)
typedef struct SColorQuantMapper {
    int num_palette_entries; // 0x0
    double sort_keys[256][4]; // 0x4
    char* color_data; // 0x2004
    SColorQuantCentroid centroids[256]; // 0x2008
    SColorQuantBox boxes[256]; // 0x4008
    char output_palette[768]; // 0x8008
} SColorQuantMapper;
#pragma pack(pop)

