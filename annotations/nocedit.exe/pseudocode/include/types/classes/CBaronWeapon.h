#pragma once

// Forward declarations
struct CBaron;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CWeapon.h"

// Structure: CBaronWeapon
// Ghidra size: 0x57c (1404 bytes)
typedef struct CBaronWeapon {
    CWeapon base; // 0x0
    struct CBaron* baron; // 0x578
} CBaronWeapon;

