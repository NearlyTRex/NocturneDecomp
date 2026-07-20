// =============================================================================
// WIN32 IMPORTS — the six user32/kernel32 entry points tridx7.dll links against
// =============================================================================
//
// The exe and the DLL reach Win32 differently. nocedit.exe's decompiled code
// calls through function-pointer globals (g_MessageBoxAFunc & co.) that
// shims/kernel32.cpp and shims/user32.cpp assign at startup. tridx7.dll's
// imports were recovered as plain externs (see system/winbase.h), so the linker
// wants real definitions for them.
//
// Where the exe already implements the behavior, forward to its shim through
// that same function pointer rather than reimplementing it — one implementation,
// no chance of the two drifting. Global variables are not name-mangled, so
// declaring the pointer here binds to the exe's definition even though the two
// programs compile against different header trees; the parameter types below are
// layout-identical to nocedit's typedefs (all pointers and 32-bit integers).
//
// The remaining three have no counterpart in the exe's shims and are
// implemented here, minimally, to match what the DLL actually needs from them.

#include "system/winbase.h"

#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>      // std::string — watcom_resolve_fs_path's return type
#include <strings.h>   // strcasecmp
#include <unistd.h>    // _exit

// -----------------------------------------------------------------------------
// Forwarded to the exe's shims
// -----------------------------------------------------------------------------

extern "C" {
extern int  (*g_MessageBoxAFunc)(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType);
extern void (*g_ExitProcessFunc)(UINT uExitCode);
extern BOOL (*g_SetCursorPosFunc)(int X, int Y);
}

int MessageBoxA(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType) {
    if (g_MessageBoxAFunc != nullptr) {
        return g_MessageBoxAFunc(hWnd, lpText, lpCaption, uType);
    }
    // Reachable only if the DLL faults before shim init; still say something.
    fprintf(stderr, "[tridx7] %s: %s\n", lpCaption ? lpCaption : "Message",
            lpText ? lpText : "");
    return 1;  // IDOK
}

void ExitProcess(UINT uExitCode) {
    if (g_ExitProcessFunc != nullptr) {
        g_ExitProcessFunc(uExitCode);
    }
    _exit((int)uExitCode);   // g_ExitProcessFunc does not return; belt and braces
}

BOOL SetCursorPos(int X, int Y) {
    if (g_SetCursorPosFunc != nullptr) {
        return g_SetCursorPosFunc(X, Y);
    }
    return 0;
}

// -----------------------------------------------------------------------------
// Implemented here — no equivalent in the exe's shims
// -----------------------------------------------------------------------------

// The DLL hides the cursor when it takes the display mode and restores it on the
// way out. SDL owns cursor visibility for us, and its return value already has
// the Win32 shape: a display counter that is >= 0 when the cursor is visible.
int ShowCursor(BOOL bShow) {
    SDL_ShowCursor(bShow ? SDL_ENABLE : SDL_DISABLE);
    return bShow ? 0 : -1;
}

// Used once, to pull the renderer's display name out of the DLL's string table.
// A decompiled DLL has no PE resources attached, so there is nothing to load;
// returning 0 with an empty buffer is the documented "not found" result and the
// caller falls back to its built-in name.
int LoadStringA(HINSTANCE hInstance, UINT uID, LPSTR lpBuffer, int cchBufferMax) {
    (void)hInstance; (void)uID;
    if (lpBuffer != nullptr && cchBufferMax > 0) {
        lpBuffer[0] = '\0';
    }
    return 0;
}

// Defined in the exe's shims/crt.cpp — see stream_compat.h.
std::string watcom_resolve_fs_path(const char *path);

// The DLL reads its tuning values out of .\system\render.ini (see readIniInt).
// Minimal INI reader: find [section], then key=value before the next section.
// Returns nDefault when the file, section, or key is missing — same as Win32.
UINT GetPrivateProfileIntA(LPCSTR lpAppName, LPCSTR lpKeyName, int nDefault,
                           LPCSTR lpFileName) {
    if (lpAppName == nullptr || lpKeyName == nullptr || lpFileName == nullptr) {
        return (UINT)nDefault;
    }
    // The DLL hardcodes Windows paths (".\\system\\render.ini"): backslash
    // separators and a case that need not match the real filename. Resolving
    // through the exe's helper translates \ -> / and does a case-insensitive
    // component walk, the same as every other file the game opens. Without it
    // the fopen just fails and every ini setting silently keeps its default.
    const std::string resolved = watcom_resolve_fs_path(lpFileName);
    FILE *f = fopen(resolved.c_str(), "r");
    if (f == nullptr) {
        return (UINT)nDefault;
    }

    char line[512];
    bool in_section = false;
    UINT result = (UINT)nDefault;

    while (fgets(line, sizeof(line), f) != nullptr) {
        char *p = line;
        while (*p == ' ' || *p == '\t') p++;

        if (*p == '[') {
            const char *name = p + 1;
            char *end = strchr(p, ']');
            if (end == nullptr) continue;
            *end = '\0';
            in_section = (strcasecmp(name, lpAppName) == 0);
            continue;
        }
        if (!in_section || *p == ';' || *p == '#') continue;

        char *eq = strchr(p, '=');
        if (eq == nullptr) continue;
        *eq = '\0';

        // Trim trailing space from the key before comparing.
        char *key_end = eq;
        while (key_end > p && (key_end[-1] == ' ' || key_end[-1] == '\t')) key_end--;
        *key_end = '\0';

        if (strcasecmp(p, lpKeyName) == 0) {
            result = (UINT)strtol(eq + 1, nullptr, 0);
            break;
        }
    }

    fclose(f);
    return result;
}
