#pragma once

// Union: IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion
typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
} IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

