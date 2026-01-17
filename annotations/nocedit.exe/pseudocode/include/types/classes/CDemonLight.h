#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CDemonCamera.h"

// Structure: CDemonLight
// Ghidra size: 0x2fac (12204 bytes)
typedef struct CDemonLight {
    CDemonCamera base; // 0x0
    int left_extent[240]; // 0x14c8
    int right_extent[240]; // 0x1888
    int* corona_visibility_buffers; // 0x1c48
    int* corona_depth_buffer; // 0x1c4c
    int* corona_lightmap_indices; // 0x1c50
    uchar* precomputed_lighting_textures; // 0x1c54
    int texture_width; // 0x1c58
    int texture_height; // 0x1c5c
    int texture_row_shift; // 0x1c60
    int texture_col_shift; // 0x1c64
    uint teture_coord_mask; // 0x1c68
    uchar* filter_buffer; // 0x1c6c
    int field_7280; // 0x1c70
    char filter_name[64]; // 0x1c74
    int light_enabled_flag; // 0x1cb4
    int shadow_bounds_mode; // 0x1cb8, 0=rectangular, 1=circular
    int field_7356; // 0x1cbc
    int shadow_map_width; // 0x1cc0
    int shadow_map_height; // 0x1cc4
    int shadow_x_shift; // 0x1cc8
    int shadow_y_shift; // 0x1ccc
    int antialiasing_enabled; // 0x1cd0
    void* saved_screen_buffer_rows[1200]; // 0x1cd4
    ushort* shadow_depth_buffer; // 0x2f94
    void* shadow_buffer_raw; // 0x2f98
    int restore_memory_size; // 0x2f9c
    uchar* lightmap_visibility_bits; // 0x2fa0
    int transform_scale_factor; // 0x2fa4, fixed point
    float volumetric_intensity; // 0x2fa8
} CDemonLight;

