#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SGraphicsCardEnumeration
// Ghidra size: 0x104 (260 bytes)
typedef struct SGraphicsCardEnumeration {
    int card_count; // 0x0
    char enum_buffer[64]; // 0x4
    char* card_names[16]; // 0x44
    int vendor_ids[16]; // 0x84
    int device_ids[16]; // 0xc4
} SGraphicsCardEnumeration;

