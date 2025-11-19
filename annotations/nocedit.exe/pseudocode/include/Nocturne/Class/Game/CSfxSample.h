#pragma once

// Structure: CSfxSample
// Ghidra size: 0x180 (384 bytes)
typedef struct CSfxSample {
    CSampleInfo sample_info; // 0x0
    void* sample_data; // 0x120
    int loop_marker_count; // 0x124
    int loop_length; // 0x128
    int loop_reserved1; // 0x12c
    int loop_reserved2; // 0x130
    int loop_reserved3; // 0x134
    int loop_reserved4; // 0x138
    int loop_markers[5]; // 0x13c
    int taken; // 0x150
    int ref_count; // 0x154
    int buffer_id; // 0x158
    int streaming_slot_index; // 0x15c
    int streaming_buffer_size; // 0x160
    int stream_read_position; // 0x164
    int stream_write_position; // 0x168
    CMP3Decoder* mp3_data; // 0x16c
    int file_offset; // 0x170
    FILE* file_handle; // 0x174
    int locked_offset; // 0x178
    int locked_length; // 0x17c
} CSfxSample;

