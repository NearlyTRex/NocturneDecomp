#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// MISC - System Header
// =============================================================================

// Structure: IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct
typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory;
    dword DataIsDirectory;
} IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

// Union: IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion
typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct _IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
} IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

// Typedef: ImageBaseOffset32
// 32-bit Image Base Offset Relative Pointer-Typedef
typedef void* ImageBaseOffset32;

