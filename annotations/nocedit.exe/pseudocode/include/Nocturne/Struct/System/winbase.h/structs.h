#pragma once

// Structure: ExceptionFrame
typedef struct ExceptionFrame {
    ExceptionFrame* prev;
    void* handler;
} ExceptionFrame;

// Structure: ReentrantCriticalSection
typedef struct ReentrantCriticalSection {
    LPCRITICAL_SECTION cs;
    int initialized;
    DWORD ownerThreadId;
    int lockCount;
} ReentrantCriticalSection;

// Structure: ThreadData
typedef struct ThreadData {
    uint stack_limit;
    int errno_value;
    DWORD windows_error_code;
    uint random_seed;
    uchar unknown_10[4];
    tm localtime_buffer;
    char asctime_buffer[26];
    char padding_0x52[2];
    EXCEPTION_REGISTRATION_RECORD* seh_frame;
    void* exception_info;
    SignalHandlerEntry signal_handlers[15];
    char padding_0xd4[6];
    void* cleanup_data;
    HANDLE thread_handle;
    uchar unknown_E2[18];
    uint heap_info;
} ThreadData;

// Structure: ThreadRegistryEntry
typedef struct ThreadRegistryEntry {
    ThreadRegistryEntry* next;
    void* threadDataKey;
    void* dataBuffer;
    BOOL shouldFreeData;
} ThreadRegistryEntry;

// Structure: ThreadStartupInfo
typedef struct ThreadStartupInfo {
    void* thread_proc;
    void* param;
    void* reserved;
    HANDLE start_event;
    ThreadData** tls_ptr;
} ThreadStartupInfo;

// Structure: _FILETIME
typedef struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
} _FILETIME;

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

// Structure: _WINDOW_BUFFER_SIZE_RECORD
typedef struct _WINDOW_BUFFER_SIZE_RECORD {
    COORD dwSize;
} _WINDOW_BUFFER_SIZE_RECORD;

