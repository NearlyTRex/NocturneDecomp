#pragma once

// Forward declarations
struct CFont_vtable;

// Dependencies
#include "system/basetypes.h"

// Structure: CFont
// Ghidra size: 0x4 (4 bytes)
#pragma pack(push, 1)
typedef struct CFont {
    struct CFont_vtable* vtable; // 0x0
} CFont;
#pragma pack(pop)

