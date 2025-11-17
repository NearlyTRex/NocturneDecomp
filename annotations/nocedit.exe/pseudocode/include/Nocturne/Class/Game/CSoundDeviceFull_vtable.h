#pragma once

// Structure: CSoundDeviceFull_vtable
// Ghidra size: 0x54 (84 bytes)
typedef struct CSoundDeviceFull_vtable {
    CSoundDevice_close* close; // 0x0
    CSoundDevice_start* start; // 0x4
    CSoundDevice_reset* reset; // 0x8
    CSoundDevice_setMode* setMode; // 0xc
    CSoundDevice_poll* poll; // 0x10
    CSoundDevice_hasHardware3D* hasHardware3D; // 0x14
    CSoundDevice_set3DListenerPos* set3DListenerPos; // 0x18
    CSoundDevice_set3DListenerOrient* set3DListenerOrient; // 0x1c
    CSoundDevice_set3DListenerVelocity* set3DListenerVelocity; // 0x20
    CSoundDevice_set3DListenerDistanceFactor* set3DListenerDistanceFactor; // 0x24
    CSoundDevice_commitDeferredSettings* commitDeferredSettings; // 0x28
    CSoundDevice_allocateSample* allocateSample; // 0x2c
    CSoundDevice_freeSample* freeSample; // 0x30
    CSoundDevice_lockSample* lockSample; // 0x34
    CSoundDevice_unlockSample* unlockSample; // 0x38
    CSoundDevice_allocateSfx* allocateSfx; // 0x3c
    CSoundDevice_setSfxPos* setSfxPos; // 0x40
    CSoundDevice_getSfxPlaybackPos* getSfxPlaybackPos; // 0x44
    CSoundDevice_startSfx* startSfx; // 0x48
    CSoundDevice_killSfx* killSfx; // 0x4c
    CSoundDevice_isSfxPlaying* isSfxPlaying; // 0x50
} CSoundDeviceFull_vtable;

