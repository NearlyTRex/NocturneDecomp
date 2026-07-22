#pragma once

// Forward declarations
struct CHero;

// Dependencies
#include "system/basetypes.h"
#include "types/funcdefs/CHero_createDefaultWeapon.h"
#include "types/funcdefs/CHero_drawWeapon.h"
#include "types/funcdefs/CHero_isWeaponDrawn.h"
#include "types/funcdefs/CHero_reset.h"

// Structure: CHero_vtable
// Ghidra size: 0x10 (16 bytes)
typedef struct CHero_vtable {
    CHero_createDefaultWeapon* createDefaultWeapon; // 0x0
    CHero_drawWeapon* drawWeapon; // 0x4
    CHero_isWeaponDrawn* isWeaponDrawn; // 0x8
    CHero_reset* reset; // 0xc
} CHero_vtable;

