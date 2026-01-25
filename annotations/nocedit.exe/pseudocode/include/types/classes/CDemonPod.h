#pragma once

// Forward declarations
struct CDemonPod_vtable;

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CPodFile.h"

// Structure: CDemonPod
// Ghidra size: 0x198 (408 bytes)
typedef struct CDemonPod {
    int pod_file_count; // 0x0
    struct CPodFile* pod_files[100]; // 0x4
    struct CDemonPod_vtable* vtable; // 0x194
} CDemonPod;

