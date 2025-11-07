#pragma once

// Structure: CLodFace
// Ghidra size: 0x8c (140 bytes)
typedef struct CLodFace {
    int vertex_indices[3]; // 0x0
    int field_12; // 0xc
    int field_16; // 0x10
    int field_20; // 0x14
    int field_24; // 0x18
    char field_28[24]; // 0x1c
    int field_52; // 0x34
    int field_56; // 0x38
    int field_60; // 0x3c
    int field_64; // 0x40
    int field_68; // 0x44
    int field_72; // 0x48
    int field_76; // 0x4c
    float field_80; // 0x50
    CVector3f vertices[3]; // 0x54
    CVector3f field_120; // 0x78
    int field_132; // 0x84
    int field_136; // 0x88
} CLodFace;

