#pragma once

// Structure: CSoundDeviceBasic_vtable
// Ghidra size: 0x14 (20 bytes)
typedef struct CSoundDeviceBasic_vtable {
    CSoundDevice_close* close; // 0x0
    CSoundDevice_start* start; // 0x4
    CSoundDevice_reset* reset; // 0x8
    CSoundDevice_setMode* setMode; // 0xc
    CSoundDevice_poll* poll; // 0x10
} CSoundDeviceBasic_vtable;

