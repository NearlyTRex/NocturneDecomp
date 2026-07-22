#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// WINUSER - System Header
// =============================================================================

// Typedef: HBITMAP
// pointer to HBITMAP__
typedef struct HBITMAP__* HBITMAP;

// Structure: HBITMAP__
typedef struct HBITMAP__ {
    int unused;
} HBITMAP__;

// Typedef: HFONT
// pointer to HFONT__
typedef struct HFONT__* HFONT;

// Structure: HFONT__
typedef struct HFONT__ {
    int unused;
} HFONT__;

// Typedef: HWND
// Signed Integer (compiler-specific size)
typedef int HWND;

// Function Definition: IS_SPECIAL_DEVICE_FUNC
typedef int IS_SPECIAL_DEVICE_FUNC(int file_handle_index);

// Typedef: LPISSPECIALDEVICE
// pointer to IS_SPECIAL_DEVICE_FUNC
typedef IS_SPECIAL_DEVICE_FUNC* LPISSPECIALDEVICE;

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

