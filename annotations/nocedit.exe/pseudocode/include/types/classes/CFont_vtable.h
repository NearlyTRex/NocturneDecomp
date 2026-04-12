#pragma once

// Forward declarations
struct CFont;

// Dependencies
#include "system/basetypes.h"
#include "types/funcdefs/CFont_ctor.h"
#include "types/funcdefs/CFont_drawText.h"
#include "types/funcdefs/CFont_getLineSpacing.h"
#include "types/funcdefs/CFont_getStringHeight.h"
#include "types/funcdefs/CFont_getStringWidth.h"

// Structure: CFont_vtable
// Ghidra size: 0x14 (20 bytes)
#pragma pack(push, 1)
typedef struct CFont_vtable {
    CFont_ctor* ctor; // 0x0
    CFont_drawText* drawText; // 0x4
    CFont_getStringWidth* getStringWidth; // 0x8
    CFont_getStringHeight* getStringHeight; // 0xc
    CFont_getLineSpacing* getLineSpacing; // 0x10
} CFont_vtable;
#pragma pack(pop)

