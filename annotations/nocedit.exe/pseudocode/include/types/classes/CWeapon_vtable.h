#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CWeapon_vtable
// Ghidra size: 0x20 (32 bytes)
typedef struct CWeapon_vtable {
    void* bfunc1; // 0x0
    void* setWeaponState; // 0x4
    void* bfunc3; // 0x8
    void* fire; // 0xc
    void* bfunc5; // 0x10
    void* bfunc6; // 0x14
    void* bfunc7; // 0x18
    void* bfunc8; // 0x1c
} CWeapon_vtable;

