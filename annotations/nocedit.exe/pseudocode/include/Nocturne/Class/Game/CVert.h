#pragma once

// Structure: CVert
// Ghidra size: 0x38 (56 bytes)
typedef struct CVert {
    CVector3d position; // 0x0
    CVector3d orig_position; // 0x18
    uint attrib_flags; // 0x30
    uint state_flags; // 0x34
} CVert;

