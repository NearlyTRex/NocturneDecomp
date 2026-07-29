#pragma once

// Forward declarations
struct CSmiley;

// Dependencies
#include "system/basetypes.h"
#include "types/funcdefs/CSmiley_reset.h"

// Structure: CSmiley_vtable
// Ghidra size: 0x4 (4 bytes)
#pragma pack(push, 1)
typedef struct CSmiley_vtable {
    CSmiley_reset* reset; // 0x0
} CSmiley_vtable;
#pragma pack(pop)

