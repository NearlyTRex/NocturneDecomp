#pragma once

// Union: _LARGE_INTEGER
typedef union _LARGE_INTEGER {
    _struct_19 s;
    _struct_20 u;
    LONGLONG QuadPart;
} _LARGE_INTEGER;

// Union: _union_518
typedef union _union_518 {
    _struct_519 s;
    PVOID Pointer;
} _union_518;

// Union: _union_955
typedef union _union_955 {
    WCHAR UnicodeChar;
    CHAR AsciiChar;
} _union_955;

// Union: _union_961
typedef union _union_961 {
    KEY_EVENT_RECORD KeyEvent;
    MOUSE_EVENT_RECORD MouseEvent;
    WINDOW_BUFFER_SIZE_RECORD WindowBufferSizeEvent;
    MENU_EVENT_RECORD MenuEvent;
    FOCUS_EVENT_RECORD FocusEvent;
} _union_961;

