#pragma once

// Function Definition: CloseHandle
typedef BOOL (*CloseHandle)(HANDLE hObject);

// Function Definition: CreateDirectoryA
typedef BOOL (*CreateDirectoryA)(LPCSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes);

// Function Definition: CreateEventA
typedef HANDLE (*CreateEventA)(LPSECURITY_ATTRIBUTES lpEventAttributes, BOOL bManualReset, BOOL bInitialState, LPCSTR lpName);

// Function Definition: CreateFileA
typedef HANDLE (*CreateFileA)(LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);

// Function Definition: CreateMutexA
typedef HANDLE (*CreateMutexA)(LPSECURITY_ATTRIBUTES lpMutexAttributes, BOOL bInitialOwner, LPCSTR lpName);

// Function Definition: CreateProcessA
typedef BOOL (*CreateProcessA)(LPCSTR lpApplicationName, LPSTR lpCommandLine, LPSECURITY_ATTRIBUTES lpProcessAttributes, LPSECURITY_ATTRIBUTES lpThreadAttributes, BOOL bInheritHandles, DWORD dwCreationFlags, LPVOID lpEnvironment, LPCSTR lpCurrentDirectory, LPSTARTUPINFOA lpStartupInfo, LPPROCESS_INFORMATION lpProcessInformation);

// Function Definition: CreateThread
typedef HANDLE (*CreateThread)(LPSECURITY_ATTRIBUTES lpThreadAttributes, SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter, DWORD dwCreationFlags, LPDWORD lpThreadId);

// Function Definition: DeleteCriticalSection
typedef void (*DeleteCriticalSection)(LPCRITICAL_SECTION lpCriticalSection);

// Function Definition: DeleteFileA
typedef BOOL (*DeleteFileA)(LPCSTR lpFileName);

// Function Definition: DosDateTimeToFileTime
typedef BOOL (*DosDateTimeToFileTime)(WORD wFatDate, WORD wFatTime, LPFILETIME lpFileTime);

// Function Definition: DuplicateHandle
typedef BOOL (*DuplicateHandle)(HANDLE hSourceProcessHandle, HANDLE hSourceHandle, HANDLE hTargetProcessHandle, LPHANDLE lpTargetHandle, DWORD dwDesiredAccess, BOOL bInheritHandle, DWORD dwOptions);

// Function Definition: EnterCriticalSection
typedef void (*EnterCriticalSection)(LPCRITICAL_SECTION lpCriticalSection);

// Function Definition: ExitProcess
typedef void (*ExitProcess)(UINT uExitCode);

// Function Definition: ExitThread
typedef void (*ExitThread)(DWORD dwExitCode);

// Function Definition: FileTimeToDosDateTime
typedef BOOL (*FileTimeToDosDateTime)(FILETIME* lpFileTime, LPWORD lpFatDate, LPWORD lpFatTime);

// Function Definition: FileTimeToLocalFileTime
typedef BOOL (*FileTimeToLocalFileTime)(FILETIME* lpFileTime, LPFILETIME lpLocalFileTime);

// Function Definition: FileTimeToSystemTime
typedef BOOL (*FileTimeToSystemTime)(FILETIME* lpFileTime, LPSYSTEMTIME lpSystemTime);

// Function Definition: FindClose
typedef BOOL (*FindClose)(HANDLE hFindFile);

// Function Definition: FindFirstFileA
typedef HANDLE (*FindFirstFileA)(LPCSTR lpFileName, LPWIN32_FIND_DATAA lpFindFileData);

// Function Definition: FindNextFileA
typedef BOOL (*FindNextFileA)(HANDLE hFindFile, LPWIN32_FIND_DATAA lpFindFileData);

// Function Definition: FlushFileBuffers
typedef BOOL (*FlushFileBuffers)(HANDLE hFile);

// Function Definition: FreeEnvironmentStringsA
typedef BOOL (*FreeEnvironmentStringsA)(LPSTR penv);

// Function Definition: FreeLibrary
typedef BOOL (*FreeLibrary)(HMODULE hLibModule);

// Function Definition: GetACP
typedef UINT (*GetACP)(void);

// Function Definition: GetCPInfo
typedef BOOL (*GetCPInfo)(UINT CodePage, LPCPINFO lpCPInfo);

// Function Definition: GetCommandLineA
typedef LPSTR (*GetCommandLineA)(void);

// Function Definition: GetCommandLineW
typedef LPWSTR (*GetCommandLineW)(void);

// Function Definition: GetComputerNameA
typedef BOOL (*GetComputerNameA)(LPSTR lpBuffer, LPDWORD nSize);

// Function Definition: GetConsoleMode
typedef BOOL (*GetConsoleMode)(HANDLE hConsoleHandle, LPDWORD lpMode);

// Function Definition: GetCurrentDirectoryA
typedef DWORD (*GetCurrentDirectoryA)(DWORD nBufferLength, LPSTR lpBuffer);

// Function Definition: GetCurrentProcess
typedef HANDLE (*GetCurrentProcess)(void);

// Function Definition: GetCurrentProcessId
typedef DWORD (*GetCurrentProcessId)(void);

// Function Definition: GetCurrentThread
typedef HANDLE (*GetCurrentThread)(void);

// Function Definition: GetCurrentThreadId
typedef DWORD (*GetCurrentThreadId)(void);

// Function Definition: GetEnvironmentStrings
typedef LPSTR (*GetEnvironmentStrings)(void);

// Function Definition: GetExitCodeProcess
typedef BOOL (*GetExitCodeProcess)(HANDLE hProcess, LPDWORD lpExitCode);

// Function Definition: GetFileAttributesA
typedef DWORD (*GetFileAttributesA)(LPCSTR lpFileName);

// Function Definition: GetFileTime
typedef BOOL (*GetFileTime)(HANDLE hFile, LPFILETIME lpCreationTime, LPFILETIME lpLastAccessTime, LPFILETIME lpLastWriteTime);

// Function Definition: GetFileType
typedef DWORD (*GetFileType)(HANDLE hFile);

// Function Definition: GetFullPathNameA
typedef DWORD (*GetFullPathNameA)(LPCSTR lpFileName, DWORD nBufferLength, LPSTR lpBuffer, LPSTR* lpFilePart);

// Function Definition: GetLastError
typedef DWORD (*GetLastError)(void);

// Function Definition: GetLocalTime
typedef void (*GetLocalTime)(LPSYSTEMTIME lpSystemTime);

// Function Definition: GetModuleFileNameA
typedef DWORD (*GetModuleFileNameA)(HMODULE hModule, LPSTR lpFilename, DWORD nSize);

// Function Definition: GetModuleFileNameW
typedef DWORD (*GetModuleFileNameW)(HMODULE hModule, LPWSTR lpFilename, DWORD nSize);

// Function Definition: GetModuleHandleA
typedef HMODULE (*GetModuleHandleA)(LPCSTR lpModuleName);

// Function Definition: GetOEMCP
typedef UINT (*GetOEMCP)(void);

// Function Definition: GetProcAddress
typedef FARPROC (*GetProcAddress)(HMODULE hModule, LPCSTR lpProcName);

// Function Definition: GetStdHandle
typedef HANDLE (*GetStdHandle)(DWORD nStdHandle);

// Function Definition: GetTimeZoneInformation
typedef DWORD (*GetTimeZoneInformation)(LPTIME_ZONE_INFORMATION lpTimeZoneInformation);

// Function Definition: GetVersion
typedef DWORD (*GetVersion)(void);

// Function Definition: GlobalAlloc
typedef HGLOBAL (*GlobalAlloc)(UINT uFlags, SIZE_T dwBytes);

// Function Definition: GlobalFree
typedef HGLOBAL (*GlobalFree)(HGLOBAL hMem);

// Function Definition: GlobalLock
typedef LPVOID (*GlobalLock)(HGLOBAL hMem);

// Function Definition: GlobalMemoryStatus
typedef void (*GlobalMemoryStatus)(LPMEMORYSTATUS lpBuffer);

// Function Definition: GlobalUnlock
typedef BOOL (*GlobalUnlock)(HGLOBAL hMem);

// Function Definition: InitializeCriticalSection
typedef void (*InitializeCriticalSection)(LPCRITICAL_SECTION lpCriticalSection);

// Function Definition: LeaveCriticalSection
typedef void (*LeaveCriticalSection)(LPCRITICAL_SECTION lpCriticalSection);

// Function Definition: LoadLibraryA
typedef HMODULE (*LoadLibraryA)(LPCSTR lpLibFileName);

// Function Definition: LocalFileTimeToFileTime
typedef BOOL (*LocalFileTimeToFileTime)(FILETIME* lpLocalFileTime, LPFILETIME lpFileTime);

// Function Definition: MoveFileA
typedef BOOL (*MoveFileA)(LPCSTR lpExistingFileName, LPCSTR lpNewFileName);

// Function Definition: MultiByteToWideChar
typedef int (*MultiByteToWideChar)(UINT CodePage, DWORD dwFlags, LPCSTR lpMultiByteStr, int cbMultiByte, LPWSTR lpWideCharStr, int cchWideChar);

// Function Definition: QueryPerformanceCounter
typedef BOOL (*QueryPerformanceCounter)(LARGE_INTEGER* lpPerformanceCount);

// Function Definition: QueryPerformanceFrequency
typedef BOOL (*QueryPerformanceFrequency)(LARGE_INTEGER* lpFrequency);

// Function Definition: ReadConsoleInputA
typedef BOOL (*ReadConsoleInputA)(HANDLE hConsoleInput, PINPUT_RECORD lpBuffer, DWORD nLength, LPDWORD lpNumberOfEventsRead);

// Function Definition: ReadFile
typedef BOOL (*ReadFile)(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped);

// Function Definition: ReleaseMutex
typedef BOOL (*ReleaseMutex)(HANDLE hMutex);

// Function Definition: SetConsoleCtrlHandler
typedef BOOL (*SetConsoleCtrlHandler)(PHANDLER_ROUTINE HandlerRoutine, BOOL Add);

// Function Definition: SetConsoleMode
typedef BOOL (*SetConsoleMode)(HANDLE hConsoleHandle, DWORD dwMode);

// Function Definition: SetCurrentDirectoryA
typedef BOOL (*SetCurrentDirectoryA)(LPCSTR lpPathName);

// Function Definition: SetEndOfFile
typedef BOOL (*SetEndOfFile)(HANDLE hFile);

// Function Definition: SetEnvironmentVariableA
typedef BOOL (*SetEnvironmentVariableA)(LPCSTR lpName, LPCSTR lpValue);

// Function Definition: SetEnvironmentVariableW
typedef BOOL (*SetEnvironmentVariableW)(LPCWSTR lpName, LPCWSTR lpValue);

// Function Definition: SetEvent
typedef BOOL (*SetEvent)(HANDLE hEvent);

// Function Definition: SetFileAttributesA
typedef BOOL (*SetFileAttributesA)(LPCSTR lpFileName, DWORD dwFileAttributes);

// Function Definition: SetFilePointer
typedef DWORD (*SetFilePointer)(HANDLE hFile, long lDistanceToMove, PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod);

// Function Definition: SetFileTime
typedef BOOL (*SetFileTime)(HANDLE hFile, FILETIME* lpCreationTime, FILETIME* lpLastAccessTime, FILETIME* lpLastWriteTime);

// Function Definition: SetLastError
typedef void (*SetLastError)(DWORD dwErrCode);

// Function Definition: SetStdHandle
typedef BOOL (*SetStdHandle)(DWORD nStdHandle, HANDLE hHandle);

// Function Definition: SetThreadPriority
typedef BOOL (*SetThreadPriority)(HANDLE hThread, int nPriority);

// Function Definition: SetUnhandledExceptionFilter
typedef LPTOP_LEVEL_EXCEPTION_FILTER (*SetUnhandledExceptionFilter)(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter);

// Function Definition: Sleep
typedef void (*Sleep)(DWORD dwMilliseconds);

// Function Definition: SystemTimeToFileTime
typedef BOOL (*SystemTimeToFileTime)(SYSTEMTIME* lpSystemTime, LPFILETIME lpFileTime);

// Function Definition: TlsAlloc
typedef DWORD (*TlsAlloc)(void);

// Function Definition: TlsFree
typedef BOOL (*TlsFree)(DWORD dwTlsIndex);

// Function Definition: TlsGetValue
typedef LPVOID (*TlsGetValue)(DWORD dwTlsIndex);

// Function Definition: TlsSetValue
typedef BOOL (*TlsSetValue)(DWORD dwTlsIndex, LPVOID lpTlsValue);

// Function Definition: UnhandledExceptionFilter
typedef long (*UnhandledExceptionFilter)(_EXCEPTION_POINTERS* ExceptionInfo);

// Function Definition: VirtualAlloc
typedef LPVOID (*VirtualAlloc)(LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect);

// Function Definition: VirtualFree
typedef BOOL (*VirtualFree)(LPVOID lpAddress, SIZE_T dwSize, DWORD dwFreeType);

// Function Definition: VirtualQuery
typedef SIZE_T (*VirtualQuery)(LPCVOID lpAddress, PMEMORY_BASIC_INFORMATION lpBuffer, SIZE_T dwLength);

// Function Definition: WaitForSingleObject
typedef DWORD (*WaitForSingleObject)(HANDLE hHandle, DWORD dwMilliseconds);

// Function Definition: WideCharToMultiByte
typedef int (*WideCharToMultiByte)(UINT CodePage, DWORD dwFlags, LPCWSTR lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte, LPCSTR lpDefaultChar, LPBOOL lpUsedDefaultChar);

// Function Definition: WriteConsoleA
typedef BOOL (*WriteConsoleA)(HANDLE hConsoleOutput, void* lpBuffer, DWORD nNumberOfCharsToWrite, LPDWORD lpNumberOfCharsWritten, LPVOID lpReserved);

// Function Definition: WriteFile
typedef BOOL (*WriteFile)(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped);

