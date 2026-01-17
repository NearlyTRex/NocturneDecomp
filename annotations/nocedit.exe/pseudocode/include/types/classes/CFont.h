#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CFont_vtable.h"
#include "types/funcdefs/CFont_ctor.h"
#include "types/funcdefs/CFont_drawText.h"
#include "types/funcdefs/CFont_getLineSpacing.h"
#include "types/funcdefs/CFont_getStringHeight.h"
#include "types/funcdefs/CFont_getStringWidth.h"

// Structure: CFont
// Ghidra size: 0x4 (4 bytes)
typedef struct CFont {
    struct CFont_vtable* vtable; // 0x0
} CFont;

