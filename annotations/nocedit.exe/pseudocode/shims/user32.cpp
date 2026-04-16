#include "system/user32.h"
#include <SDL.h>
#include <cstring>

// ---------------------------------------------------------------------------
// State
// ---------------------------------------------------------------------------
static SDL_Window* s_sdlWindow = nullptr;
static WNDPROC     s_wndProc   = nullptr;

// ---------------------------------------------------------------------------
// Globals (function pointers wired by shims_init_user32)
// ---------------------------------------------------------------------------
// ---------------------------------------------------------------------------
// Shim implementations
// ---------------------------------------------------------------------------

static BOOL shim_BringWindowToTop(HWND hWnd) {
    if (s_sdlWindow) SDL_RaiseWindow(s_sdlWindow);
    return 1;
}

static DWORD shim_CharUpperBuffA(char* lpsz, DWORD cchLength) {
    for (DWORD i = 0; i < cchLength; i++) {
        if (lpsz[i] >= 'a' && lpsz[i] <= 'z') lpsz[i] -= 32;
    }
    return cchLength;
}

static BOOL shim_CloseClipboard(void) {
    return 1;
}

static HWND shim_CreateWindowExA(DWORD dwExStyle, LPCSTR lpClassName,
                                  LPCSTR lpWindowName, DWORD dwStyle,
                                  int X, int Y, int nWidth, int nHeight,
                                  HWND hWndParent, HMENU hMenu,
                                  HINSTANCE hInstance, void* lpParam) {
    Uint32 flags = SDL_WINDOW_SHOWN;
    if (nWidth <= 0) nWidth = 640;
    if (nHeight <= 0) nHeight = 480;
    s_sdlWindow = SDL_CreateWindow(
        lpWindowName ? lpWindowName : "NocturneDecomp",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        nWidth, nHeight, flags);
    return (HWND)(intptr_t)s_sdlWindow;
}

static LRESULT shim_DefWindowProcA(HWND hWnd, unsigned int Msg,
                                    WPARAM wParam, LPARAM lParam) {
    return 0;
}

static LRESULT shim_DispatchMessageA(const MSG* lpMsg) {
    if (s_wndProc && lpMsg) {
        return s_wndProc(lpMsg->hwnd, lpMsg->message, lpMsg->wParam, lpMsg->lParam);
    }
    return 0;
}

static HWND shim_FindWindowA(LPCSTR lpClassName, LPCSTR lpWindowName) {
    return (HWND)(intptr_t)s_sdlWindow;
}

static BOOL shim_GetClientRect(HWND hWnd, RECT* lpRect) {
    if (!lpRect) return 0;
    if (s_sdlWindow) {
        int w, h;
        SDL_GetWindowSize(s_sdlWindow, &w, &h);
        lpRect->left = 0;
        lpRect->top = 0;
        lpRect->right = w;
        lpRect->bottom = h;
    } else {
        lpRect->left = 0;
        lpRect->top = 0;
        lpRect->right = 640;
        lpRect->bottom = 480;
    }
    return 1;
}

static HANDLE shim_GetClipboardData(unsigned int uFormat) {
    // uFormat 1 = CF_TEXT
    static char* s_clipBuf = nullptr;
    if (s_clipBuf) { SDL_free(s_clipBuf); s_clipBuf = nullptr; }
    s_clipBuf = SDL_GetClipboardText();
    return (HANDLE)s_clipBuf;
}

static int shim_GetKeyNameTextA(long lParam, char* lpString, int cchSize) {
    if (lpString && cchSize > 0) {
        lpString[0] = '\0';
    }
    return 0;
}

static HWND shim_GetLastActivePopup(HWND hWnd) {
    return hWnd;
}

static BOOL shim_InvalidateRect(HWND hWnd, const RECT* lpRect, BOOL bErase) {
    return 1;
}

static BOOL shim_IsIconic(HWND hWnd) {
    if (s_sdlWindow) {
        Uint32 flags = SDL_GetWindowFlags(s_sdlWindow);
        return (flags & SDL_WINDOW_MINIMIZED) ? 1 : 0;
    }
    return 0;
}

static HCURSOR shim_LoadCursorA(HINSTANCE hInstance, LPCSTR lpCursorName) {
    return (HCURSOR)1;
}

static HICON shim_LoadIconA(HINSTANCE hInstance, LPCSTR lpIconName) {
    return (HICON)1;
}

static int shim_MessageBoxA(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption,
                             unsigned int uType) {
    SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_INFORMATION,
                             lpCaption ? lpCaption : "Message",
                             lpText ? lpText : "", s_sdlWindow);
    return 1; // IDOK
}

static BOOL shim_MoveWindow(HWND hWnd, int X, int Y, int nWidth, int nHeight,
                              BOOL bRepaint) {
    if (s_sdlWindow) {
        SDL_SetWindowPosition(s_sdlWindow, X, Y);
        SDL_SetWindowSize(s_sdlWindow, nWidth, nHeight);
    }
    return 1;
}

static BOOL shim_OpenClipboard(HWND hWndNewOwner) {
    return 1;
}

static BOOL shim_PeekMessageA(LPMSG lpMsg, HWND hWnd,
                                unsigned int wMsgFilterMin,
                                unsigned int wMsgFilterMax,
                                unsigned int wRemoveMsg) {
    SDL_Event ev;
    if (SDL_PollEvent(&ev)) {
        if (lpMsg) {
            memset(lpMsg, 0, sizeof(MSG));
            lpMsg->hwnd = (HWND)(intptr_t)s_sdlWindow;
            lpMsg->message = ev.type;
        }
        return 1;
    }
    return 0;
}

static void shim_PostQuitMessage(int nExitCode) {
    SDL_Event ev;
    ev.type = SDL_QUIT;
    SDL_PushEvent(&ev);
}

static ATOM shim_RegisterClassA(WNDCLASSA* lpWndClass) {
    if (lpWndClass) {
        s_wndProc = lpWndClass->lpfnWndProc;
    }
    return 1;
}

static HANDLE shim_SetClipboardData(unsigned int uFormat, HGLOBAL hMem) {
    if (hMem) {
        SDL_SetClipboardText((const char*)hMem);
    }
    return hMem;
}

static HCURSOR shim_SetCursor(HCURSOR hCursor) {
    return (HCURSOR)1;
}

static BOOL shim_SetCursorPos(int X, int Y) {
    if (s_sdlWindow) SDL_WarpMouseInWindow(s_sdlWindow, X, Y);
    return 1;
}

static HWND shim_SetFocus(HWND hWnd) {
    return hWnd;
}

static BOOL shim_SetForegroundWindow(HWND hWnd) {
    if (s_sdlWindow) SDL_RaiseWindow(s_sdlWindow);
    return 1;
}

static BOOL shim_SetRectEmpty(RECT* lprc) {
    if (lprc) {
        lprc->left = 0;
        lprc->top = 0;
        lprc->right = 0;
        lprc->bottom = 0;
    }
    return 1;
}

static BOOL shim_ShowWindow(HWND hWnd, int nCmdShow) {
    if (s_sdlWindow) {
        if (nCmdShow == 0) SDL_HideWindow(s_sdlWindow);
        else SDL_ShowWindow(s_sdlWindow);
    }
    return 1;
}

static BOOL shim_TranslateMessage(const MSG* lpMsg) {
    return 1;
}

static BOOL shim_UpdateWindow(HWND hWnd) {
    return 1;
}

// ---------------------------------------------------------------------------
// Init
// ---------------------------------------------------------------------------
#include "globals/globals_610000.h"

void shims_init_user32(void) {
    g_BringWindowToTopFunc = (decltype(g_BringWindowToTopFunc))shim_BringWindowToTop;
    g_CharUpperBuffAFunc = (decltype(g_CharUpperBuffAFunc))shim_CharUpperBuffA;
    g_CloseClipboardFunc = (decltype(g_CloseClipboardFunc))shim_CloseClipboard;
    g_CreateWindowExAFunc = (decltype(g_CreateWindowExAFunc))shim_CreateWindowExA;
    g_DefWindowProcAFunc = (decltype(g_DefWindowProcAFunc))shim_DefWindowProcA;
    g_DispatchMessageAFunc = (decltype(g_DispatchMessageAFunc))shim_DispatchMessageA;
    g_FindWindowAFunc = (decltype(g_FindWindowAFunc))shim_FindWindowA;
    g_GetClientRectFunc = (decltype(g_GetClientRectFunc))shim_GetClientRect;
    g_GetClipboardDataFunc = (decltype(g_GetClipboardDataFunc))shim_GetClipboardData;
    g_GetKeyNameTextAFunc = (decltype(g_GetKeyNameTextAFunc))shim_GetKeyNameTextA;
    g_GetLastActivePopupFunc = (decltype(g_GetLastActivePopupFunc))shim_GetLastActivePopup;
    g_InvalidateRectFunc = (decltype(g_InvalidateRectFunc))shim_InvalidateRect;
    g_IsIconicFunc = (decltype(g_IsIconicFunc))shim_IsIconic;
    g_LoadCursorAFunc = (decltype(g_LoadCursorAFunc))shim_LoadCursorA;
    g_LoadIconAFunc = (decltype(g_LoadIconAFunc))shim_LoadIconA;
    g_MessageBoxAFunc = (decltype(g_MessageBoxAFunc))shim_MessageBoxA;
    g_MoveWindowFunc = (decltype(g_MoveWindowFunc))shim_MoveWindow;
    g_OpenClipboardFunc = (decltype(g_OpenClipboardFunc))shim_OpenClipboard;
    g_PeekMessageAFunc = (decltype(g_PeekMessageAFunc))shim_PeekMessageA;
    g_PostQuitMessageFunc = (decltype(g_PostQuitMessageFunc))shim_PostQuitMessage;
    g_RegisterClassAFunc = (decltype(g_RegisterClassAFunc))shim_RegisterClassA;
    g_SetClipboardDataFunc = (decltype(g_SetClipboardDataFunc))shim_SetClipboardData;
    g_SetCursorFunc = (decltype(g_SetCursorFunc))shim_SetCursor;
    g_SetCursorPosFunc = (decltype(g_SetCursorPosFunc))shim_SetCursorPos;
    g_SetFocusFunc = (decltype(g_SetFocusFunc))shim_SetFocus;
    g_SetForegroundWindowFunc = (decltype(g_SetForegroundWindowFunc))shim_SetForegroundWindow;
    g_SetRectEmptyFunc = (decltype(g_SetRectEmptyFunc))shim_SetRectEmpty;
    g_ShowWindowFunc = (decltype(g_ShowWindowFunc))shim_ShowWindow;
    g_TranslateMessageFunc = (decltype(g_TranslateMessageFunc))shim_TranslateMessage;
    g_UpdateWindowFunc = (decltype(g_UpdateWindowFunc))shim_UpdateWindow;
}
