#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SBitAllocationTable.h"
#include "types/structs/SMpegFrameHeader.h"

// Structure: SMpegFrame
// Ghidra size: 0x1c (28 bytes)
typedef struct SMpegFrame {
    struct SMpegFrameHeader* header; // 0x0
    int channel_mode; // 0x4
    struct SBitAllocationTable* allocation_table; // 0x8
    int table_index; // 0xc
    int samples_per_granule; // 0x10
    int js_bound; // 0x14
    int sblimit; // 0x18
} SMpegFrame;

