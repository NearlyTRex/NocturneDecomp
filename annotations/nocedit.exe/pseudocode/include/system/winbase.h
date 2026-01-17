#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/winnls.h"
#include "system/winnt.h"

// =============================================================================
// WINBASE - System Header
// =============================================================================

// Forward declarations
struct _EXCEPTION_POINTERS;

// Typedef: LPCPINFO
// pointer to _cpinfo
typedef struct _cpinfo* LPCPINFO;

// Typedef: LPFILETIME
// pointer to _FILETIME
typedef struct _FILETIME* LPFILETIME;

// Typedef: LPLONG
// pointer to long
typedef long* LPLONG;

// Typedef: LPMEMORYSTATUS
// pointer to _MEMORYSTATUS
typedef struct _MEMORYSTATUS* LPMEMORYSTATUS;

// Typedef: LPOVERLAPPED
// pointer to _OVERLAPPED
typedef struct _OVERLAPPED* LPOVERLAPPED;

// Typedef: LPPROCESS_INFORMATION
// pointer to _PROCESS_INFORMATION
typedef struct _PROCESS_INFORMATION* LPPROCESS_INFORMATION;

// Typedef: LPSECURITY_ATTRIBUTES
// pointer to _SECURITY_ATTRIBUTES
typedef struct _SECURITY_ATTRIBUTES* LPSECURITY_ATTRIBUTES;

// Typedef: LPSTARTUPINFOA
// pointer to _STARTUPINFOA
typedef struct _STARTUPINFOA* LPSTARTUPINFOA;

// Typedef: LPSYSTEMTIME
// pointer to _SYSTEMTIME
typedef struct _SYSTEMTIME* LPSYSTEMTIME;

// Typedef: LPTIME_ZONE_INFORMATION
// pointer to _TIME_ZONE_INFORMATION
typedef struct _TIME_ZONE_INFORMATION* LPTIME_ZONE_INFORMATION;

// Typedef: LPWIN32_FIND_DATAA
// pointer to _WIN32_FIND_DATAA
typedef struct _WIN32_FIND_DATAA* LPWIN32_FIND_DATAA;

// Function Definition: PHANDLER_ROUTINE_FUNC
typedef BOOL (*PHANDLER_ROUTINE_FUNC)(DWORD CtrlType);

// Typedef: PHANDLER_ROUTINE
// pointer to PHANDLER_ROUTINE_FUNC
typedef PHANDLER_ROUTINE_FUNC* PHANDLER_ROUTINE;

// Typedef: PMEMORY_BASIC_INFORMATION
// pointer to _MEMORY_BASIC_INFORMATION
typedef struct _MEMORY_BASIC_INFORMATION* PMEMORY_BASIC_INFORMATION;

// Function Definition: PTHREAD_START_ROUTINE_FUNC
typedef DWORD (*PTHREAD_START_ROUTINE_FUNC)(LPVOID lpThreadParameter);

// Typedef: PTHREAD_START_ROUTINE
// pointer to PTHREAD_START_ROUTINE_FUNC
typedef PTHREAD_START_ROUTINE_FUNC* PTHREAD_START_ROUTINE;

// Typedef: LPTHREAD_START_ROUTINE
// pointer to PTHREAD_START_ROUTINE_FUNC
typedef PTHREAD_START_ROUTINE LPTHREAD_START_ROUTINE;

// Function Definition: PTOP_LEVEL_EXCEPTION_FILTER_FUNC
typedef LONG (*PTOP_LEVEL_EXCEPTION_FILTER_FUNC)(struct _EXCEPTION_POINTERS* ExceptionInfo);

// Typedef: PTOP_LEVEL_EXCEPTION_FILTER
// pointer to PTOP_LEVEL_EXCEPTION_FILTER_FUNC
typedef PTOP_LEVEL_EXCEPTION_FILTER_FUNC* PTOP_LEVEL_EXCEPTION_FILTER;

// Typedef: LPTOP_LEVEL_EXCEPTION_FILTER
// pointer to PTOP_LEVEL_EXCEPTION_FILTER_FUNC
typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

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

// Structure: _MEMORYSTATUS
typedef struct _MEMORYSTATUS {
    DWORD dwLength;
    DWORD dwMemoryLoad;
    SIZE_T dwTotalPhys;
    SIZE_T dwAvailPhys;
    SIZE_T dwTotalPageFile;
    SIZE_T dwAvailPageFile;
    SIZE_T dwTotalVirtual;
    SIZE_T dwAvailVirtual;
} _MEMORYSTATUS;

// Structure: _MEMORY_BASIC_INFORMATION
typedef struct _MEMORY_BASIC_INFORMATION {
    PVOID BaseAddress;
    PVOID AllocationBase;
    DWORD AllocationProtect;
    SIZE_T RegionSize;
    DWORD State;
    DWORD Protect;
    DWORD Type;
} _MEMORY_BASIC_INFORMATION;

// Structure: _OVERLAPPED
typedef struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    _union_518 u;
    HANDLE hEvent;
} _OVERLAPPED;

// Structure: _PROCESS_INFORMATION
typedef struct _PROCESS_INFORMATION {
    HANDLE hProcess;
    HANDLE hThread;
    DWORD dwProcessId;
    DWORD dwThreadId;
} _PROCESS_INFORMATION;

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

