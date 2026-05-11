#pragma once

// Forward declarations
struct SMpegAllocationEntry;
struct SMpegFrameHeader;

// Dependencies
#include "system/basetypes.h"

// Structure: SMpegFrame
// Ghidra size: 0x1c (28 bytes)
#pragma pack(push, 1)
typedef struct SMpegFrame {
    struct SMpegFrameHeader* header; // 0x0
    int channel_mode; // 0x4
    struct SMpegAllocationEntry* allocation_entries; // 0x8
    int table_index; // 0xc
    int channel_count; // 0x10
    int js_bound; // 0x14
    int sblimit; // 0x18
} SMpegFrame;
#pragma pack(pop)

