#pragma once

// Structure: CPod
// Ghidra size: 0x198 (408 bytes)
typedef struct CPod {
    int pod_file_count; // 0x0
    CPodFile* pod_files[100]; // 0x4
    CPod_vtable* vtable; // 0x194
} CPod;

