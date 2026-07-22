#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SMpegFrame.h"

// Structure: SMpegFrameDecodeContext
// Ghidra size: 0x30 (48 bytes)
#pragma pack(push, 1)
typedef struct SMpegFrameDecodeContext {
    SMpegFrame frame; // 0x0
    int dead1; // 0x1c
    int dead2; // 0x20
    int group_counter; // 0x24
    int channel_count; // 0x28
    int dead3; // 0x2c
} SMpegFrameDecodeContext;
#pragma pack(pop)

