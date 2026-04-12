#pragma once

// Forward declarations
struct CTextureList;

// Dependencies
#include "system/basetypes.h"

// Structure: CGround
// Ghidra size: 0x5c (92 bytes)
#pragma pack(push, 1)
typedef struct CGround {
    int width; // 0x0
    int height; // 0x4
    int width_minus_1; // 0x8
    int height_minus_1; // 0xc
    int grid_width; // 0x10
    int grid_height; // 0x14
    int total_cells; // 0x18
    int vertical_scale; // 0x1c
    int height_scale; // 0x20
    void* terrain_data; // 0x24
    struct CTextureList* texture_list; // 0x28
    int camera_x; // 0x2c
    int camera_y; // 0x30
    int dead1; // 0x34
    int dead2; // 0x38
    int visible_min_x; // 0x3c
    int visible_max_x; // 0x40
    int visible_min_y; // 0x44
    int visible_max_y; // 0x48
    int vertex_indices[4]; // 0x4c
} CGround;
#pragma pack(pop)

