#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/iostream.h"
#include "system/stdio.h"
#include "types/classes/CFileManager_vtable.h"
#include "types/funcdefs/CFileManager_extractPodFile.h"

// Structure: CFileManager
// Ghidra size: 0x138814 (1280020 bytes)
typedef struct CFileManager {
    struct FILE* file_ptr; // 0x0
    int tracked_file_count; // 0x4
    char file_entries[10000][128]; // 0x8
    int operation_mode; // 0x138808
    int batch_mode; // 0x13880c
    struct CFileManager_vtable* vtable; // 0x138810
} CFileManager;

