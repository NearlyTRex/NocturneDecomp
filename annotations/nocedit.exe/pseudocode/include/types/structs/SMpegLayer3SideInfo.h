#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SMpegLayer3GranuleInfo.h"

// Structure: SMpegLayer3SideInfo
// Ghidra size: 0xa8 (168 bytes)
#pragma pack(push, 1)
typedef struct SMpegLayer3SideInfo {
    int main_data_begin; // 0x0
    int private_bits; // 0x4
    int scfsi[4]; // 0x8
    SMpegLayer3GranuleInfo granules[2]; // 0x18
} SMpegLayer3SideInfo;
#pragma pack(pop)

