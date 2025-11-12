#pragma once

// Structure: CSfxSample
// Ghidra size: 0x180 (384 bytes)
typedef struct CSfxSample {
    CSampleInfo sample_info; // 0x0
    int playback_mode; // 0x11c
    void* sample_data; // 0x120
    int field_292; // 0x124
    int expected_size; // 0x128
    char field_300[16]; // 0x12c
    int loop_counter; // 0x13c
    char field_320[16]; // 0x140
    int field_336; // 0x150
    int ref_count; // 0x154
    void* buffer_id; // 0x158
    int streaming_slot_index; // 0x15c
    char field_352[12]; // 0x160
    CMP3Decoder* mp3_data; // 0x16c
    int field_368; // 0x170
    FILE* file_handle; // 0x174
    void* field_376; // 0x178
    void* sound_buffer; // 0x17c
} CSfxSample;

