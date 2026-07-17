#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// WINDEF - System Header
// =============================================================================

// Function Definition: FARPROC
typedef int FARPROC(void);

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

// Typedef: HMONITOR
// pointer to void
typedef void* HMONITOR;

// Typedef: HWND
// pointer to HWND__
typedef struct HWND__* HWND;

// Structure: HWND__
typedef struct HWND__ {
    int unused;
} HWND__;

// Typedef: LPBOOL
// pointer to BOOL
typedef BOOL* LPBOOL;

// Typedef: LPWORD
// pointer to WORD
typedef WORD* LPWORD;

