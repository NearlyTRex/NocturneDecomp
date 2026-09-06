#include "system/advapi32.h"
#include <cstring>
// getlogin_r, for GetUserName. Who is logged in is a question every host answers
// differently — Windows has GetUserNameA, which is what this is standing in for.
#include <unistd.h>

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

static BOOL shim_GetUserNameA(char* lpBuffer, DWORD* pcbBuffer) {
    if (!lpBuffer || !pcbBuffer) return 0;
    char buf[256];
    if (getlogin_r(buf, sizeof(buf)) == 0) {
        DWORD len = (DWORD)strlen(buf) + 1;
        if (len > *pcbBuffer) {
            *pcbBuffer = len;
            return 0;
        }
        memcpy(lpBuffer, buf, len);
        *pcbBuffer = len;
        return 1;
    }
    // Fallback
    const char* fallback = "User";
    DWORD len = 5;
    if (len > *pcbBuffer) {
        *pcbBuffer = len;
        return 0;
    }
    memcpy(lpBuffer, fallback, len);
    *pcbBuffer = len;
    return 1;
}

static BOOL shim_ImpersonateLoggedOnUser(HANDLE hToken) {
    return 1;
}

static BOOL shim_LogonUserA(LPCSTR lpszUsername, LPCSTR lpszDomain,
                              LPCSTR lpszPassword, DWORD dwLogonType,
                              DWORD dwLogonProvider, HANDLE* phToken) {
    if (phToken) *phToken = (HANDLE)1;
    return 1;
}

static long shim_RegCloseKey(HKEY hKey) {
    return ERROR_SUCCESS;
}

static long shim_RegCreateKeyExA(HKEY hKey, LPCSTR lpSubKey, DWORD Reserved,
                                   char* lpClass, DWORD dwOptions,
                                   DWORD samDesired, void* lpSecurityAttributes,
                                   HKEY* phkResult, DWORD* lpdwDisposition) {
    if (phkResult) *phkResult = (HKEY)1;
    if (lpdwDisposition) *lpdwDisposition = 1; // REG_CREATED_NEW_KEY
    return ERROR_SUCCESS;
}

static long shim_RegOpenKeyExA(HKEY hKey, LPCSTR lpSubKey, DWORD ulOptions,
                                 DWORD samDesired, HKEY* phkResult) {
    if (phkResult) *phkResult = (HKEY)1;
    return ERROR_FILE_NOT_FOUND;
}

static long shim_RegQueryValueExA(HKEY hKey, LPCSTR lpValueName,
                                    DWORD* lpReserved, DWORD* lpType,
                                    unsigned char* lpData, DWORD* lpcbData) {
    return ERROR_FILE_NOT_FOUND;
}

static long shim_RegSetValueExA(HKEY hKey, LPCSTR lpValueName, DWORD Reserved,
                                  DWORD dwType, const unsigned char* lpData,
                                  DWORD cbData) {
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
    g_ImpersonateLoggedOnUserFunc = (decltype(g_ImpersonateLoggedOnUserFunc))shim_ImpersonateLoggedOnUser;
    g_LogonUserAFunc = (decltype(g_LogonUserAFunc))shim_LogonUserA;
    g_RegCloseKeyFunc = (decltype(g_RegCloseKeyFunc))shim_RegCloseKey;
    g_RegCreateKeyExAFunc = (decltype(g_RegCreateKeyExAFunc))shim_RegCreateKeyExA;
    g_RegOpenKeyExAFunc = (decltype(g_RegOpenKeyExAFunc))shim_RegOpenKeyExA;
    g_RegQueryValueExAFunc = (decltype(g_RegQueryValueExAFunc))shim_RegQueryValueExA;
    g_RegSetValueExAFunc = (decltype(g_RegSetValueExAFunc))shim_RegSetValueExA;
    g_RevertToSelfFunc = (decltype(g_RevertToSelfFunc))shim_RevertToSelf;
}
