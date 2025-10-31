#pragma once

// Structure: SfxSlot
// Ghidra size: 0x128 (296 bytes)
typedef struct SfxSlot {
    int status; // 0x0
    void* sample_data; // 0x4
    int volume; // 0x8
    int position; // 0xc
    int loop_count; // 0x10
    char field_20[92]; // 0x14
    void* dsound_buffer; // 0x70
    int field_116; // 0x74
    SfxSample* sample; // 0x78
    char field_124[156]; // 0x7c
    int is_active; // 0x118
    char field_284[12]; // 0x11c
} SfxSlot;

