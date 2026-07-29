#pragma once

// Forward declarations
struct CMobster;

// Dependencies
#include "system/basetypes.h"
#include "types/funcdefs/CMobster_reset.h"

// Structure: CMobster_vtable
// Ghidra size: 0x4 (4 bytes)
#pragma pack(push, 1)
typedef struct CMobster_vtable {
    CMobster_reset* reset; // 0x0
} CMobster_vtable;
#pragma pack(pop)

