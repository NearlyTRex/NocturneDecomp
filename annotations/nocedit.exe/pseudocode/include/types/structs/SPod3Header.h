#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SPod3Header
// Ghidra size: 0x120 (288 bytes)
#pragma pack(push, 1)
typedef struct SPod3Header {
    byte header_data[8]; // 0x0
    char description[84]; // 0x8
    char author[80]; // 0x5c
    char copyright[80]; // 0xac
    int file_count; // 0xfc
    int data_start_offset; // 0x100
    int unk1; // 0x104
    int mount_priority; // 0x108
    uint total_file_size; // 0x10c
    int dependency_count; // 0x110
    int unk2; // 0x114
    int audit_count; // 0x118
    int unk3; // 0x11c
} SPod3Header;
#pragma pack(pop)

