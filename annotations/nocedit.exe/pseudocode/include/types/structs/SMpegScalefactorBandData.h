#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SMpegScalefactorBandData
// Ghidra size: 0x122 (290 bytes)
typedef struct SMpegScalefactorBandData {
    int reserved[62]; // 0x0
    short intensity_stereo_pos[21]; // 0xf8
} SMpegScalefactorBandData;

