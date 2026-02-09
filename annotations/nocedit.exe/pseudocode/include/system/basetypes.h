#pragma once

// =============================================================================
// BASETYPES - Primitive Type Definitions
// =============================================================================
// This header defines Ghidra's built-in types and Windows primitives.
// It must be included first to break circular dependencies between system headers.

// Standard includes
#include <stddef.h>  // for wchar_t
#include <stdbool.h>  // for bool

// =============================================================================
// Calling Convention Macros
// =============================================================================
// Calling conventions parsed from x86watcom.cspec - define as empty for non-MSVC compilers
#ifndef _MSC_VER
// Standard Windows calling conventions
#define __cdecl
#define __stdcall
#define __fastcall
#define __thiscall
#define __vectorcall
// Calling conventions from x86watcom.cspec
#define __watcallRegister
#define __watcallStack
#define __cdecl0
#define __cdecl4
#define __cdecl8
#define __cdecl12
#define __cdecl16
#define __cdecl20
#define __cdecl24
#define __cdecl28
#define __cdecl32
#define __cdecl36
#define __cdecl40
#define __stack_esi
#define __stack2_esi
#define __stack3_esi
#define __stack_esi_edi
#define __stack2_esi_edi
#define __edi_esi_ebx
#define __syscall
#define __fpustack
#define __fpustack_safe
#define __mathinternal
#define __crtmath
#define __fpureg
#define __fpureg_safe
#define __softfp_double
#define __fpu_thunk
#define __stk_probe
// Unknown conventions
#define __unknown
#endif

// =============================================================================
// Ghidra Primitive Types
// =============================================================================

// Sized unsigned types
typedef unsigned char byte;
typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef long long longlong;
typedef unsigned long long ulonglong;

// Lowercase aliases (Ghidra sometimes uses these)
typedef unsigned long dword;
typedef unsigned short word;

// Undefined types (placeholder bytes for unknown data)
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;

// Generic pointer type
typedef void* pointer;

// Ghidra string types (const for C++ string literal compatibility)
typedef const char* TerminatedCString;
typedef const wchar_t* TerminatedUnicode;
typedef const char* string;  // Ghidra's generic string type

// Extended precision float (x87 80-bit)
typedef long double float10;

// Unknown byte types (Ghidra's unkbyteN = N bytes of unknown data)
typedef long double unkbyte10;  // 10-byte, typically x87 80-bit float returns

// =============================================================================
// Windows Primitive Types
// =============================================================================
// These are the fundamental Windows types that other system headers depend on.
// Defined here to break circular dependencies.

// Basic Windows integer types
typedef int BOOL;
typedef unsigned char BYTE;
typedef char CHAR;
typedef unsigned short WORD;
typedef unsigned long DWORD;
typedef short SHORT;
typedef long LONG;
typedef int INT;
typedef unsigned int UINT;
typedef unsigned short USHORT;
typedef unsigned long ULONG;
typedef unsigned char UCHAR;
typedef float FLOAT;
typedef double DOUBLE;
typedef wchar_t WCHAR;
typedef long long LONGLONG;
typedef unsigned long long ULONGLONG;
typedef unsigned long long QWORD;

// Pointer-sized types (32-bit)
typedef long LONG_PTR;
typedef unsigned long ULONG_PTR;
typedef unsigned long DWORD_PTR;
typedef unsigned long SIZE_T;
typedef unsigned int UINT_PTR;
typedef int INT_PTR;

// Handle types
typedef void* HANDLE;
typedef void* PVOID;
typedef void* LPVOID;
typedef const void* LPCVOID;

// String pointer types
typedef char* LPSTR;
typedef const char* LPCSTR;
typedef wchar_t* LPWSTR;
typedef const wchar_t* LPCWSTR;
typedef BYTE* LPBYTE;
typedef DWORD* LPDWORD;

// Common typedefs
typedef DWORD COLORREF;
typedef UINT WPARAM;
typedef LONG LPARAM;
typedef LONG LRESULT;
typedef long HRESULT;
typedef WORD ATOM;

// =============================================================================
// Windows PE Header Structures (Ghidra built-ins)
// =============================================================================

typedef struct IMAGE_FILE_HEADER {
    WORD Machine;
    WORD NumberOfSections;
    DWORD TimeDateStamp;
    DWORD PointerToSymbolTable;
    DWORD NumberOfSymbols;
    WORD SizeOfOptionalHeader;
    WORD Characteristics;
} IMAGE_FILE_HEADER;

typedef struct IMAGE_DATA_DIRECTORY {
    DWORD VirtualAddress;
    DWORD Size;
} IMAGE_DATA_DIRECTORY;

typedef struct IMAGE_OPTIONAL_HEADER32 {
    WORD Magic;
    BYTE MajorLinkerVersion;
    BYTE MinorLinkerVersion;
    DWORD SizeOfCode;
    DWORD SizeOfInitializedData;
    DWORD SizeOfUninitializedData;
    DWORD AddressOfEntryPoint;
    DWORD BaseOfCode;
    DWORD BaseOfData;
    void* ImageBase;
    DWORD SectionAlignment;
    DWORD FileAlignment;
    WORD MajorOperatingSystemVersion;
    WORD MinorOperatingSystemVersion;
    WORD MajorImageVersion;
    WORD MinorImageVersion;
    WORD MajorSubsystemVersion;
    WORD MinorSubsystemVersion;
    DWORD Win32VersionValue;
    DWORD SizeOfImage;
    DWORD SizeOfHeaders;
    DWORD CheckSum;
    WORD Subsystem;
    WORD DllCharacteristics;
    DWORD SizeOfStackReserve;
    DWORD SizeOfStackCommit;
    DWORD SizeOfHeapReserve;
    DWORD SizeOfHeapCommit;
    DWORD LoaderFlags;
    DWORD NumberOfRvaAndSizes;
    IMAGE_DATA_DIRECTORY DataDirectory[16];
} IMAGE_OPTIONAL_HEADER32;

typedef struct IMAGE_NT_HEADERS32 {
    char Signature[4]; // "PE\0\0"
    IMAGE_FILE_HEADER FileHeader;
    IMAGE_OPTIONAL_HEADER32 OptionalHeader;
} IMAGE_NT_HEADERS32;

typedef struct IMAGE_SECTION_HEADER {
    char Name[8];
    DWORD Misc; // Union: PhysicalAddress or VirtualSize
    DWORD VirtualAddress;
    DWORD SizeOfRawData;
    DWORD PointerToRawData;
    DWORD PointerToRelocations;
    DWORD PointerToLinenumbers;
    WORD NumberOfRelocations;
    WORD NumberOfLinenumbers;
    DWORD Characteristics;
} IMAGE_SECTION_HEADER;

typedef struct IMAGE_RESOURCE_DIRECTORY {
    DWORD Characteristics;
    DWORD TimeDateStamp;
    WORD MajorVersion;
    WORD MinorVersion;
    WORD NumberOfNamedEntries;
    WORD NumberOfIdEntries;
} IMAGE_RESOURCE_DIRECTORY;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY {
    DWORD Name;
    DWORD OffsetToData;
} IMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef struct IMAGE_RESOURCE_DATA_ENTRY {
    DWORD OffsetToData;
    DWORD Size;
    DWORD CodePage;
    DWORD Reserved;
} IMAGE_RESOURCE_DATA_ENTRY;

// =============================================================================
// Windows PE Resource Types (Ghidra built-ins)
// =============================================================================

// Placeholder types for PE resources - actual structure varies by resource
typedef struct IconResource {
    BYTE data[1]; // Variable size icon data
} IconResource;

typedef struct MenuResource {
    BYTE data[1]; // Variable size menu data
} MenuResource;

typedef struct GroupIconResource {
    BYTE data[1]; // Variable size group icon data
} GroupIconResource;

typedef struct VS_VERSION_INFO {
    WORD StructLength;
    WORD ValueLength;
    WORD StructType;
    WCHAR Info[16]; // "VS_VERSION_INFO" key
    BYTE Padding[2];
    DWORD Signature;
    WORD StructVersion[2];
    WORD FileVersion[4];
    WORD ProductVersion[4];
    DWORD FileFlagsMask[2];
    DWORD FileFlags;
    DWORD FileOS;
    DWORD FileType;
    DWORD FileSubtype;
    DWORD FileTimestamp;
} VS_VERSION_INFO;

typedef struct StringFileInfo {
    WORD wLength;
    WORD wValueLength;
    WORD wType;
} StringFileInfo;

typedef struct StringInfo {
    WORD wLength;
    WORD wValueLength;
    WORD wType;
} StringInfo;

typedef struct StringTable {
    WORD wLength;
    WORD wValueLength;
    WORD wType;
} StringTable;

typedef struct Var {
    WORD wLength;
    WORD wValueLength;
    WORD wType;
} Var;

typedef struct VarFileInfo {
    WORD wLength;
    WORD wValueLength;
    WORD wType;
} VarFileInfo;

// PE resource directory entry (extended types)
typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory;
    dword DataIsDirectory;
} IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct _IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
} IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

// 32-bit Image Base Offset Relative Pointer
typedef void* ImageBaseOffset32;

