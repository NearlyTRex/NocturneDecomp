#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CColor3f.h"
#include "types/classes/CDemonFilter.h"
#include "types/classes/CVector2i.h"
#include "types/classes/CVector3f.h"

// Structure: C3DSLight
// Ghidra size: 0x1898 (6296 bytes)
typedef struct C3DSLight {
    int light_type; // 0x0
    char name[256]; // 0x4
    CVector3f pos; // 0x104
    CVector3f orient; // 0x110
    float fov; // 0x11c
    float aspect; // 0x120
    float intensity; // 0x124
    char visible_flags[246]; // 0x128
    char unk1[4006]; // 0x21e
    CColor3f color; // 0x11c4
    float atten_start; // 0x11d0
    float atten_end; // 0x11d4
    char unk2[8]; // 0x11d8
    float on_time; // 0x11e0
    float cycle_time; // 0x11e4
    float cycle_elapsed; // 0x11e8
    int filter_count; // 0x11ec
    int blend_filter; // 0x11f0
    char filter_names[32][40]; // 0x11f4
    float filter_durations[32]; // 0x16f4
    int filter_indices[32]; // 0x1774
    int move_filter; // 0x17f4
    CVector2i filter_vel; // 0x17f8
    CVector2i filter_pos; // 0x1800
    CVector2i size; // 0x1808
    struct CDemonFilter* filters[32]; // 0x1810
    int current_filter_frame; // 0x1890
    float filter_frame_elapsed; // 0x1894
} C3DSLight;

