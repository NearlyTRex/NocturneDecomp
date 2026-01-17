#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CSound.h"
#include "types/funcdefs/CSound_releaseBuffer.h"
#include "types/funcdefs/CSound_releaseBufferId.h"
#include "types/funcdefs/CSound_setFormat.h"

// Structure: CSound_vtable
// Ghidra size: 0x3c (60 bytes)
typedef struct CSound_vtable {
    void* func1; // 0x0
    void* func2; // 0x4
    void* func3; // 0x8
    CSound_setFormat* setFormat; // 0xc
    void* field_16; // 0x10
    void* field_20; // 0x14
    void* field_24; // 0x18
    void* field_28; // 0x1c
    void* field_32; // 0x20
    void* field_36; // 0x24
    void* field_40; // 0x28
    void* field_44; // 0x2c
    CSound_releaseBufferId* releaseBufferId; // 0x30
    void* field_52; // 0x34
    CSound_releaseBuffer* releaseBuffer; // 0x38
} CSound_vtable;

