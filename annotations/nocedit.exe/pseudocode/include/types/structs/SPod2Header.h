#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SPod2Header
// Ghidra size: 0x60 (96 bytes)
#pragma pack(push, 1)
typedef struct SPod2Header {
    byte header_data[8]; // 0x0
    char description[80]; // 0x8
    int file_count; // 0x58
    int audit_count; // 0x5c
} SPod2Header;
#pragma pack(pop)

