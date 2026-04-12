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
#pragma pack(push, 1)
typedef struct _COORD {
    SHORT X;
    SHORT Y;
} __attribute__((aligned(2))) _COORD;
#pragma pack(pop)

// Typedef: COORD
typedef _COORD COORD;

// Structure: _FOCUS_EVENT_RECORD
#pragma pack(push, 1)
typedef struct _FOCUS_EVENT_RECORD {
    BOOL bSetFocus;
} __attribute__((aligned(4))) _FOCUS_EVENT_RECORD;
#pragma pack(pop)

// Typedef: FOCUS_EVENT_RECORD
typedef _FOCUS_EVENT_RECORD FOCUS_EVENT_RECORD;

// Structure: _MENU_EVENT_RECORD
#pragma pack(push, 1)
typedef struct _MENU_EVENT_RECORD {
    UINT dwCommandId;
} __attribute__((aligned(4))) _MENU_EVENT_RECORD;
#pragma pack(pop)

// Typedef: MENU_EVENT_RECORD
typedef _MENU_EVENT_RECORD MENU_EVENT_RECORD;

// Structure: _MOUSE_EVENT_RECORD
#pragma pack(push, 1)
typedef struct _MOUSE_EVENT_RECORD {
    COORD dwMousePosition;
    DWORD dwButtonState;
    DWORD dwControlKeyState;
    DWORD dwEventFlags;
} __attribute__((aligned(4))) _MOUSE_EVENT_RECORD;
#pragma pack(pop)

// Typedef: MOUSE_EVENT_RECORD
typedef _MOUSE_EVENT_RECORD MOUSE_EVENT_RECORD;

// Structure: _WINDOW_BUFFER_SIZE_RECORD
#pragma pack(push, 1)
typedef struct _WINDOW_BUFFER_SIZE_RECORD {
    COORD dwSize;
} __attribute__((aligned(2))) _WINDOW_BUFFER_SIZE_RECORD;
#pragma pack(pop)

// Typedef: WINDOW_BUFFER_SIZE_RECORD
typedef _WINDOW_BUFFER_SIZE_RECORD WINDOW_BUFFER_SIZE_RECORD;

// Union: _union_955
#pragma pack(push, 1)
typedef union _union_955 {
    WCHAR UnicodeChar;
    CHAR AsciiChar;
} __attribute__((aligned(2))) _union_955;
#pragma pack(pop)

// Structure: _KEY_EVENT_RECORD
#pragma pack(push, 1)
typedef struct _KEY_EVENT_RECORD {
    BOOL bKeyDown;
    WORD wRepeatCount;
    WORD wVirtualKeyCode;
    WORD wVirtualScanCode;
    _union_955 uChar;
    DWORD dwControlKeyState;
} __attribute__((aligned(4))) _KEY_EVENT_RECORD;
#pragma pack(pop)

// Typedef: KEY_EVENT_RECORD
typedef _KEY_EVENT_RECORD KEY_EVENT_RECORD;

// Union: _union_961
#pragma pack(push, 1)
typedef union _union_961 {
    KEY_EVENT_RECORD KeyEvent;
    MOUSE_EVENT_RECORD MouseEvent;
    WINDOW_BUFFER_SIZE_RECORD WindowBufferSizeEvent;
    MENU_EVENT_RECORD MenuEvent;
    FOCUS_EVENT_RECORD FocusEvent;
} __attribute__((aligned(4))) _union_961;
#pragma pack(pop)

// Structure: _INPUT_RECORD
#pragma pack(push, 1)
typedef struct _INPUT_RECORD {
    WORD EventType;
    _union_961 Event;
} __attribute__((aligned(4))) _INPUT_RECORD;
#pragma pack(pop)

