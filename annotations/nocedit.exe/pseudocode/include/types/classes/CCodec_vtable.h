#pragma once

// Forward declarations
struct CCodec;
struct FILE;

// Dependencies
#include "system/basetypes.h"
#include "types/funcdefs/CCodec_dtor.h"
#include "types/funcdefs/CCodec_finalize.h"
#include "types/funcdefs/CCodec_init.h"
#include "types/funcdefs/CCodec_process.h"
#include "types/funcdefs/CCodec_processBuffer.h"

// Structure: CCodec_vtable
// Ghidra size: 0x24 (36 bytes)
typedef struct CCodec_vtable {
    CCodec_dtor* dtor; // 0x0
    CCodec_init* init; // 0x4
    CCodec_process* process; // 0x8
    CCodec_finalize* finalize; // 0xc
    void* processToBuffer; // 0x10
    void* processFromBuffer; // 0x14
    CCodec_processBuffer* processBuffer; // 0x18
    void* processFiles; // 0x1c
    void* finalizeBuffer; // 0x20
} CCodec_vtable;

