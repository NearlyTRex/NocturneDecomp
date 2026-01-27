#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CEditorMode
// Ghidra size: 0x3c (60 bytes)
typedef struct CEditorMode {
    char unk[48]; // 0x0
    int render_sky_in_editor; // 0x30
    int render_water_in_editor; // 0x34
    int full_light_in_editor; // 0x38
} CEditorMode;

