#pragma once

// Structure: HICON__
typedef struct HICON__ {
    int unused;
} HICON__;

// Structure: HMENU__
typedef struct HMENU__ {
    int unused;
} HMENU__;

// Structure: tagMSG
typedef struct tagMSG {
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
} tagMSG;

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

