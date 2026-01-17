#pragma once

// Dependencies
#include "system/basetypes.h"

// Structure: SMemHead
// Ghidra size: 0x28 (40 bytes)
typedef struct SMemHead {
    struct SMemHead* prev; // 0x0
    struct SMemHead* next; // 0x4
    int num_bytes; // 0x8
    char source_file[20]; // 0xc
    int source_line; // 0x20
    int front_guard; // 0x24
} SMemHead;

