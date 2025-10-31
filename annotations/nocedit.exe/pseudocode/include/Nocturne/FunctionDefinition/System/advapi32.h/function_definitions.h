#pragma once

// Function Definition: GetUserNameA
typedef BOOL (*GetUserNameA)(LPSTR lpBuffer, LPDWORD pcbBuffer);

// Function Definition: ImpersonateLoggedOnUser
typedef BOOL (*ImpersonateLoggedOnUser)(HANDLE hToken);

// Function Definition: LogonUserA
typedef BOOL (*LogonUserA)(LPCSTR lpszUsername, LPCSTR lpszDomain, LPCSTR lpszPassword, DWORD dwLogonType, DWORD dwLogonProvider, PHANDLE phToken);

// Function Definition: RegCloseKey
typedef LSTATUS (*RegCloseKey)(HKEY hKey);

// Function Definition: RegCreateKeyExA
typedef LSTATUS (*RegCreateKeyExA)(HKEY hKey, LPCSTR lpSubKey, DWORD Reserved, LPSTR lpClass, DWORD dwOptions, REGSAM samDesired, LPSECURITY_ATTRIBUTES lpSecurityAttributes, PHKEY phkResult, LPDWORD lpdwDisposition);

// Function Definition: RegOpenKeyExA
typedef LSTATUS (*RegOpenKeyExA)(HKEY hKey, LPCSTR lpSubKey, DWORD ulOptions, REGSAM samDesired, PHKEY phkResult);

// Function Definition: RegQueryValueExA
typedef LSTATUS (*RegQueryValueExA)(HKEY hKey, LPCSTR lpValueName, LPDWORD lpReserved, LPDWORD lpType, LPBYTE lpData, LPDWORD lpcbData);

// Function Definition: RegSetValueExA
typedef LSTATUS (*RegSetValueExA)(HKEY hKey, LPCSTR lpValueName, DWORD Reserved, DWORD dwType, BYTE* lpData, DWORD cbData);

// Function Definition: RevertToSelf
typedef BOOL (*RevertToSelf)(void);

