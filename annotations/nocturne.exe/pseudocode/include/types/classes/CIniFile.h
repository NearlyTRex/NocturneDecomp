#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CIniFile
// Ghidra size: 0x200 (512 bytes)
#pragma pack(push, 1)
typedef struct CIniFile {
    char filename[256]; // 0x0
    char section[256]; // 0x100
} CIniFile;
#pragma pack(pop)

