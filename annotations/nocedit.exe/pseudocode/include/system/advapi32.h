#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/winbase.h"
#include "system/windef.h"
#include "system/winnt.h"
#include "system/winreg.h"

// =============================================================================
// ADVAPI32 - System Header
// =============================================================================

// Function Definition: GET_USER_NAME_A_FUNC
typedef BOOL GET_USER_NAME_A_FUNC(LPSTR lpBuffer, LPDWORD pcbBuffer);

// Function Definition: IMPERSONATE_LOGGED_ON_USER_FUNC
typedef BOOL IMPERSONATE_LOGGED_ON_USER_FUNC(HANDLE hToken);

// Function Definition: LOGON_USER_A_FUNC
typedef BOOL LOGON_USER_A_FUNC(LPCSTR lpszUsername, LPCSTR lpszDomain, LPCSTR lpszPassword, DWORD dwLogonType, DWORD dwLogonProvider, PHANDLE phToken);

// Function Definition: REG_CLOSE_KEY_FUNC
typedef LSTATUS REG_CLOSE_KEY_FUNC(HKEY hKey);

// Function Definition: REG_CREATE_KEY_EX_A_FUNC
typedef LSTATUS REG_CREATE_KEY_EX_A_FUNC(ULONG hKey, LPCSTR lpSubKey, DWORD Reserved, LPSTR lpClass, DWORD dwOptions, REGSAM samDesired, LPSECURITY_ATTRIBUTES lpSecurityAttributes, PHKEY phkResult, LPDWORD lpdwDisposition);

// Function Definition: REG_OPEN_KEY_EX_A_FUNC
typedef LSTATUS REG_OPEN_KEY_EX_A_FUNC(ULONG hKey, LPCSTR lpSubKey, DWORD ulOptions, REGSAM samDesired, PHKEY phkResult);

// Function Definition: REG_QUERY_VALUE_EX_A_FUNC
typedef LSTATUS REG_QUERY_VALUE_EX_A_FUNC(HKEY hKey, LPCSTR lpValueName, LPDWORD lpReserved, LPDWORD lpType, LPBYTE lpData, LPDWORD lpcbData);

// Function Definition: REG_SET_VALUE_EX_A_FUNC
typedef LSTATUS REG_SET_VALUE_EX_A_FUNC(HKEY hKey, LPCSTR lpValueName, DWORD Reserved, DWORD dwType, BYTE* lpData, DWORD cbData);

// Function Definition: REVERT_TO_SELF_FUNC
typedef BOOL REVERT_TO_SELF_FUNC(void);

