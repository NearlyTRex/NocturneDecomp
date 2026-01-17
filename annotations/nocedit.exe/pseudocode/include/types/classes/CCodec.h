#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CCodec_vtable.h"
#include "types/funcdefs/CCodec_dtor.h"
#include "types/funcdefs/CCodec_finalize.h"
#include "types/funcdefs/CCodec_init.h"
#include "types/funcdefs/CCodec_process.h"
#include "types/funcdefs/CCodec_processBuffer.h"

// Structure: CCodec
// Ghidra size: 0x4 (4 bytes)
typedef struct CCodec {
    struct CCodec_vtable* vtable; // 0x0
} CCodec;

