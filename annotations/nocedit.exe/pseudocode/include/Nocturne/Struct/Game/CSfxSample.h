#pragma once

// Structure: CSfxSample
// Ghidra size: 0x180 (384 bytes)
typedef struct CSfxSample {
    CSampleInfo sample_info; // 0x0
    float max_distance; // 0x11c
    void* sample_data; // 0x120
    int loop_flags; // 0x124
    int loop_length; // 0x128
    char field_300[16]; // 0x12c
    int loop_start_marker; // 0x13c
    char field_320[16]; // 0x140
    int taken; // 0x150
    int ref_count; // 0x154
    int buffer_id; // 0x158
    int streaming_slot_index; // 0x15c
    int streaming_buffer_size; // 0x160
    int field_356; // 0x164
    int field_360; // 0x168
    CMP3Decoder* mp3_data; // 0x16c
    int file_offset; // 0x170
    FILE* file_handle; // 0x174
    void* field_376; // 0x178
    void* sound_buffer; // 0x17c
} CSfxSample;

