#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: CEdButton
// Ghidra size: 0xe4 (228 bytes)
#pragma pack(push, 1)
typedef struct CEdButton {
    int enabled; // 0x0
    int shortcut_key; // 0x4
    int left; // 0x8
    int top; // 0xc
    int right; // 0x10
    int bottom; // 0x14
    int button_state; // 0x18
    char button_text[200]; // 0x1c
} CEdButton;
#pragma pack(pop)

