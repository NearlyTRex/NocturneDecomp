#pragma once

// Forward declarations
struct CPod_vtable;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CPodFile.h"

// Structure: CPod
// Ghidra size: 0x198 (408 bytes)
typedef struct CPod {
    int pod_file_count; // 0x0
    struct CPodFile* pod_files[100]; // 0x4
    struct CPod_vtable* vtable; // 0x194
} CPod;

