#pragma once

// =============================================================================
// BASETYPES - Primitive Type Definitions
// =============================================================================
// This header defines Ghidra's built-in types and Windows primitives.
// It must be included first to break circular dependencies between system headers.

// Standard includes
#include <stddef.h>  // for wchar_t, size_t, ptrdiff_t
#include <stdint.h>  // for intptr_t/uintptr_t (pointer-width types)
#include <stdbool.h>  // for bool
#include <stdarg.h>  // for va_list (24-byte __va_list_tag[1] on x86-64)

// =============================================================================
// Integer width model: Win32 LLP64 (NOT the host's data model)
// =============================================================================
// The binary was compiled for 32-bit Watcom where `long` == 4 bytes. On a
// 64-bit Linux host `long` == 8 (LP64), which would silently grow every
// struct that has a `long`/`ulong`/`dword`/`DWORD`/`ULONG` field and break
// every baked 32-bit layout, memcpy size, and raw fread/fwrite record.
// So the fixed-width integer typedefs below are pinned to 32 bits (matching
// real Win32 semantics, where DWORD/LONG are 32-bit even on Win64). Only the
// *_PTR / SIZE_T family is genuinely pointer-width and uses intptr_t/size_t.
// A literal `long`/`unsigned long` field cannot be pinned here (it's a builtin
// keyword) \u2014 retype those few fields to a fixed-width type in Ghidra instead.

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
#define __cdecl_scratch
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
#define __stack5_esi
#define __stack_esi
#define __stackdbl_esi
#define __stack2_esi
#define __stack3_esi
#define __stack_esi_edi
#define __stack2_esi_edi
#define __esi
#define __edx
#define __edi_esi_ebx
#define __ecxcall
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
#define __mmx_save
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
typedef unsigned long ulong;     // MUST stay `unsigned long`: glibc <sys/types.h> defines
                                 // this BSD alias identically; a mismatch is a redefinition
                                 // error. 8 bytes @64-bit \u2014 retype `ulong` struct FIELDS to
                                 // `uint` in Ghidra instead (same as literal `long`).
typedef long long longlong;
typedef unsigned long long ulonglong;

// Lowercase aliases (Ghidra sometimes uses these)
typedef unsigned int dword;      // 32-bit (Win32 DWORD width)
typedef unsigned short word;

// Undefined types (placeholder bytes for unknown data)
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;

// Generic pointer type
typedef void* pointer;

// Ghidra string types. Typed `const char *` on purpose: Ghidra auto-detects
// some statically-initialized buffers as C string literals and emits them as
// TerminatedCString (e.g. g_RendererDllName = "trid3d.dll"). If the game
// actually writes to that buffer at runtime \u2014 which it does, because the
// original binary declared it as a fixed-size `char[N]` \u2014 we want the WRITE
// call site to fail to compile (via -Wincompatible-pointer-types / -Werror),
// not silently SEGV at runtime when the literal turns out to live in .rodata.
// Real const strings that are only read (e.g. g_AxisLabelChars="XYZ") still
// compile fine. Fix a compile error by retyping the global in Ghidra from
// `char *` to `char[N]`, then re-exporting.
typedef const char* TerminatedCString;
typedef const wchar_t* TerminatedUnicode;
typedef const char* string;  // Ghidra's generic string type
typedef const wchar_t* unicode;  // Ghidra null-terminated UTF-16 string
typedef const wchar_t* PascalUnicode;  // Ghidra length-prefixed UTF-16 string

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
typedef unsigned int DWORD;      // 32-bit even on Win64 (LLP64)
typedef short SHORT;
typedef int LONG;               // 32-bit even on Win64 (LLP64)
typedef int INT;
typedef unsigned int UINT;
typedef unsigned short USHORT;
typedef unsigned int ULONG;     // 32-bit even on Win64 (LLP64)
typedef unsigned char UCHAR;
typedef float FLOAT;
typedef double DOUBLE;
typedef unsigned short WCHAR;
typedef long long LONGLONG;
typedef unsigned long long ULONGLONG;
typedef unsigned long long QWORD;

// Pointer-sized types (genuinely pointer-width: 4 bytes @32-bit, 8 @64-bit)
typedef intptr_t LONG_PTR;
typedef uintptr_t ULONG_PTR;
typedef uintptr_t DWORD_PTR;
typedef size_t SIZE_T;
typedef uintptr_t UINT_PTR;
typedef intptr_t INT_PTR;

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
// Windows PE Resource Placeholders (not recorded by Ghidra)
// =============================================================================
//
// These resource types are referenced by decompiled winMain but Ghidra
// does not track their actual layout \u2014 variable-size BYTE blobs. Kept
// as hand-written placeholders. All other PE/DOS structs (IMAGE_*,
// VS_VERSION_INFO, etc.) are auto-generated from data_types.json into
// system/pe.h and system/dos.h.

typedef struct IconResource {
    BYTE data[1]; // Variable size icon data
} IconResource;

typedef struct MenuResource {
    BYTE data[1]; // Variable size menu data
} MenuResource;

typedef struct GroupIconResource {
    BYTE data[1]; // Variable size group icon data
} GroupIconResource;

// 32-bit Image Base Offset Relative Pointer (Ghidra typedef).
// Ghidra records the base type as void*, but these fields are
// initialized with integer RVAs in the decompiled globals, so we
// emit it as a 32-bit integer to allow direct literal initialization.
typedef dword ImageBaseOffset32;

