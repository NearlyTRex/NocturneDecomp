#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/windef.h"

// =============================================================================
// WINUSER - System Header
// =============================================================================

// Typedef: HWND
// Signed Integer (compiler-specific size)
typedef int HWND;

// Structure: HWND__
typedef struct HWND__ {
    int unused;
} HWND__;

// Function Definition: IS_SPECIAL_DEVICE_FUNC
typedef int IS_SPECIAL_DEVICE_FUNC(int file_handle_index);

// Typedef: LPISSPECIALDEVICE
// pointer to IS_SPECIAL_DEVICE_FUNC
typedef IS_SPECIAL_DEVICE_FUNC* LPISSPECIALDEVICE;

// Typedef: LPMSG
// pointer to tagMSG
typedef struct tagMSG* LPMSG;

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
typedef struct tagMSG {
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
} tagMSG;

// Typedef: MSG
typedef tagMSG MSG;

// Structure: tagWNDCLASSA
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
} tagWNDCLASSA;

// Typedef: WNDCLASSA
typedef tagWNDCLASSA WNDCLASSA;

