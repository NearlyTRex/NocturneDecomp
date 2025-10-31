#pragma once

// Structure: CDemonPod
// Ghidra size: 0x198 (408 bytes)
typedef struct CDemonPod {
    int pod_file_count; // 0x0
    CPodFile* pod_files[100]; // 0x4
    CDemonPod_vtable* vtable; // 0x194
} CDemonPod;

