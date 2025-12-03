#pragma once

// Structure: CPoly_vtable
// Ghidra size: 0x8c (140 bytes)
typedef struct CPoly_vtable {
    CPoly_init* init; // 0x0
    void* field_4; // 0x4
    void* field_8; // 0x8
    void* field_12; // 0xc
    void* field_16; // 0x10
    void* field_20; // 0x14
    void* field_24; // 0x18
    void* field_28; // 0x1c
    void* setFlags; // 0x20
    void* field_36; // 0x24
    void* field_40; // 0x28
    void* clearStateFlags; // 0x2c
    void* field_48; // 0x30
    void* field_52; // 0x34
    void* saveVertexPositionsWithFlag; // 0x38
    void* field_60; // 0x3c
    void* restoreVertexPositionsWithFlag; // 0x40
    void* computeNormalMaybe1; // 0x44
    void* computeNormalMaybe2; // 0x48
    void* generatePlanarUVs; // 0x4c
    void* scaleUVs; // 0x50
    void* getMaterialId; // 0x54
    void* field_88; // 0x58
    void* field_92; // 0x5c
    void* field_96; // 0x60
    void* field_100; // 0x64
    void* field_104; // 0x68
    void* field_108; // 0x6c
    void* sharesEdgeWith; // 0x70
    void* field_116; // 0x74
    void* field_120; // 0x78
    void* field_124; // 0x7c
    void* field_128; // 0x80
    void* field_132; // 0x84
    void* field_136; // 0x88
} CPoly_vtable;

