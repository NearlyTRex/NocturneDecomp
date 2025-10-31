#pragma once

// Function Definition: BringWindowToTop
typedef BOOL (*BringWindowToTop)(HWND hWnd);

// Function Definition: CharUpperBuffA
typedef DWORD (*CharUpperBuffA)(LPSTR lpsz, DWORD cchLength);

// Function Definition: CloseClipboard
typedef BOOL (*CloseClipboard)(void);

// Function Definition: CreateWindowExA
typedef HWND (*CreateWindowExA)(DWORD dwExStyle, LPCSTR lpClassName, LPCSTR lpWindowName, DWORD dwStyle, int X, int Y, int nWidth, int nHeight, HWND hWndParent, HMENU hMenu, HINSTANCE hInstance, LPVOID lpParam);

// Function Definition: DefWindowProcA
typedef LRESULT (*DefWindowProcA)(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);

// Function Definition: DispatchMessageA
typedef LRESULT (*DispatchMessageA)(MSG* lpMsg);

// Function Definition: FindWindowA
typedef HWND (*FindWindowA)(LPCSTR lpClassName, LPCSTR lpWindowName);

// Function Definition: GetClientRect
typedef BOOL (*GetClientRect)(HWND hWnd, LPRECT lpRect);

// Function Definition: GetClipboardData
typedef HANDLE (*GetClipboardData)(UINT uFormat);

// Function Definition: GetKeyNameTextA
typedef int (*GetKeyNameTextA)(long lParam, LPSTR lpString, int cchSize);

// Function Definition: GetLastActivePopup
typedef HWND (*GetLastActivePopup)(HWND hWnd);

// Function Definition: InvalidateRect
typedef BOOL (*InvalidateRect)(HWND hWnd, RECT* lpRect, BOOL bErase);

// Function Definition: IsIconic
typedef BOOL (*IsIconic)(HWND hWnd);

// Function Definition: LoadCursorA
typedef HCURSOR (*LoadCursorA)(HINSTANCE hInstance, LPCSTR lpCursorName);

// Function Definition: LoadIconA
typedef HICON (*LoadIconA)(HINSTANCE hInstance, LPCSTR lpIconName);

// Function Definition: MessageBoxA
typedef int (*MessageBoxA)(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType);

// Function Definition: MoveWindow
typedef BOOL (*MoveWindow)(HWND hWnd, int X, int Y, int nWidth, int nHeight, BOOL bRepaint);

// Function Definition: OpenClipboard
typedef BOOL (*OpenClipboard)(HWND hWndNewOwner);

// Function Definition: PeekMessageA
typedef BOOL (*PeekMessageA)(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg);

// Function Definition: PostQuitMessage
typedef void (*PostQuitMessage)(int nExitCode);

// Function Definition: RegisterClassA
typedef ATOM (*RegisterClassA)(WNDCLASSA* lpWndClass);

// Function Definition: SetClipboardData
typedef HANDLE (*SetClipboardData)(UINT uFormat, HANDLE hMem);

// Function Definition: SetCursor
typedef HCURSOR (*SetCursor)(HCURSOR hCursor);

// Function Definition: SetCursorPos
typedef BOOL (*SetCursorPos)(int X, int Y);

// Function Definition: SetFocus
typedef HWND (*SetFocus)(HWND hWnd);

// Function Definition: SetForegroundWindow
typedef BOOL (*SetForegroundWindow)(HWND hWnd);

// Function Definition: SetRectEmpty
typedef BOOL (*SetRectEmpty)(LPRECT lpRect);

// Function Definition: ShowWindow
typedef BOOL (*ShowWindow)(HWND hWnd, int nCmdShow);

// Function Definition: TranslateMessage
typedef BOOL (*TranslateMessage)(MSG* lpMsg);

// Function Definition: UpdateWindow
typedef BOOL (*UpdateWindow)(HWND hWnd);

