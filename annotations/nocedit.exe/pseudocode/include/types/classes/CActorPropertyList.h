#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CActorProperty.h"

// Structure: CActorPropertyList
// Ghidra size: 0x24e8 (9448 bytes)
typedef struct CActorPropertyList {
    int unk; // 0x0
    int property_count; // 0x4
    CActorProperty properties[40]; // 0x8
} CActorPropertyList;

