#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/windef.h"

// Structure: SVersionControlSession
// Ghidra size: 0x160 (352 bytes)
typedef struct SVersionControlSession {
    char primary_username[32]; // 0x0
    char field_32[8]; // 0x20
    char network_username[40]; // 0x28
    char field_80[64]; // 0x50
    char password[104]; // 0x90
    char domain[80]; // 0xf8
    char source_path[20]; // 0x148
    HANDLE session_handle; // 0x15c
} SVersionControlSession;

