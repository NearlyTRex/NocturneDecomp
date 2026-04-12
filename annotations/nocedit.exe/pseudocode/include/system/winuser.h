#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/windef.h"

// =============================================================================
// WINUSER - System Header
// =============================================================================

// Typedef: HBITMAP
// pointer to HBITMAP__
typedef struct HBITMAP__* HBITMAP;

// Structure: HBITMAP__
#pragma pack(push, 1)
typedef struct HBITMAP__ {
    int unused;
} __attribute__((aligned(4))) HBITMAP__;
#pragma pack(pop)

// Typedef: HBRUSH
// pointer to HBRUSH__
typedef struct HBRUSH__* HBRUSH;

// Structure: HBRUSH__
#pragma pack(push, 1)
typedef struct HBRUSH__ {
    int unused;
} __attribute__((aligned(4))) HBRUSH__;
#pragma pack(pop)

// Typedef: HFONT
// pointer to HFONT__
typedef struct HFONT__* HFONT;

// Structure: HFONT__
#pragma pack(push, 1)
typedef struct HFONT__ {
    int unused;
} __attribute__((aligned(4))) HFONT__;
#pragma pack(pop)

// Typedef: HICON
// pointer to HICON__
typedef struct HICON__* HICON;

// Structure: HICON__
#pragma pack(push, 1)
typedef struct HICON__ {
    int unused;
} __attribute__((aligned(4))) HICON__;
#pragma pack(pop)

// Typedef: HCURSOR
// pointer to HICON__
typedef HICON HCURSOR;

// Typedef: HMENU
// pointer to HMENU__
typedef struct HMENU__* HMENU;

// Structure: HMENU__
#pragma pack(push, 1)
typedef struct HMENU__ {
    int unused;
} __attribute__((aligned(4))) HMENU__;
#pragma pack(pop)

// Typedef: HWND
// Signed Integer (compiler-specific size)
typedef int HWND;

// Structure: HWND__
#pragma pack(push, 1)
typedef struct HWND__ {
    int unused;
} __attribute__((aligned(4))) HWND__;
#pragma pack(pop)

// Function Definition: IS_SPECIAL_DEVICE_FUNC
typedef int IS_SPECIAL_DEVICE_FUNC(int file_handle_index);

// Typedef: LPISSPECIALDEVICE
// pointer to IS_SPECIAL_DEVICE_FUNC
typedef IS_SPECIAL_DEVICE_FUNC* LPISSPECIALDEVICE;

// Typedef: LPMSG
// pointer to tagMSG
typedef struct tagMSG* LPMSG;

// Typedef: POINT
typedef tagPOINT POINT;

// Function Definition: SPECIAL_CONSOLE_INPUT_HANDLER_FUNC
typedef int SPECIAL_CONSOLE_INPUT_HANDLER_FUNC(int device_type);

// Function Definition: SPECIAL_CONSOLE_OUTPUT_HANDLER_FUNC
typedef int SPECIAL_CONSOLE_OUTPUT_HANDLER_FUNC(int device_type, int character);

// Function Definition: SPECIAL_DEVICE_CLEANUP_FUNC
typedef int SPECIAL_DEVICE_CLEANUP_FUNC(int fd);

// Function Definition: SPECIAL_DEVICE_CLOSE_FUNC
typedef void SPECIAL_DEVICE_CLOSE_FUNC(int cleanup_result);

// Function Definition: SPECIAL_DEVICE_READ_FUNC
typedef int SPECIAL_DEVICE_READ_FUNC(int device_type, void* buffer, int bytes_to_read);

// Typedef: LPSPECIALDEVICEREAD
// pointer to SPECIAL_DEVICE_READ_FUNC
typedef SPECIAL_DEVICE_READ_FUNC* LPSPECIALDEVICEREAD;

// Function Definition: SPECIAL_DEVICE_WRITE_FUNC
typedef int SPECIAL_DEVICE_WRITE_FUNC(int device_id, void* buffer, int bytes_to_write);

// Typedef: LPSPECIALDEVICEWRITE
// pointer to SPECIAL_DEVICE_WRITE_FUNC
typedef SPECIAL_DEVICE_WRITE_FUNC* LPSPECIALDEVICEWRITE;

// Function Definition: WNDPROC_FUNC
typedef LRESULT WNDPROC_FUNC(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

// Typedef: WNDPROC
// pointer to WNDPROC_FUNC
typedef WNDPROC_FUNC* WNDPROC;

// Structure: tagMSG
#pragma pack(push, 1)
typedef struct tagMSG {
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
} __attribute__((aligned(4))) tagMSG;
#pragma pack(pop)

// Typedef: MSG
typedef tagMSG MSG;

// Structure: tagWNDCLASSA
#pragma pack(push, 1)
typedef struct tagWNDCLASSA {
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCSTR lpszMenuName;
    LPCSTR lpszClassName;
} __attribute__((aligned(4))) tagWNDCLASSA;
#pragma pack(pop)

// Typedef: WNDCLASSA
typedef tagWNDCLASSA WNDCLASSA;

