#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CExternalRenderer
// Ghidra size: 0x1de8 (7656 bytes)
typedef struct CExternalRenderer {
    char processing_data[256]; // 0x0
    char dll_identifier[256]; // 0x100
    ushort hardware_flag1; // 0x200
    ushort hardware_flag2; // 0x202
    ushort api_version; // 0x204
    ushort padding_206; // 0x206
    uint feature_flags; // 0x208
    uint function_count; // 0x20c
    uint function_table[16]; // 0x210
    char field_592[7000]; // 0x250
    char field_7592[32]; // 0x1da8
    char renderer_dll_name[32]; // 0x1dc8
} CExternalRenderer;

