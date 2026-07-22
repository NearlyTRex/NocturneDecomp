#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/winnt.h"

// Structure: CExternalRenderer
// Ghidra size: 0x1dc8 (7624 bytes)
#pragma pack(push, 1)
typedef struct CExternalRenderer {
    char description[256]; // 0x0
    char vendor_name[256]; // 0x100
    ushort interface_version; // 0x200
    ushort driver_version; // 0x202
    ushort api_version; // 0x204
    ushort other_version; // 0x206
    _BIT_INTEGER32 feature_flags; // 0x208
    uint function_count; // 0x20c
    uint function_table[16]; // 0x210
    char reserved[7032]; // 0x250
} CExternalRenderer;
#pragma pack(pop)

