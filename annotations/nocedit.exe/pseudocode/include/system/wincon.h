#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// WINCON - System Header
// =============================================================================

// Typedef: PINPUT_RECORD
// pointer to _INPUT_RECORD
typedef struct _INPUT_RECORD* PINPUT_RECORD;

// Structure: SIOControlBlock
typedef struct SIOControlBlock {
    HANDLE standard_handles[5];
    dword console_mode;
    dword io_flags;
    HANDLE extended_handles[15];
} SIOControlBlock;

// Structure: _COORD
#pragma pack(push, 2)
typedef struct _COORD {
    SHORT X;
    SHORT Y;
} _COORD;
#pragma pack(pop)

// Typedef: COORD
typedef _COORD COORD;

// Structure: _FOCUS_EVENT_RECORD
typedef struct _FOCUS_EVENT_RECORD {
    BOOL bSetFocus;
} _FOCUS_EVENT_RECORD;

// Typedef: FOCUS_EVENT_RECORD
typedef _FOCUS_EVENT_RECORD FOCUS_EVENT_RECORD;

// Structure: _MENU_EVENT_RECORD
typedef struct _MENU_EVENT_RECORD {
    UINT dwCommandId;
} _MENU_EVENT_RECORD;

// Typedef: MENU_EVENT_RECORD
typedef _MENU_EVENT_RECORD MENU_EVENT_RECORD;

// Structure: _MOUSE_EVENT_RECORD
typedef struct _MOUSE_EVENT_RECORD {
    COORD dwMousePosition;
    DWORD dwButtonState;
    DWORD dwControlKeyState;
    DWORD dwEventFlags;
} _MOUSE_EVENT_RECORD;

// Typedef: MOUSE_EVENT_RECORD
typedef _MOUSE_EVENT_RECORD MOUSE_EVENT_RECORD;

// Structure: _WINDOW_BUFFER_SIZE_RECORD
#pragma pack(push, 2)
typedef struct _WINDOW_BUFFER_SIZE_RECORD {
    COORD dwSize;
} _WINDOW_BUFFER_SIZE_RECORD;
#pragma pack(pop)

// Typedef: WINDOW_BUFFER_SIZE_RECORD
typedef _WINDOW_BUFFER_SIZE_RECORD WINDOW_BUFFER_SIZE_RECORD;

// Union: _union_955
#pragma pack(push, 2)
typedef union _union_955 {
    WCHAR UnicodeChar;
    CHAR AsciiChar;
} _union_955;
#pragma pack(pop)

// Structure: _KEY_EVENT_RECORD
typedef struct _KEY_EVENT_RECORD {
    BOOL bKeyDown;
    WORD wRepeatCount;
    WORD wVirtualKeyCode;
    WORD wVirtualScanCode;
    _union_955 uChar;
    DWORD dwControlKeyState;
} _KEY_EVENT_RECORD;

// Typedef: KEY_EVENT_RECORD
typedef _KEY_EVENT_RECORD KEY_EVENT_RECORD;

// Union: _union_961
typedef union _union_961 {
    KEY_EVENT_RECORD KeyEvent;
    MOUSE_EVENT_RECORD MouseEvent;
    WINDOW_BUFFER_SIZE_RECORD WindowBufferSizeEvent;
    MENU_EVENT_RECORD MenuEvent;
    FOCUS_EVENT_RECORD FocusEvent;
} _union_961;

// Structure: _INPUT_RECORD
typedef struct _INPUT_RECORD {
    WORD EventType;
    _union_961 Event;
} _INPUT_RECORD;

