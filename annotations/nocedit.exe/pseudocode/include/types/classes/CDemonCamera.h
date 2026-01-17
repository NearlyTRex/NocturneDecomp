#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CCameraTransformState.h"
#include "types/classes/CCameraView.h"
#include "types/classes/CMatrix3x3i.h"
#include "types/classes/CRect.h"
#include "types/classes/CVector3i.h"

// Structure: CDemonCamera
// Ghidra size: 0x14c8 (5320 bytes)
typedef struct CDemonCamera {
    CCameraView base; // 0x0
    char camera_name[256]; // 0x40
    float max_distance; // 0x140
    int framebuffer_width; // 0x144
    int framebuffer_height; // 0x148
    int scale_factor; // 0x14c
    int display_width; // 0x150
    int display_height; // 0x154
    void* framebuffer_aligned; // 0x158
    void* zbuffer_aligned; // 0x15c
    void* framebuffer_raw; // 0x160
    void* zbuffer_raw; // 0x164
    int skip_clear_buffer_flag; // 0x168
    CVector3i camera_origin; // 0x16c
    CMatrix3x3i source_matrix; // 0x178
    CMatrix3x3i inverted_matrix; // 0x19c
    CRect saved_viewport_rect; // 0x1c0
    int rect_array_count; // 0x1d0
    CRect rect_array[256]; // 0x1d4
    CRect viewport_rect; // 0x11d4
    int scene_open_flag; // 0x11e4
    int corona_blend_factor; // 0x11e8
    CVector3i alpha_translations[8]; // 0x11ec
    int alpha_transform_matrices[18][8]; // 0x124c
    CCameraTransformState transform_state; // 0x148c
} CDemonCamera;

