#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SMpegLayer3SideInfoChannel.h"

// Structure: SMpegLayer3SideInfo
// Ghidra size: 0x148 (328 bytes)
#pragma pack(push, 1)
typedef struct SMpegLayer3SideInfo {
    int main_data_begin; // 0x0
    int private_bits; // 0x4
    SMpegLayer3SideInfoChannel channels[2]; // 0x8
} SMpegLayer3SideInfo;
#pragma pack(pop)

