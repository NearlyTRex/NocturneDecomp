#pragma once

// Structure: CGlass
// Ghidra size: 0xb40 (2880 bytes)
typedef struct CGlass {
    CDemonActor base_actor; // 0x0
    CVector3f glass_size; // 0x158
    char field_356[8]; // 0x164
    char glass_texture[16]; // 0x16c
    int opacity; // 0x17c
    int shattered; // 0x180
    char break_event[100]; // 0x184
    int mirror_flag; // 0x1e8
    SMirror mirror; // 0x1ec
    char breakable_condition[100]; // 0x30c
    int background_flag; // 0x370
    char field_884[8]; // 0x374
    char broken_texture[16]; // 0x37c
    CVector3f broken_vertices[25]; // 0x38c
    char field_1208[1672]; // 0x4b8
} CGlass;

