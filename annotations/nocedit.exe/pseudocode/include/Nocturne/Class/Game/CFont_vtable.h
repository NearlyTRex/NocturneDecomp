#pragma once

// Structure: CFont_vtable
// Ghidra size: 0x14 (20 bytes)
typedef struct CFont_vtable {
    CFont_ctor* ctor; // 0x0
    CFont_drawText* drawText; // 0x4
    CFont_getStringWidth* getStringWidth; // 0x8
    CFont_getStringHeight* getStringHeight; // 0xc
    CFont_getLineSpacing* getLineSpacing; // 0x10
} CFont_vtable;

