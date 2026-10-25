#include "system/advapi32.h"

#include <cstdlib>
#include <cstring>

// ---------------------------------------------------------------------------
// Globals (function pointers wired by shims_init_advapi32)
// ---------------------------------------------------------------------------
// ---------------------------------------------------------------------------
// Win32 error codes
// ---------------------------------------------------------------------------
#ifndef ERROR_SUCCESS
#define ERROR_SUCCESS 0L
#endif
#ifndef ERROR_FILE_NOT_FOUND
#define ERROR_FILE_NOT_FOUND 2L
#endif

// ---------------------------------------------------------------------------
// Shim implementations
// ---------------------------------------------------------------------------

// The user's name from the environment, as each host's login sets it, or "User".
// Not getlogin_r: that asks the terminal, and a process without one — a desktop
// launcher, a container, a CI runner — has no answer. Not the real GetUserNameA
// on Windows either, which is the function being defined here.
//
// As Win32's: the length counts the terminator, and a buffer too small is told
// the size it needs.
static BOOL shim_GetUserNameA(char *lpBuffer, DWORD *pcbBuffer) {
    if (!lpBuffer || !pcbBuffer)
        return 0;
#if defined(_WIN32)
    const char *who = getenv("USERNAME");
#else
    const char *who = getenv("USER");
#endif
    const char *name = (who != nullptr && who[0] != '\0') ? who : "User";
    DWORD len = (DWORD)strlen(name) + 1;
    if (len > *pcbBuffer) {
        *pcbBuffer = len;
        return 0;
    }
    memcpy(lpBuffer, name, len);
    *pcbBuffer = len;
    return 1;
}

static BOOL shim_ImpersonateLoggedOnUser(HANDLE hToken) {
    return 1;
}

static BOOL shim_LogonUserA(LPCSTR lpszUsername, LPCSTR lpszDomain, LPCSTR lpszPassword,
                            DWORD dwLogonType, DWORD dwLogonProvider, HANDLE *phToken) {
    if (phToken)
        *phToken = (HANDLE)1;
    return 1;
}

static long shim_RegCloseKey(HKEY hKey) {
    return ERROR_SUCCESS;
}

static long shim_RegCreateKeyExA(HKEY hKey, LPCSTR lpSubKey, DWORD Reserved, char *lpClass,
                                 DWORD dwOptions, DWORD samDesired, void *lpSecurityAttributes,
                                 HKEY *phkResult, DWORD *lpdwDisposition) {
    if (phkResult)
        *phkResult = (HKEY)1;
    if (lpdwDisposition)
        *lpdwDisposition = 1; // REG_CREATED_NEW_KEY
    return ERROR_SUCCESS;
}

static long shim_RegOpenKeyExA(HKEY hKey, LPCSTR lpSubKey, DWORD ulOptions, DWORD samDesired,
                               HKEY *phkResult) {
    if (phkResult)
        *phkResult = (HKEY)1;
    return ERROR_FILE_NOT_FOUND;
}

static long shim_RegQueryValueExA(HKEY hKey, LPCSTR lpValueName, DWORD *lpReserved, DWORD *lpType,
                                  unsigned char *lpData, DWORD *lpcbData) {
    return ERROR_FILE_NOT_FOUND;
}

static long shim_RegSetValueExA(HKEY hKey, LPCSTR lpValueName, DWORD Reserved, DWORD dwType,
                                const unsigned char *lpData, DWORD cbData) {
    return ERROR_SUCCESS;
}

static BOOL shim_RevertToSelf(void) {
    return 1;
}

// ---------------------------------------------------------------------------
// Init
// ---------------------------------------------------------------------------
#include "globals/globals_610000.h"

void shims_init_advapi32(void) {
    g_GetUserNameAFunc = (decltype(g_GetUserNameAFunc))shim_GetUserNameA;
    g_ImpersonateLoggedOnUserFunc =
        (decltype(g_ImpersonateLoggedOnUserFunc))shim_ImpersonateLoggedOnUser;
    g_LogonUserAFunc = (decltype(g_LogonUserAFunc))shim_LogonUserA;
    g_RegCloseKeyFunc = (decltype(g_RegCloseKeyFunc))shim_RegCloseKey;
    g_RegCreateKeyExAFunc = (decltype(g_RegCreateKeyExAFunc))shim_RegCreateKeyExA;
    g_RegOpenKeyExAFunc = (decltype(g_RegOpenKeyExAFunc))shim_RegOpenKeyExA;
    g_RegQueryValueExAFunc = (decltype(g_RegQueryValueExAFunc))shim_RegQueryValueExA;
    g_RegSetValueExAFunc = (decltype(g_RegSetValueExAFunc))shim_RegSetValueExA;
    g_RevertToSelfFunc = (decltype(g_RevertToSelfFunc))shim_RevertToSelf;
}
