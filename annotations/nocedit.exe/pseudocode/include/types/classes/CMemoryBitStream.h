#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CMemoryBitStream
// Ghidra size: 0x4010 (16400 bytes)
typedef struct CMemoryBitStream {
    uint buffer_size_limit; // 0x0
    uint total_bits_read; // 0x4
    uint current_dword_index; // 0x8
    uint frame_buffer[4096]; // 0xc
    uint bits_available; // 0x400c
} CMemoryBitStream;

