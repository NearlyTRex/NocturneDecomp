#pragma once

// Forward declarations
struct CBoneGuy;

// Dependencies
#include "system/basetypes.h"
#include "types/funcdefs/CBoneGuy_reset.h"

// Structure: CBoneGuy_vtable
// Ghidra size: 0x4 (4 bytes)
#pragma pack(push, 1)
typedef struct CBoneGuy_vtable {
    CBoneGuy_reset* reset; // 0x0
} CBoneGuy_vtable;
#pragma pack(pop)

