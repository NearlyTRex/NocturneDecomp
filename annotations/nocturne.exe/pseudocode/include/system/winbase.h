#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// WINBASE - System Header
// =============================================================================

// Typedef: LPLONG
// pointer to long
typedef long* LPLONG;

// Typedef: LPPROCESS_INFORMATION
// pointer to _PROCESS_INFORMATION
typedef struct _PROCESS_INFORMATION* LPPROCESS_INFORMATION;

// Typedef: LPSTARTUPINFOA
// pointer to _STARTUPINFOA
typedef struct _STARTUPINFOA* LPSTARTUPINFOA;

// Typedef: PULONG
// pointer to ulong
typedef ulong* PULONG;

// Structure: _FILETIME
typedef struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
} _FILETIME;

// Typedef: FILETIME
typedef _FILETIME FILETIME;

// Typedef: PFILETIME
// pointer to FILETIME
typedef FILETIME* PFILETIME;

// Structure: _PROCESS_INFORMATION
typedef struct _PROCESS_INFORMATION {
    HANDLE hProcess;
    HANDLE hThread;
    DWORD dwProcessId;
    DWORD dwThreadId;
} _PROCESS_INFORMATION;

// Structure: _STARTUPINFOA
typedef struct _STARTUPINFOA {
    DWORD cb;
    LPSTR lpReserved;
    LPSTR lpDesktop;
    LPSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
} _STARTUPINFOA;

// Structure: _WIN32_FIND_DATAA
typedef struct _WIN32_FIND_DATAA {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    CHAR cFileName[260];
    CHAR cAlternateFileName[14];
} _WIN32_FIND_DATAA;

// Typedef: WIN32_FIND_DATAA
typedef _WIN32_FIND_DATAA WIN32_FIND_DATAA;

