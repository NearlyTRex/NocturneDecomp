#include "system/user32.h"
#include <SDL.h>
#include <cstring>
#include <csignal>
#include <cstdlib>
#include <queue>

// ---------------------------------------------------------------------------
// State
// ---------------------------------------------------------------------------
SDL_Window* g_sdlWindow = nullptr;
// Set true once ddraw_SetDisplayMode has resized the window to the real game
// resolution. Until then, shim_ShowWindow ignores SW_SHOW so we don't flash a
// default-size window between CreateWindowExA and the DDraw setup.
bool g_sdlWindowReadyToShow = false;
static WNDPROC     s_wndProc   = nullptr;
static std::queue<MSG> s_msgQueue;

// ---------------------------------------------------------------------------
// SDL scancode → Windows AT Set 1 scancode
// ---------------------------------------------------------------------------
static uint8_t sdlScancodeToWin32(SDL_Scancode sc) {
    // Letters: SDL_SCANCODE_A(4)..Z(29) → Win32 AT scancodes
    static const uint8_t letterMap[26] = {
        0x1E,0x30,0x2E,0x20,0x12,0x21,0x22,0x23,0x17, // A-I
        0x24,0x25,0x26,0x32,0x31,0x18,0x19,0x10,0x13,  // J-R
        0x1F,0x14,0x16,0x2F,0x11,0x2D,0x15,0x2C         // S-Z
    };
    if (sc >= SDL_SCANCODE_A && sc <= SDL_SCANCODE_Z)
        return letterMap[sc - SDL_SCANCODE_A];
    // Digits: SDL 30-39 → Win32 0x02-0x0B
    if (sc >= SDL_SCANCODE_1 && sc <= SDL_SCANCODE_9)
        return (uint8_t)(sc - SDL_SCANCODE_1 + 0x02);
    if (sc == SDL_SCANCODE_0) return 0x0B;

    switch (sc) {
        case SDL_SCANCODE_ESCAPE:    return 0x01;
        case SDL_SCANCODE_RETURN:    return 0x1C;
        case SDL_SCANCODE_BACKSPACE: return 0x0E;
        case SDL_SCANCODE_TAB:       return 0x0F;
        case SDL_SCANCODE_SPACE:     return 0x39;
        case SDL_SCANCODE_MINUS:     return 0x0C;
        case SDL_SCANCODE_EQUALS:    return 0x0D;
        case SDL_SCANCODE_LEFTBRACKET:  return 0x1A;
        case SDL_SCANCODE_RIGHTBRACKET: return 0x1B;
        case SDL_SCANCODE_BACKSLASH: return 0x2B;
        case SDL_SCANCODE_SEMICOLON: return 0x27;
        case SDL_SCANCODE_APOSTROPHE:return 0x28;
        case SDL_SCANCODE_GRAVE:     return 0x29;
        case SDL_SCANCODE_COMMA:     return 0x33;
        case SDL_SCANCODE_PERIOD:    return 0x34;
        case SDL_SCANCODE_SLASH:     return 0x35;
        case SDL_SCANCODE_CAPSLOCK:  return 0x3A;
        case SDL_SCANCODE_F1:        return 0x3B;
        case SDL_SCANCODE_F2:        return 0x3C;
        case SDL_SCANCODE_F3:        return 0x3D;
        case SDL_SCANCODE_F4:        return 0x3E;
        case SDL_SCANCODE_F5:        return 0x3F;
        case SDL_SCANCODE_F6:        return 0x40;
        case SDL_SCANCODE_F7:        return 0x41;
        case SDL_SCANCODE_F8:        return 0x42;
        case SDL_SCANCODE_F9:        return 0x43;
        case SDL_SCANCODE_F10:       return 0x44;
        case SDL_SCANCODE_F11:       return 0x57;
        case SDL_SCANCODE_F12:       return 0x58;
        case SDL_SCANCODE_INSERT:    return 0x52;
        case SDL_SCANCODE_DELETE:    return 0x53;
        case SDL_SCANCODE_HOME:      return 0x47;
        case SDL_SCANCODE_END:       return 0x4F;
        case SDL_SCANCODE_PAGEUP:    return 0x49;
        case SDL_SCANCODE_PAGEDOWN:  return 0x51;
        case SDL_SCANCODE_UP:        return 0x48;
        case SDL_SCANCODE_DOWN:      return 0x50;
        case SDL_SCANCODE_LEFT:      return 0x4B;
        case SDL_SCANCODE_RIGHT:     return 0x4D;
        case SDL_SCANCODE_LSHIFT:    return 0x2A;
        case SDL_SCANCODE_RSHIFT:    return 0x36;
        case SDL_SCANCODE_LCTRL:     return 0x1D;
        case SDL_SCANCODE_RCTRL:     return 0x1D;
        case SDL_SCANCODE_LALT:      return 0x38;
        case SDL_SCANCODE_RALT:      return 0x38;
        case SDL_SCANCODE_NUMLOCKCLEAR: return 0x45;
        case SDL_SCANCODE_KP_DIVIDE: return 0x35;
        case SDL_SCANCODE_KP_MULTIPLY: return 0x37;
        case SDL_SCANCODE_KP_MINUS:  return 0x4A;
        case SDL_SCANCODE_KP_PLUS:   return 0x4E;
        case SDL_SCANCODE_KP_ENTER:  return 0x1C;
        case SDL_SCANCODE_KP_0:      return 0x52;
        case SDL_SCANCODE_KP_1:      return 0x4F;
        case SDL_SCANCODE_KP_2:      return 0x50;
        case SDL_SCANCODE_KP_3:      return 0x51;
        case SDL_SCANCODE_KP_4:      return 0x4B;
        case SDL_SCANCODE_KP_5:      return 0x4C;
        case SDL_SCANCODE_KP_6:      return 0x4D;
        case SDL_SCANCODE_KP_7:      return 0x47;
        case SDL_SCANCODE_KP_8:      return 0x48;
        case SDL_SCANCODE_KP_9:      return 0x49;
        case SDL_SCANCODE_KP_PERIOD: return 0x53;
        default: return 0;
    }
}

static void translateSdlEvent(const SDL_Event& ev) {
    MSG msg;
    memset(&msg, 0, sizeof(msg));
    msg.hwnd = (HWND)(intptr_t)g_sdlWindow;

    switch (ev.type) {
    case SDL_QUIT:
        msg.message = 0x0002; // WM_DESTROY
        s_msgQueue.push(msg);
        break;

    case SDL_MOUSEMOTION:
        msg.message = 0x0200; // WM_MOUSEMOVE
        msg.lParam = (ev.motion.y << 16) | (ev.motion.x & 0xFFFF);
        s_msgQueue.push(msg);
        break;

    case SDL_MOUSEBUTTONDOWN:
        if (ev.button.button == SDL_BUTTON_LEFT)
            msg.message = 0x0201; // WM_LBUTTONDOWN
        else if (ev.button.button == SDL_BUTTON_RIGHT)
            msg.message = 0x0204; // WM_RBUTTONDOWN
        else if (ev.button.button == SDL_BUTTON_MIDDLE)
            msg.message = 0x0207; // WM_MBUTTONDOWN
        else break;
        msg.lParam = (ev.button.y << 16) | (ev.button.x & 0xFFFF);
        s_msgQueue.push(msg);
        break;

    case SDL_MOUSEBUTTONUP:
        if (ev.button.button == SDL_BUTTON_LEFT)
            msg.message = 0x0202; // WM_LBUTTONUP
        else if (ev.button.button == SDL_BUTTON_RIGHT)
            msg.message = 0x0205; // WM_RBUTTONUP
        else if (ev.button.button == SDL_BUTTON_MIDDLE)
            msg.message = 0x0208; // WM_MBUTTONUP
        else break;
        msg.lParam = (ev.button.y << 16) | (ev.button.x & 0xFFFF);
        s_msgQueue.push(msg);
        break;

    case SDL_KEYDOWN: {
        uint8_t sc = sdlScancodeToWin32(ev.key.keysym.scancode);
        msg.message = 0x0100; // WM_KEYDOWN
        msg.wParam = ev.key.keysym.sym & 0xFF;
        msg.lParam = (LPARAM)sc << 16;
        s_msgQueue.push(msg);
        // Generate WM_CHAR for printable characters
        if (ev.key.keysym.sym >= 0x20 && ev.key.keysym.sym < 0x7F) {
            MSG charMsg;
            memset(&charMsg, 0, sizeof(charMsg));
            charMsg.hwnd = msg.hwnd;
            charMsg.message = 0x0102; // WM_CHAR
            char ch = (char)(ev.key.keysym.sym & 0xFF);
            if (ev.key.keysym.mod & KMOD_SHIFT) {
                if (ch >= 'a' && ch <= 'z') ch -= 32;
            }
            charMsg.wParam = (WPARAM)(unsigned char)ch;
            s_msgQueue.push(charMsg);
        }
        break;
    }

    case SDL_KEYUP: {
        uint8_t sc = sdlScancodeToWin32(ev.key.keysym.scancode);
        msg.message = 0x0101; // WM_KEYUP
        msg.wParam = ev.key.keysym.sym & 0xFF;
        msg.lParam = (LPARAM)sc << 16;
        s_msgQueue.push(msg);
        break;
    }

    case SDL_WINDOWEVENT:
        if (ev.window.event == SDL_WINDOWEVENT_FOCUS_GAINED) {
            msg.message = 0x001C; // WM_ACTIVATEAPP
            msg.wParam = 1;
            s_msgQueue.push(msg);
        } else if (ev.window.event == SDL_WINDOWEVENT_FOCUS_LOST) {
            msg.message = 0x001C; // WM_ACTIVATEAPP
            msg.wParam = 0;
            s_msgQueue.push(msg);
        }
        break;

    default:
        break;
    }
}

// ---------------------------------------------------------------------------
// Globals (function pointers wired by shims_init_user32)
// ---------------------------------------------------------------------------
// ---------------------------------------------------------------------------
// Shim implementations
// ---------------------------------------------------------------------------

static BOOL shim_BringWindowToTop(HWND hWnd) {
    if (g_sdlWindow) SDL_RaiseWindow(g_sdlWindow);
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
    // Created hidden — DDraw's SetDisplayMode resizes us shortly, and we want
    // to skip the flash of a default-size window between create and resize.
    // The window is shown from ddraw_SetDisplayMode once the real size is set.
    Uint32 flags = SDL_WINDOW_HIDDEN;
    if (nWidth <= 0) nWidth = 640;
    if (nHeight <= 0) nHeight = 480;
    g_sdlWindow = SDL_CreateWindow(
        lpWindowName ? lpWindowName : "NocturneDecomp",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        nWidth, nHeight, flags);
    // SDL only fires SDL_WINDOWEVENT_FOCUS_GAINED on focus *changes*, never for
    // the initial show. The game's main loop blocks until WM_ACTIVATEAPP wParam=1
    // arrives, so synthesize one now.
    MSG msg{};
    msg.hwnd = (HWND)(intptr_t)g_sdlWindow;
    msg.message = 0x001C; // WM_ACTIVATEAPP
    msg.wParam = 1;
    s_msgQueue.push(msg);
    return (HWND)(intptr_t)g_sdlWindow;
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
    return (HWND)(intptr_t)g_sdlWindow;
}

static BOOL shim_GetClientRect(HWND hWnd, RECT* lpRect) {
    if (!lpRect) return 0;
    if (g_sdlWindow) {
        int w, h;
        SDL_GetWindowSize(g_sdlWindow, &w, &h);
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
    if (g_sdlWindow) {
        Uint32 flags = SDL_GetWindowFlags(g_sdlWindow);
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
                             lpText ? lpText : "", g_sdlWindow);
    return 1; // IDOK
}

static BOOL shim_MoveWindow(HWND hWnd, int X, int Y, int nWidth, int nHeight,
                              BOOL bRepaint) {
    if (g_sdlWindow) {
        SDL_SetWindowPosition(g_sdlWindow, X, Y);
        SDL_SetWindowSize(g_sdlWindow, nWidth, nHeight);
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
    // Drain SDL events into our Win32 message queue
    SDL_Event ev;
    while (SDL_PollEvent(&ev)) {
        translateSdlEvent(ev);
    }
    // Return next queued Win32 message
    if (!s_msgQueue.empty()) {
        if (lpMsg) {
            *lpMsg = s_msgQueue.front();
        }
        if (wRemoveMsg & 0x0001) { // PM_REMOVE
            s_msgQueue.pop();
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
    if (g_sdlWindow) SDL_WarpMouseInWindow(g_sdlWindow, X, Y);
    return 1;
}

static HWND shim_SetFocus(HWND hWnd) {
    return hWnd;
}

static BOOL shim_SetForegroundWindow(HWND hWnd) {
    if (g_sdlWindow) SDL_RaiseWindow(g_sdlWindow);
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
    if (g_sdlWindow) {
        if (nCmdShow == 0) SDL_HideWindow(g_sdlWindow);
        else if (g_sdlWindowReadyToShow) SDL_ShowWindow(g_sdlWindow);
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

static void sigint_handler(int) { _exit(1); }

void shims_init_user32(void) {
    signal(SIGINT, sigint_handler);
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
