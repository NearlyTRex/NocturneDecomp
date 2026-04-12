#pragma once

// Forward declarations
struct CCodec;
struct _ostream;

// Dependencies
#include "system/basetypes.h"
#include "types/funcdefs/CCodec_dtor.h"
#include "types/funcdefs/CCodec_finalize.h"
#include "types/funcdefs/CCodec_finalizeBuffer.h"
#include "types/funcdefs/CCodec_init.h"
#include "types/funcdefs/CCodec_process.h"
#include "types/funcdefs/CCodec_processBuffer.h"
#include "types/funcdefs/CCodec_processFiles.h"
#include "types/funcdefs/CCodec_processFromBuffer.h"
#include "types/funcdefs/CCodec_processToBuffer.h"

// Structure: CCodec_vtable
// Ghidra size: 0x24 (36 bytes)
#pragma pack(push, 1)
typedef struct CCodec_vtable {
    CCodec_dtor* dtor; // 0x0
    CCodec_init* init; // 0x4
    CCodec_process* process; // 0x8
    CCodec_finalize* finalize; // 0xc
    CCodec_processToBuffer* processToBuffer; // 0x10
    CCodec_processFromBuffer* processFromBuffer; // 0x14
    CCodec_processBuffer* processBuffer; // 0x18
    CCodec_processFiles* processFiles; // 0x1c
    CCodec_finalizeBuffer* finalizeBuffer; // 0x20
} CCodec_vtable;
#pragma pack(pop)

