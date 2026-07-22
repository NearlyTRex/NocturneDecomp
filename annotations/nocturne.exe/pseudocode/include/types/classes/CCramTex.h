#pragma once

// Forward declarations
struct STextureAtlasEntry;

// Dependencies
#include "system/basetypes.h"

// Structure: CCramTex
// Ghidra size: 0x4c (76 bytes)
#pragma pack(push, 1)
typedef struct CCramTex {
    int width; // 0x0
    int height; // 0x4
    int padded_width; // 0x8
    int padded_height; // 0xc
    int assigned_map_number; // 0x10
    int effective_width; // 0x14
    int effective_height; // 0x18
    int placement_bottom; // 0x1c
    int working_right; // 0x20
    int working_top; // 0x24
    int working_width; // 0x28
    int working_map_id; // 0x2c
    int final_left; // 0x30
    int final_top; // 0x34
    int final_right; // 0x38
    int final_bottom; // 0x3c
    int placement_flags; // 0x40
    int rotation_applied; // 0x44
    struct STextureAtlasEntry* source_entry_ptr; // 0x48
} CCramTex;
#pragma pack(pop)

