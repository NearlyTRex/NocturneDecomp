#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: STexturedVertex
// Ghidra size: 0x44 (68 bytes)
typedef struct STexturedVertex {
    char unk1[8]; // 0x0
    int screen_x; // 0x8
    char unk2[4]; // 0xc
    int vertex_red; // 0x10
    char unk3[4]; // 0x14
    int texture_u; // 0x18
    char unk4[4]; // 0x1c
    int texture_v; // 0x20
    char unk5[4]; // 0x24
    int perspective_w; // 0x28
    char unk6[4]; // 0x2c
    int vertex_alpha; // 0x30
    char unk7[4]; // 0x34
    int vertex_green; // 0x38
    char unk8[4]; // 0x3c
    int vertex_blue; // 0x40
} STexturedVertex;

