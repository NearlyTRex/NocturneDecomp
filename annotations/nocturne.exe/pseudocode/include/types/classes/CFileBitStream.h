#pragma once

// Forward declarations
struct _FILE;

// Dependencies
#include "system/basetypes.h"

// Structure: CFileBitStream
// Ghidra size: 0x2c (44 bytes)
#pragma pack(push, 1)
typedef struct CFileBitStream {
    struct _FILE* file_handle; // 0x0
    char* buffer; // 0x4
    int buffer_size; // 0x8
    int total_bits_read; // 0xc
    int current_byte_index; // 0x10
    int bits_available; // 0x14
    int end_of_stream_flag; // 0x18
    int error_flag; // 0x1c
    int stream_start_position; // 0x20
    int stream_length; // 0x24
    int bytes_remaining; // 0x28
} CFileBitStream;
#pragma pack(pop)

