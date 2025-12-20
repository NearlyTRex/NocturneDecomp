#pragma once

// Structure: CKeys_vtable
// Ghidra size: 0xc (12 bytes)
typedef struct CKeys_vtable {
    CKeys_getKeyState* getKeyState; // 0x0
    CKeys_getAndClearKeyState* getAndClearKeyState; // 0x4
    CKeys_clearKeypresses* clearKeyPresses; // 0x8
} CKeys_vtable;

