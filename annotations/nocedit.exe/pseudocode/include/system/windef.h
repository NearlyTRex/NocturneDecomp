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
typedef struct HINSTANCE__ {
    int unused;
} HINSTANCE__;

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
typedef struct tagPOINT {
    LONG x;
    LONG y;
} tagPOINT;

