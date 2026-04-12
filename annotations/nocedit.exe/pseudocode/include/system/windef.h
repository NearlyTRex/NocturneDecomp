#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// WINDEF - System Header
// =============================================================================

// Typedef: HINSTANCE
// pointer to HINSTANCE__
typedef struct HINSTANCE__* HINSTANCE;

// Structure: HINSTANCE__
#pragma pack(push, 1)
typedef struct HINSTANCE__ {
    int unused;
} __attribute__((aligned(4))) HINSTANCE__;
#pragma pack(pop)

// Typedef: HMODULE
// pointer to HINSTANCE__
typedef HINSTANCE HMODULE;

// Typedef: LPBOOL
// pointer to BOOL
typedef BOOL* LPBOOL;

// Typedef: LPCH
// pointer to CHAR
typedef CHAR* LPCH;

// Typedef: LPHANDLE
// pointer to HANDLE
typedef HANDLE* LPHANDLE;

// Typedef: LPWORD
// pointer to WORD
typedef WORD* LPWORD;

// Typedef: PHANDLE
// pointer to HANDLE
typedef HANDLE* PHANDLE;

// Structure: tagPOINT
#pragma pack(push, 1)
typedef struct tagPOINT {
    LONG x;
    LONG y;
} __attribute__((aligned(4))) tagPOINT;
#pragma pack(pop)

