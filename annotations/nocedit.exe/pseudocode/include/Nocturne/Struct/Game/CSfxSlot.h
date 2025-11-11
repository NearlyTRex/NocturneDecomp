#pragma once

// Structure: CSfxSlot
// Ghidra size: 0x128 (296 bytes)
typedef struct CSfxSlot {
    CSfxOptions options; // 0x0
    void* dsound_buffer; // 0x70
    int field_116; // 0x74
    CSfxSample* sample; // 0x78
    char field_124[156]; // 0x7c
    int is_active; // 0x118
    char field_284[12]; // 0x11c
} CSfxSlot;

