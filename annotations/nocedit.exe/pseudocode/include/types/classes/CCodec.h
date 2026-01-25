#pragma once

// Forward declarations
struct CCodec_vtable;

// Dependencies
#include "system/basetypes.h"

// Structure: CCodec
// Ghidra size: 0x4 (4 bytes)
typedef struct CCodec {
    struct CCodec_vtable* vtable; // 0x0
} CCodec;

