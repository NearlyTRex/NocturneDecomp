#pragma once

// Forward declarations
struct CHero;

// Dependencies
#include "system/basetypes.h"
#include "types/funcdefs/CHero_areGunsDrawn.h"
#include "types/funcdefs/CHero_createDefaultGun.h"
#include "types/funcdefs/CHero_drawGun.h"
#include "types/funcdefs/CHero_reset.h"

// Structure: CHero_vtable
// Ghidra size: 0x10 (16 bytes)
typedef struct CHero_vtable {
    CHero_createDefaultGun* createDefaultGun; // 0x0
    CHero_drawGun* drawGun; // 0x4
    CHero_areGunsDrawn* areGunsDrawn; // 0x8
    CHero_reset* reset; // 0xc
} CHero_vtable;

