#pragma once

// Structure: CKeys_vtable
// Ghidra size: 0x8 (8 bytes)
typedef struct CKeys_vtable {
    CKeys_isKeyDown* isKeyDown; // 0x0
    CKeys_isKeyPressed* isKeyPressed; // 0x4
} CKeys_vtable;

