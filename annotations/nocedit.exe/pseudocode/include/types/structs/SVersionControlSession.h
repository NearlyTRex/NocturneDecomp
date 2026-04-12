#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/windef.h"

// Structure: SVersionControlSession
// Ghidra size: 0x160 (352 bytes)
#pragma pack(push, 1)
typedef struct SVersionControlSession {
    char primary_username[32]; // 0x0
    int overwrite_own_choice; // 0x20
    int overwrite_writeable_choice; // 0x24
    char network_username[104]; // 0x28
    char password[104]; // 0x90
    char domain[80]; // 0xf8
    char source_path[20]; // 0x148
    HANDLE session_handle; // 0x15c
} SVersionControlSession;
#pragma pack(pop)

