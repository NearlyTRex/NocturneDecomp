#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// WINDEF - System Header
// =============================================================================

// Function Definition: FARPROC_FUNC
typedef int FARPROC_FUNC(void);

// Typedef: FARPROC
// pointer to FARPROC_FUNC
typedef FARPROC_FUNC* FARPROC;

// Typedef: HBITMAP
// pointer to HBITMAP__
typedef struct HBITMAP__* HBITMAP;

// Structure: HBITMAP__
typedef struct HBITMAP__ {
    int unused;
} HBITMAP__;

// Typedef: HBRUSH
// pointer to HBRUSH__
typedef struct HBRUSH__* HBRUSH;

// Structure: HBRUSH__
typedef struct HBRUSH__ {
    int unused;
} HBRUSH__;

// Typedef: HDC
// pointer to HDC__
typedef struct HDC__* HDC;

// Structure: HDC__
typedef struct HDC__ {
    int unused;
} HDC__;

// Typedef: HFONT
// pointer to HFONT__
typedef struct HFONT__* HFONT;

// Structure: HFONT__
typedef struct HFONT__ {
    int unused;
} HFONT__;

// Typedef: HGDIOBJ
// pointer to void
typedef void* HGDIOBJ;

// Typedef: HGLOBAL
// pointer to void
typedef HANDLE HGLOBAL;

// Typedef: HICON
// pointer to HICON__
typedef struct HICON__* HICON;

// Structure: HICON__
typedef struct HICON__ {
    int unused;
} HICON__;

// Typedef: HCURSOR
// pointer to HICON__
typedef HICON HCURSOR;

// Typedef: HINSTANCE
// pointer to HINSTANCE__
typedef struct HINSTANCE__* HINSTANCE;

// Structure: HINSTANCE__
typedef struct HINSTANCE__ {
    int unused;
} HINSTANCE__;

// Typedef: HKEY
// pointer to HKEY__
typedef struct HKEY__* HKEY;

// Structure: HKEY__
typedef struct HKEY__ {
    void* unused;
} HKEY__;

// Typedef: HMENU
// pointer to HMENU__
typedef struct HMENU__* HMENU;

// Structure: HMENU__
typedef struct HMENU__ {
    int unused;
} HMENU__;

// Typedef: HMODULE
// pointer to HINSTANCE__
typedef HINSTANCE HMODULE;

// Typedef: LPBOOL
// pointer to BOOL
typedef BOOL* LPBOOL;

// Typedef: LPFILETIME
// pointer to _FILETIME
typedef struct _FILETIME* LPFILETIME;

// Typedef: LPHANDLE
// pointer to HANDLE
typedef HANDLE* LPHANDLE;

// Typedef: LPRECT
// pointer to tagRECT
typedef struct tagRECT* LPRECT;

// Typedef: LPSIZE
// pointer to tagSIZE
typedef struct tagSIZE* LPSIZE;

// Typedef: LPWORD
// pointer to WORD
typedef WORD* LPWORD;

// Typedef: PHKEY
// pointer to HKEY
typedef HKEY* PHKEY;

// Structure: _FILETIME
typedef struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
} _FILETIME;

// Typedef: FILETIME
typedef _FILETIME FILETIME;

// Typedef: PFILETIME
// pointer to FILETIME
typedef FILETIME* PFILETIME;

// Structure: tagPOINT
typedef struct tagPOINT {
    LONG x;
    LONG y;
} tagPOINT;

// Typedef: POINT
typedef tagPOINT POINT;

// Structure: tagRECT
typedef struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
} tagRECT;

// Typedef: RECT
typedef tagRECT RECT;

// Structure: tagSIZE
typedef struct tagSIZE {
    LONG cx;
    LONG cy;
} tagSIZE;

