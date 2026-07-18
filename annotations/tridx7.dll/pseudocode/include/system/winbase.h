#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/winnt.h"

// =============================================================================
// WINBASE - System Header
// =============================================================================

// Typedef: LPCRITICAL_SECTION
// pointer to _RTL_CRITICAL_SECTION
typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

// Typedef: LPOVERLAPPED
// pointer to _OVERLAPPED
typedef struct _OVERLAPPED* LPOVERLAPPED;

// Typedef: LPSECURITY_ATTRIBUTES
// pointer to _SECURITY_ATTRIBUTES
typedef struct _SECURITY_ATTRIBUTES* LPSECURITY_ATTRIBUTES;

// Typedef: LPSTARTUPINFOA
// pointer to _STARTUPINFOA
typedef struct _STARTUPINFOA* LPSTARTUPINFOA;

// Typedef: LPTIME_ZONE_INFORMATION
// pointer to _TIME_ZONE_INFORMATION
typedef struct _TIME_ZONE_INFORMATION* LPTIME_ZONE_INFORMATION;

// Structure: _SECURITY_ATTRIBUTES
typedef struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
} _SECURITY_ATTRIBUTES;

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

// Structure: _SYSTEMTIME
#pragma pack(push, 2)
typedef struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
} _SYSTEMTIME;
#pragma pack(pop)

// Typedef: SYSTEMTIME
typedef _SYSTEMTIME SYSTEMTIME;

// Structure: _TIME_ZONE_INFORMATION
typedef struct _TIME_ZONE_INFORMATION {
    LONG Bias;
    WCHAR StandardName[32];
    SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[32];
    SYSTEMTIME DaylightDate;
    LONG DaylightBias;
} _TIME_ZONE_INFORMATION;

// Structure: _struct_519
typedef struct _struct_519 {
    DWORD Offset;
    DWORD OffsetHigh;
} _struct_519;

// Union: _union_518
typedef union _union_518 {
    _struct_519 s;
    PVOID Pointer;
} _union_518;

// Structure: _OVERLAPPED
typedef struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    _union_518 u;
    HANDLE hEvent;
} _OVERLAPPED;

// =============================================================================
// KERNEL32 / USER32 API FUNCTIONS (tridx7.dll imports)
// =============================================================================

#include "system/windef.h"

extern void ExitProcess(UINT uExitCode);
extern UINT GetPrivateProfileIntA(LPCSTR lpAppName, LPCSTR lpKeyName, int nDefault, LPCSTR lpFileName);
extern int MessageBoxA(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType);
extern int LoadStringA(HINSTANCE hInstance, UINT uID, LPSTR lpBuffer, int cchBufferMax);
extern BOOL SetCursorPos(int X, int Y);
extern int ShowCursor(BOOL bShow);

