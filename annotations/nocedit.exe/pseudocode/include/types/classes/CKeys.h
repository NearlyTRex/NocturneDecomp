#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CKeys_vtable.h"
#include "types/funcdefs/CKeys_clearKeypresses.h"
#include "types/funcdefs/CKeys_getAndClearKeyState.h"
#include "types/funcdefs/CKeys_getKeyState.h"

// Structure: CKeys
// Ghidra size: 0x4 (4 bytes)
typedef struct CKeys {
    struct CKeys_vtable* vtable; // 0x0
} CKeys;

