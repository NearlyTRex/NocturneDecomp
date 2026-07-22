#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SAudioFormatDescriptor
// Ghidra size: 0x10 (16 bytes)
#pragma pack(push, 1)
typedef struct SAudioFormatDescriptor {
    DWORD format_flags; // 0x0
    int bits_per_sample; // 0x4
    int channels; // 0x8
    int sample_rate; // 0xc
} SAudioFormatDescriptor;
#pragma pack(pop)

