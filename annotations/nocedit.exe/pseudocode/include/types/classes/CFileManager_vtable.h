#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CFileManager.h"
#include "types/funcdefs/CFileManager_extractPodFile.h"

// Structure: CFileManager_vtable
// Ghidra size: 0x4 (4 bytes)
typedef struct CFileManager_vtable {
    CFileManager_extractPodFile* extractPodFile; // 0x0
} CFileManager_vtable;

