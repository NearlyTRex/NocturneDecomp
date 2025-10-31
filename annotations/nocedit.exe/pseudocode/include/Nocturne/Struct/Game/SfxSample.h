#pragma once

// Structure: SfxSample
// Ghidra size: 0x180 (384 bytes)
typedef struct SfxSample {
    char name[4]; // 0x0
    char field_4[284]; // 0x4
    void* sample_data; // 0x120
    char field_292[44]; // 0x124
    int field_150; // 0x150
    int ref_count; // 0x154
    void* buffer_id; // 0x158
    int streaming_slot_index; // 0x15c
    char field_160[12]; // 0x160
    void* mp3_data; // 0x16c
    int field_368; // 0x170
    FILE* file_handle; // 0x174
    void* field_376; // 0x178
    void* sound_buffer; // 0x17c
} SfxSample;

