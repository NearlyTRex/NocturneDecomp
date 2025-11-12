#pragma once

// Structure: CDirectSoundDevice_vtable
// Ghidra size: 0x54 (84 bytes)
typedef struct CDirectSoundDevice_vtable {
    void* func1; // 0x0
    void* func2; // 0x4
    void* func3; // 0x8
    void* func4; // 0xc
    void* func5; // 0x10
    void* func6; // 0x14
    void* func7; // 0x18
    void* func8; // 0x1c
    void* func9; // 0x20
    void* func10; // 0x24
    void* func11; // 0x28
    void* func12; // 0x2c
    void* freeSample; // 0x30
    void* lockSample; // 0x34
    void* unlockSample; // 0x38
    void* allocateSfx; // 0x3c
    void* setSfxPos; // 0x40
    void* getSfxPlaybackPos; // 0x44
    void* startSfx; // 0x48
    void* killSfx; // 0x4c
    void* func21; // 0x50
} CDirectSoundDevice_vtable;

