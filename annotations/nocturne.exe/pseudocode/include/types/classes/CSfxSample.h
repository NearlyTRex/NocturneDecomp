#pragma once

// Forward declarations
struct CMP3Decoder;
struct _FILE;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CSampleInfo.h"

// Structure: CSfxSample
// Ghidra size: 0x168 (360 bytes)
#pragma pack(push, 1)
typedef struct CSfxSample {
    CSampleInfo sample_info; // 0x0
    short* sample_data; // 0x120
    int loop_marker_count; // 0x124
    int taken; // 0x128
    int ref_count; // 0x12c
    int buffer_id; // 0x130
    int streaming_slot_index; // 0x134
    int streaming_buffer_size; // 0x138
    int stream_read_position; // 0x13c
    int stream_write_position; // 0x140
    struct CMP3Decoder* mp3_data; // 0x144
    int file_offset; // 0x148
    struct _FILE* file_handle; // 0x14c
    int locked_offset; // 0x150
    int locked_length; // 0x154
    uint locked_bytes1; // 0x158
    uint locked_bytes2; // 0x15c
    void* locked_ptr1; // 0x160
    void* locked_ptr2; // 0x164
} CSfxSample;
#pragma pack(pop)

