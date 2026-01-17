#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SPart
// Ghidra size: 0x60 (96 bytes)
typedef struct SPart {
    char part_name[32]; // 0x0
    int tri_counts[5]; // 0x20
    int cap_tri_counts[5]; // 0x34
    int adj_part_count; // 0x48
    int adj_part_list[4]; // 0x4c
    int dominant_bone; // 0x5c
} SPart;

