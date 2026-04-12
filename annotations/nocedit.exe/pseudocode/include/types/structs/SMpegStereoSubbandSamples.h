#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/structs/SMpegSubbandSamples.h"

// Structure: SMpegStereoSubbandSamples
// Ghidra size: 0x1200 (4608 bytes)
#pragma pack(push, 1)
typedef struct SMpegStereoSubbandSamples {
    SMpegSubbandSamples channels[2]; // 0x0
} SMpegStereoSubbandSamples;
#pragma pack(pop)

