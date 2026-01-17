#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CEditorMode
// Ghidra size: 0x3c (60 bytes)
typedef struct CEditorMode {
    char padding_0x0[48]; // 0x0
    int renderSkyInEditor; // 0x30
    int renderWaterInEditor; // 0x34
    int fullLightInEditor; // 0x38
} CEditorMode;

