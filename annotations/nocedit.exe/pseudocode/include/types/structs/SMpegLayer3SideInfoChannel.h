#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SMpegLayer3GranuleInfo.h"

// Structure: SMpegLayer3SideInfoChannel
// Ghidra size: 0xa0 (160 bytes)
#pragma pack(push, 1)
typedef struct SMpegLayer3SideInfoChannel {
    int scfsi[4]; // 0x0
    SMpegLayer3GranuleInfo granules[2]; // 0x10
} SMpegLayer3SideInfoChannel;
#pragma pack(pop)

