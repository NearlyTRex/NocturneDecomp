#pragma once

// Structure: _COORD
typedef struct _COORD {
    SHORT X;
    SHORT Y;
} _COORD;

// Structure: _FOCUS_EVENT_RECORD
typedef struct _FOCUS_EVENT_RECORD {
    BOOL bSetFocus;
} _FOCUS_EVENT_RECORD;

// Structure: _INPUT_RECORD
typedef struct _INPUT_RECORD {
    WORD EventType;
    _union_961 Event;
} _INPUT_RECORD;

// Structure: _KEY_EVENT_RECORD
typedef struct _KEY_EVENT_RECORD {
    BOOL bKeyDown;
    WORD wRepeatCount;
    WORD wVirtualKeyCode;
    WORD wVirtualScanCode;
    _union_955 uChar;
    DWORD dwControlKeyState;
} _KEY_EVENT_RECORD;

// Structure: _MENU_EVENT_RECORD
typedef struct _MENU_EVENT_RECORD {
    UINT dwCommandId;
} _MENU_EVENT_RECORD;

// Structure: _MOUSE_EVENT_RECORD
typedef struct _MOUSE_EVENT_RECORD {
    COORD dwMousePosition;
    DWORD dwButtonState;
    DWORD dwControlKeyState;
    DWORD dwEventFlags;
} _MOUSE_EVENT_RECORD;

