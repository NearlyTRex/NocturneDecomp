#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SMpegFrameHeader
// Ghidra size: 0x30 (48 bytes)
#pragma pack(push, 1)
typedef struct SMpegFrameHeader {
    int mpeg_version; // 0x0
    int layer; // 0x4
    int protection; // 0x8
    int bitrate_index; // 0xc
    int sampling_rate_index; // 0x10
    int padding; // 0x14
    int private_bit; // 0x18
    int channel_mode; // 0x1c
    int mode_extension; // 0x20
    int copyright; // 0x24
    int original; // 0x28
    int emphasis; // 0x2c
} SMpegFrameHeader;
#pragma pack(pop)

