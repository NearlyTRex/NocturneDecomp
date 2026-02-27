#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SMpegLayer3ScalefactorGranule
// Ghidra size: 0xf8 (248 bytes)
typedef struct SMpegLayer3ScalefactorGranule {
    int long_scalefactors[22]; // 0x0
    int long_sentinel; // 0x58
    int short_scalefactors[3][13]; // 0x5c
} SMpegLayer3ScalefactorGranule;

