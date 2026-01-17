#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SMpegLayer3Scalefactors
// Ghidra size: 0xf4 (244 bytes)
typedef struct SMpegLayer3Scalefactors {
    int scalefac_long[22]; // 0x0
    int scalefac_short[3][13]; // 0x58
} SMpegLayer3Scalefactors;

