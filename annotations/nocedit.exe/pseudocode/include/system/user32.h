#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/windef.h"
#include "system/winuser.h"

// =============================================================================
// USER32 - System Header
// =============================================================================

// Function Definition: BRING_WINDOW_TO_TOP_FUNC
typedef BOOL BRING_WINDOW_TO_TOP_FUNC(HWND hWnd);

// Function Definition: CHAR_UPPER_BUFF_A_FUNC
typedef DWORD CHAR_UPPER_BUFF_A_FUNC(LPSTR lpsz, DWORD cchLength);

// Function Definition: CLOSE_CLIPBOARD_FUNC
typedef BOOL CLOSE_CLIPBOARD_FUNC(void);

// Function Definition: CREATE_WINDOW_EX_A_FUNC
typedef HWND CREATE_WINDOW_EX_A_FUNC(DWORD dwExStyle, LPCSTR lpClassName, LPCSTR lpWindowName, DWORD dwStyle, int X, int Y, int nWidth, int nHeight, HWND hWndParent, HMENU hMenu, HINSTANCE hInstance, LPVOID lpParam);

// Function Definition: DEF_WINDOW_PROC_A_FUNC
typedef LRESULT DEF_WINDOW_PROC_A_FUNC(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);

// Function Definition: DISPATCH_MESSAGE_A_FUNC
typedef LRESULT DISPATCH_MESSAGE_A_FUNC(MSG* lpMsg);

// Function Definition: FIND_WINDOW_A_FUNC
typedef HWND FIND_WINDOW_A_FUNC(LPCSTR lpClassName, LPCSTR lpWindowName);

// Function Definition: GET_CLIENT_RECT_FUNC
typedef BOOL GET_CLIENT_RECT_FUNC(HWND hWnd, LPRECT lpRect);

// Function Definition: GET_CLIPBOARD_DATA_FUNC
typedef HANDLE GET_CLIPBOARD_DATA_FUNC(UINT uFormat);

// Function Definition: GET_KEY_NAME_TEXT_A_FUNC
typedef int GET_KEY_NAME_TEXT_A_FUNC(long lParam, LPSTR lpString, int cchSize);

// Function Definition: GET_LAST_ACTIVE_POPUP_FUNC
typedef HWND GET_LAST_ACTIVE_POPUP_FUNC(HWND hWnd);

// Function Definition: INVALIDATE_RECT_FUNC
typedef BOOL INVALIDATE_RECT_FUNC(HWND hWnd, RECT* lpRect, BOOL bErase);

// Function Definition: IS_ICONIC_FUNC
typedef BOOL IS_ICONIC_FUNC(HWND hWnd);

// Function Definition: LOAD_CURSOR_A_FUNC
typedef HCURSOR LOAD_CURSOR_A_FUNC(HINSTANCE hInstance, LPCSTR lpCursorName);

// Function Definition: LOAD_ICON_A_FUNC
typedef HICON LOAD_ICON_A_FUNC(HINSTANCE hInstance, LPCSTR lpIconName);

// Function Definition: MESSAGE_BOX_A_FUNC
typedef int MESSAGE_BOX_A_FUNC(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType);

// Function Definition: MOVE_WINDOW_FUNC
typedef BOOL MOVE_WINDOW_FUNC(HWND hWnd, int X, int Y, int nWidth, int nHeight, BOOL bRepaint);

// Function Definition: OPEN_CLIPBOARD_FUNC
typedef BOOL OPEN_CLIPBOARD_FUNC(HWND hWndNewOwner);

// Function Definition: PEEK_MESSAGE_A_FUNC
typedef BOOL PEEK_MESSAGE_A_FUNC(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg);

// Function Definition: POST_QUIT_MESSAGE_FUNC
typedef void POST_QUIT_MESSAGE_FUNC(int nExitCode);

// Function Definition: REGISTER_CLASS_A_FUNC
typedef ATOM REGISTER_CLASS_A_FUNC(WNDCLASSA* lpWndClass);

// Function Definition: SET_CLIPBOARD_DATA_FUNC
typedef HANDLE SET_CLIPBOARD_DATA_FUNC(UINT uFormat, HANDLE hMem);

// Function Definition: SET_CURSOR_FUNC
typedef HCURSOR SET_CURSOR_FUNC(HCURSOR hCursor);

// Function Definition: SET_CURSOR_POS_FUNC
typedef BOOL SET_CURSOR_POS_FUNC(int X, int Y);

// Function Definition: SET_FOCUS_FUNC
typedef HWND SET_FOCUS_FUNC(HWND hWnd);

// Function Definition: SET_FOREGROUND_WINDOW_FUNC
typedef BOOL SET_FOREGROUND_WINDOW_FUNC(HWND hWnd);

// Function Definition: SET_RECT_EMPTY_FUNC
typedef BOOL SET_RECT_EMPTY_FUNC(LPRECT lpRect);

// Function Definition: SHOW_WINDOW_FUNC
typedef BOOL SHOW_WINDOW_FUNC(HWND hWnd, int nCmdShow);

// Function Definition: TRANSLATE_MESSAGE_FUNC
typedef BOOL TRANSLATE_MESSAGE_FUNC(MSG* lpMsg);

// Function Definition: UPDATE_WINDOW_FUNC
typedef BOOL UPDATE_WINDOW_FUNC(HWND hWnd);

