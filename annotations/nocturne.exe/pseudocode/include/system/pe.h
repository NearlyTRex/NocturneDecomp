#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// PE - System Header
// =============================================================================

// Structure: IMAGE_BASE_RELOCATION
#pragma pack(push, 1)
typedef struct IMAGE_BASE_RELOCATION {
    dword VirtualAddress;
    dword SizeOfBlock;
} IMAGE_BASE_RELOCATION;
#pragma pack(pop)

// Structure: IMAGE_DATA_DIRECTORY
#pragma pack(push, 1)
typedef struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
} IMAGE_DATA_DIRECTORY;
#pragma pack(pop)

// Structure: IMAGE_FILE_HEADER
#pragma pack(push, 1)
typedef struct IMAGE_FILE_HEADER {
    word Machine; // 332
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
} IMAGE_FILE_HEADER;
#pragma pack(pop)

// Structure: IMAGE_OPTIONAL_HEADER32
#pragma pack(push, 1)
typedef struct IMAGE_OPTIONAL_HEADER32 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    ImageBaseOffset32 BaseOfData;
    void* ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    dword SizeOfStackReserve;
    dword SizeOfStackCommit;
    dword SizeOfHeapReserve;
    dword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    IMAGE_DATA_DIRECTORY DataDirectory[16];
} IMAGE_OPTIONAL_HEADER32;
#pragma pack(pop)

// Structure: IMAGE_NT_HEADERS32
#pragma pack(push, 1)
typedef struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    IMAGE_FILE_HEADER FileHeader;
    IMAGE_OPTIONAL_HEADER32 OptionalHeader;
} IMAGE_NT_HEADERS32;
#pragma pack(pop)

// Structure: IMAGE_RESOURCE_DATA_ENTRY
#pragma pack(push, 1)
typedef struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
} IMAGE_RESOURCE_DATA_ENTRY;
#pragma pack(pop)

// Structure: IMAGE_RESOURCE_DIRECTORY
#pragma pack(push, 1)
typedef struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
} IMAGE_RESOURCE_DIRECTORY;
#pragma pack(pop)

// Structure: IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct
typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory : 31;
    dword DataIsDirectory : 1;
} IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

// Union: IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion
#pragma pack(push, 1)
typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
} IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;
#pragma pack(pop)

// Structure: IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct
typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset : 31;
    dword NameIsString : 1;
} IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

// Union: IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion
#pragma pack(push, 1)
typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
} IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;
#pragma pack(pop)

// Structure: IMAGE_RESOURCE_DIRECTORY_ENTRY
#pragma pack(push, 1)
typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY {
    IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
} IMAGE_RESOURCE_DIRECTORY_ENTRY;
#pragma pack(pop)

// Union: Misc
#pragma pack(push, 1)
typedef union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
} Misc;
#pragma pack(pop)

// Enum: SectionFlags
enum {
    IMAGE_SCN_TYPE_NO_PAD = 8,
    IMAGE_SCN_RESERVED_0001 = 16,
    IMAGE_SCN_CNT_CODE = 32,
    IMAGE_SCN_CNT_INITIALIZED_DATA = 64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA = 128,
    IMAGE_SCN_LNK_OTHER = 256,
    IMAGE_SCN_LNK_INFO = 512,
    IMAGE_SCN_RESERVED_0040 = 1024,
    IMAGE_SCN_LNK_REMOVE = 2048,
    IMAGE_SCN_LNK_COMDAT = 4096,
    IMAGE_SCN_GPREL = 32768,
    IMAGE_SCN_MEM_16BIT = 131072,
    IMAGE_SCN_MEM_PURGEABLE = 131072,
    IMAGE_SCN_MEM_LOCKED = 262144,
    IMAGE_SCN_MEM_PRELOAD = 524288,
    IMAGE_SCN_ALIGN_1BYTES = 1048576,
    IMAGE_SCN_ALIGN_2BYTES = 2097152,
    IMAGE_SCN_ALIGN_4BYTES = 3145728,
    IMAGE_SCN_ALIGN_8BYTES = 4194304,
    IMAGE_SCN_ALIGN_16BYTES = 5242880,
    IMAGE_SCN_ALIGN_32BYTES = 6291456,
    IMAGE_SCN_ALIGN_64BYTES = 7340032,
    IMAGE_SCN_ALIGN_128BYTES = 8388608,
    IMAGE_SCN_ALIGN_256BYTES = 9437184,
    IMAGE_SCN_ALIGN_512BYTES = 10485760,
    IMAGE_SCN_ALIGN_1024BYTES = 11534336,
    IMAGE_SCN_ALIGN_2048BYTES = 12582912,
    IMAGE_SCN_ALIGN_4096BYTES = 13631488,
    IMAGE_SCN_ALIGN_8192BYTES = 14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL = 16777216,
    IMAGE_SCN_MEM_DISCARDABLE = 33554432,
    IMAGE_SCN_MEM_NOT_CACHED = 67108864,
    IMAGE_SCN_MEM_NOT_PAGED = 134217728,
    IMAGE_SCN_MEM_SHARED = 268435456,
    IMAGE_SCN_MEM_EXECUTE = 536870912,
    IMAGE_SCN_MEM_READ = 1073741824,
    IMAGE_SCN_MEM_WRITE = 2147483648
};
typedef int SectionFlags;

// Structure: IMAGE_SECTION_HEADER
#pragma pack(push, 1)
typedef struct IMAGE_SECTION_HEADER {
    char Name[8];
    Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    SectionFlags Characteristics;
} IMAGE_SECTION_HEADER;
#pragma pack(pop)

// Structure: StringFileInfo
#pragma pack(push, 1)
typedef struct StringFileInfo {
    word wLength;
    word wValueLength;
    word wType;
} StringFileInfo;
#pragma pack(pop)

// Structure: StringInfo
#pragma pack(push, 1)
typedef struct StringInfo {
    word wLength;
    word wValueLength;
    word wType;
} StringInfo;
#pragma pack(pop)

// Structure: StringTable
#pragma pack(push, 1)
typedef struct StringTable {
    word wLength;
    word wValueLength;
    word wType;
} StringTable;
#pragma pack(pop)

// Structure: VS_VERSION_INFO
#pragma pack(push, 1)
typedef struct VS_VERSION_INFO {
    word StructLength;
    word ValueLength;
    word StructType;
    char Info[32];
    byte Padding[2];
    dword Signature;
    word StructVersion[2];
    word FileVersion[4];
    word ProductVersion[4];
    dword FileFlagsMask[2];
    dword FileFlags;
    dword FileOS;
    dword FileType;
    dword FileSubtype;
    dword FileTimestamp;
} VS_VERSION_INFO;
#pragma pack(pop)

// Structure: Var
#pragma pack(push, 1)
typedef struct Var {
    word wLength;
    word wValueLength;
    word wType;
} Var;
#pragma pack(pop)

// Structure: VarFileInfo
#pragma pack(push, 1)
typedef struct VarFileInfo {
    word wLength;
    word wValueLength;
    word wType;
} VarFileInfo;
#pragma pack(pop)

