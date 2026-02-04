#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/winbase.h"
#include "system/wincon.h"
#include "system/windef.h"
#include "system/wingdi.h"
#include "system/winnls.h"
#include "system/winnt.h"

// =============================================================================
// KERNEL32 - System Header
// =============================================================================

// Forward declarations
struct _EXCEPTION_POINTERS;

// Function Definition: CLOSE_HANDLE_FUNC
typedef BOOL (*CLOSE_HANDLE_FUNC)(HANDLE hObject);

// Function Definition: CREATE_DIRECTORY_A_FUNC
typedef BOOL (*CREATE_DIRECTORY_A_FUNC)(LPCSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes);

// Function Definition: CREATE_EVENT_A_FUNC
typedef HANDLE (*CREATE_EVENT_A_FUNC)(LPSECURITY_ATTRIBUTES lpEventAttributes, BOOL bManualReset, BOOL bInitialState, LPCSTR lpName);

// Function Definition: CREATE_FILE_A_FUNC
typedef HANDLE (*CREATE_FILE_A_FUNC)(LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);

// Function Definition: CREATE_MUTEX_A_FUNC
typedef HANDLE (*CREATE_MUTEX_A_FUNC)(LPSECURITY_ATTRIBUTES lpMutexAttributes, BOOL bInitialOwner, LPCSTR lpName);

// Function Definition: CREATE_PROCESS_A_FUNC
typedef BOOL (*CREATE_PROCESS_A_FUNC)(LPCSTR lpApplicationName, LPSTR lpCommandLine, LPSECURITY_ATTRIBUTES lpProcessAttributes, LPSECURITY_ATTRIBUTES lpThreadAttributes, BOOL bInheritHandles, DWORD dwCreationFlags, LPVOID lpEnvironment, LPCSTR lpCurrentDirectory, LPSTARTUPINFOA lpStartupInfo, LPPROCESS_INFORMATION lpProcessInformation);

// Function Definition: CREATE_THREAD_FUNC
typedef HANDLE (*CREATE_THREAD_FUNC)(LPSECURITY_ATTRIBUTES lpThreadAttributes, SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter, DWORD dwCreationFlags, LPDWORD lpThreadId);

// Function Definition: DELETE_FILE_A_FUNC
typedef BOOL (*DELETE_FILE_A_FUNC)(LPCSTR lpFileName);

// Function Definition: DOS_DATE_TIME_TO_FILE_TIME_FUNC
typedef BOOL (*DOS_DATE_TIME_TO_FILE_TIME_FUNC)(WORD wFatDate, WORD wFatTime, LPFILETIME lpFileTime);

// Function Definition: DUPLICATE_HANDLE_FUNC
typedef BOOL (*DUPLICATE_HANDLE_FUNC)(HANDLE hSourceProcessHandle, HANDLE hSourceHandle, HANDLE hTargetProcessHandle, LPHANDLE lpTargetHandle, DWORD dwDesiredAccess, BOOL bInheritHandle, DWORD dwOptions);

// Function Definition: EXIT_PROCESS_FUNC
typedef void (*EXIT_PROCESS_FUNC)(UINT uExitCode);

// Function Definition: EXIT_THREAD_FUNC
typedef void (*EXIT_THREAD_FUNC)(DWORD dwExitCode);

// Function Definition: FILE_TIME_TO_DOS_DATE_TIME_FUNC
typedef BOOL (*FILE_TIME_TO_DOS_DATE_TIME_FUNC)(FILETIME* lpFileTime, LPWORD lpFatDate, LPWORD lpFatTime);

// Function Definition: FILE_TIME_TO_LOCAL_FILE_TIME_FUNC
typedef BOOL (*FILE_TIME_TO_LOCAL_FILE_TIME_FUNC)(FILETIME* lpFileTime, LPFILETIME lpLocalFileTime);

// Function Definition: FILE_TIME_TO_SYSTEM_TIME_FUNC
typedef BOOL (*FILE_TIME_TO_SYSTEM_TIME_FUNC)(FILETIME* lpFileTime, LPSYSTEMTIME lpSystemTime);

// Function Definition: FIND_CLOSE_FUNC
typedef BOOL (*FIND_CLOSE_FUNC)(HANDLE hFindFile);

// Function Definition: FIND_FIRST_FILE_A_FUNC
typedef HANDLE (*FIND_FIRST_FILE_A_FUNC)(LPCSTR lpFileName, LPWIN32_FIND_DATAA lpFindFileData);

// Function Definition: FIND_NEXT_FILE_A_FUNC
typedef BOOL (*FIND_NEXT_FILE_A_FUNC)(HANDLE hFindFile, LPWIN32_FIND_DATAA lpFindFileData);

// Function Definition: FLUSH_FILE_BUFFERS_FUNC
typedef BOOL (*FLUSH_FILE_BUFFERS_FUNC)(HANDLE hFile);

// Function Definition: FREE_ENVIRONMENT_STRINGS_A_FUNC
typedef BOOL (*FREE_ENVIRONMENT_STRINGS_A_FUNC)(LPSTR penv);

// Function Definition: FREE_LIBRARY_FUNC
typedef BOOL (*FREE_LIBRARY_FUNC)(HMODULE hLibModule);

// Function Definition: GET_ACP_FUNC
typedef UINT (*GET_ACP_FUNC)(void);

// Function Definition: GET_COMMAND_LINE_A_FUNC
typedef LPSTR (*GET_COMMAND_LINE_A_FUNC)(void);

// Function Definition: GET_COMMAND_LINE_W_FUNC
typedef LPWSTR (*GET_COMMAND_LINE_W_FUNC)(void);

// Function Definition: GET_COMPUTER_NAME_A_FUNC
typedef BOOL (*GET_COMPUTER_NAME_A_FUNC)(LPSTR lpBuffer, LPDWORD nSize);

// Function Definition: GET_CONSOLE_MODE_FUNC
typedef BOOL (*GET_CONSOLE_MODE_FUNC)(HANDLE hConsoleHandle, LPDWORD lpMode);

// Function Definition: GET_CP_INFO_FUNC
typedef BOOL (*GET_CP_INFO_FUNC)(UINT CodePage, LPCPINFO lpCPInfo);

// Function Definition: GET_CURRENT_DIRECTORY_A_FUNC
typedef DWORD (*GET_CURRENT_DIRECTORY_A_FUNC)(DWORD nBufferLength, LPSTR lpBuffer);

// Function Definition: GET_CURRENT_PROCESS_FUNC
typedef HANDLE (*GET_CURRENT_PROCESS_FUNC)(void);

// Function Definition: GET_CURRENT_PROCESS_ID_FUNC
typedef DWORD (*GET_CURRENT_PROCESS_ID_FUNC)(void);

// Function Definition: GET_CURRENT_THREAD_FUNC
typedef HANDLE (*GET_CURRENT_THREAD_FUNC)(void);

// Function Definition: GET_CURRENT_THREAD_ID_FUNC
typedef DWORD (*GET_CURRENT_THREAD_ID_FUNC)(void);

// Function Definition: GET_ENVIRONMENT_STRINGS_FUNC
typedef LPSTR (*GET_ENVIRONMENT_STRINGS_FUNC)(void);

// Function Definition: GET_EXIT_CODE_PROCESS_FUNC
typedef BOOL (*GET_EXIT_CODE_PROCESS_FUNC)(HANDLE hProcess, LPDWORD lpExitCode);

// Function Definition: GET_FILE_ATTRIBUTES_A_FUNC
typedef DWORD (*GET_FILE_ATTRIBUTES_A_FUNC)(LPCSTR lpFileName);

// Function Definition: GET_FILE_TIME_FUNC
typedef BOOL (*GET_FILE_TIME_FUNC)(HANDLE hFile, LPFILETIME lpCreationTime, LPFILETIME lpLastAccessTime, LPFILETIME lpLastWriteTime);

// Function Definition: GET_FILE_TYPE_FUNC
typedef DWORD (*GET_FILE_TYPE_FUNC)(HANDLE hFile);

// Function Definition: GET_FULL_PATH_NAME_A_FUNC
typedef DWORD (*GET_FULL_PATH_NAME_A_FUNC)(LPCSTR lpFileName, DWORD nBufferLength, LPSTR lpBuffer, LPSTR* lpFilePart);

// Function Definition: GET_LAST_ERROR_FUNC
typedef DWORD (*GET_LAST_ERROR_FUNC)(void);

// Function Definition: GET_LOCAL_TIME_FUNC
typedef void (*GET_LOCAL_TIME_FUNC)(LPSYSTEMTIME lpSystemTime);

// Function Definition: GET_MODULE_FILE_NAME_A_FUNC
typedef DWORD (*GET_MODULE_FILE_NAME_A_FUNC)(HMODULE hModule, LPSTR lpFilename, DWORD nSize);

// Function Definition: GET_MODULE_FILE_NAME_W_FUNC
typedef DWORD (*GET_MODULE_FILE_NAME_W_FUNC)(HMODULE hModule, LPWSTR lpFilename, DWORD nSize);

// Function Definition: GET_MODULE_HANDLE_A_FUNC
typedef HMODULE (*GET_MODULE_HANDLE_A_FUNC)(LPCSTR lpModuleName);

// Function Definition: GET_OEMCP_FUNC
typedef UINT (*GET_OEMCP_FUNC)(void);

// Function Definition: GET_PROC_ADDRESS_FUNC
typedef FARPROC (*GET_PROC_ADDRESS_FUNC)(HMODULE hModule, LPCSTR lpProcName);

// Function Definition: GET_STD_HANDLE_FUNC
typedef HANDLE (*GET_STD_HANDLE_FUNC)(DWORD nStdHandle);

// Function Definition: GET_TIME_ZONE_INFORMATION_FUNC
typedef DWORD (*GET_TIME_ZONE_INFORMATION_FUNC)(LPTIME_ZONE_INFORMATION lpTimeZoneInformation);

// Function Definition: GET_VERSION_FUNC
typedef DWORD (*GET_VERSION_FUNC)(void);

// Function Definition: GLOBAL_ALLOC_FUNC
typedef HGLOBAL (*GLOBAL_ALLOC_FUNC)(UINT uFlags, SIZE_T dwBytes);

// Function Definition: GLOBAL_FREE_FUNC
typedef HGLOBAL (*GLOBAL_FREE_FUNC)(HGLOBAL hMem);

// Function Definition: GLOBAL_LOCK_FUNC
typedef LPVOID (*GLOBAL_LOCK_FUNC)(HGLOBAL hMem);

// Function Definition: GLOBAL_MEMORY_STATUS_FUNC
typedef void (*GLOBAL_MEMORY_STATUS_FUNC)(LPMEMORYSTATUS lpBuffer);

// Function Definition: GLOBAL_UNLOCK_FUNC
typedef BOOL (*GLOBAL_UNLOCK_FUNC)(HGLOBAL hMem);

// Function Definition: LOAD_LIBRARY_A_FUNC
typedef HMODULE (*LOAD_LIBRARY_A_FUNC)(LPCSTR lpLibFileName);

// Function Definition: LOCAL_FILE_TIME_TO_FILE_TIME_FUNC
typedef BOOL (*LOCAL_FILE_TIME_TO_FILE_TIME_FUNC)(FILETIME* lpLocalFileTime, LPFILETIME lpFileTime);

// Function Definition: MOVE_FILE_A_FUNC
typedef BOOL (*MOVE_FILE_A_FUNC)(LPCSTR lpExistingFileName, LPCSTR lpNewFileName);

// Function Definition: MULTI_BYTE_TO_WIDE_CHAR_FUNC
typedef int (*MULTI_BYTE_TO_WIDE_CHAR_FUNC)(UINT CodePage, DWORD dwFlags, LPCSTR lpMultiByteStr, int cbMultiByte, LPWSTR lpWideCharStr, int cchWideChar);

// Function Definition: QUERY_PERFORMANCE_COUNTER_FUNC
typedef BOOL (*QUERY_PERFORMANCE_COUNTER_FUNC)(LARGE_INTEGER* lpPerformanceCount);

// Function Definition: QUERY_PERFORMANCE_FREQUENCY_FUNC
typedef BOOL (*QUERY_PERFORMANCE_FREQUENCY_FUNC)(LARGE_INTEGER* lpFrequency);

// Function Definition: READ_CONSOLE_INPUT_A_FUNC
typedef BOOL (*READ_CONSOLE_INPUT_A_FUNC)(HANDLE hConsoleInput, PINPUT_RECORD lpBuffer, DWORD nLength, LPDWORD lpNumberOfEventsRead);

// Function Definition: READ_FILE_FUNC
typedef BOOL (*READ_FILE_FUNC)(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped);

// Function Definition: RELEASE_MUTEX_FUNC
typedef BOOL (*RELEASE_MUTEX_FUNC)(HANDLE hMutex);

// Function Definition: SET_CONSOLE_CTRL_HANDLER_FUNC
typedef BOOL (*SET_CONSOLE_CTRL_HANDLER_FUNC)(PHANDLER_ROUTINE HandlerRoutine, BOOL Add);

// Function Definition: SET_CONSOLE_MODE_FUNC
typedef BOOL (*SET_CONSOLE_MODE_FUNC)(HANDLE hConsoleHandle, DWORD dwMode);

// Function Definition: SET_CURRENT_DIRECTORY_A_FUNC
typedef BOOL (*SET_CURRENT_DIRECTORY_A_FUNC)(LPCSTR lpPathName);

// Function Definition: SET_END_OF_FILE_FUNC
typedef BOOL (*SET_END_OF_FILE_FUNC)(HANDLE hFile);

// Function Definition: SET_ENVIRONMENT_VARIABLE_A_FUNC
typedef BOOL (*SET_ENVIRONMENT_VARIABLE_A_FUNC)(LPCSTR lpName, LPCSTR lpValue);

// Function Definition: SET_ENVIRONMENT_VARIABLE_W_FUNC
typedef BOOL (*SET_ENVIRONMENT_VARIABLE_W_FUNC)(LPCWSTR lpName, LPCWSTR lpValue);

// Function Definition: SET_EVENT_FUNC
typedef BOOL (*SET_EVENT_FUNC)(HANDLE hEvent);

// Function Definition: SET_FILE_ATTRIBUTES_A_FUNC
typedef BOOL (*SET_FILE_ATTRIBUTES_A_FUNC)(LPCSTR lpFileName, DWORD dwFileAttributes);

// Function Definition: SET_FILE_POINTER_FUNC
typedef DWORD (*SET_FILE_POINTER_FUNC)(HANDLE hFile, long lDistanceToMove, PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod);

// Function Definition: SET_FILE_TIME_FUNC
typedef BOOL (*SET_FILE_TIME_FUNC)(HANDLE hFile, FILETIME* lpCreationTime, FILETIME* lpLastAccessTime, FILETIME* lpLastWriteTime);

// Function Definition: SET_LAST_ERROR_FUNC
typedef void (*SET_LAST_ERROR_FUNC)(DWORD dwErrCode);

// Function Definition: SET_STD_HANDLE_FUNC
typedef BOOL (*SET_STD_HANDLE_FUNC)(DWORD nStdHandle, HANDLE hHandle);

// Function Definition: SET_THREAD_PRIORITY_FUNC
typedef BOOL (*SET_THREAD_PRIORITY_FUNC)(HANDLE hThread, int nPriority);

// Function Definition: SET_UNHANDLED_EXCEPTION_FILTER_FUNC
typedef LPTOP_LEVEL_EXCEPTION_FILTER (*SET_UNHANDLED_EXCEPTION_FILTER_FUNC)(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter);

// Function Definition: SLEEP_FUNC
typedef void (*SLEEP_FUNC)(DWORD dwMilliseconds);

// Function Definition: SYSTEM_TIME_TO_FILE_TIME_FUNC
typedef BOOL (*SYSTEM_TIME_TO_FILE_TIME_FUNC)(SYSTEMTIME* lpSystemTime, LPFILETIME lpFileTime);

// Function Definition: TLS_ALLOC_FUNC
typedef DWORD (*TLS_ALLOC_FUNC)(void);

// Function Definition: TLS_FREE_FUNC
typedef BOOL (*TLS_FREE_FUNC)(DWORD dwTlsIndex);

// Function Definition: TLS_GET_VALUE_FUNC
typedef LPVOID (*TLS_GET_VALUE_FUNC)(DWORD dwTlsIndex);

// Function Definition: TLS_SET_VALUE_FUNC
typedef BOOL (*TLS_SET_VALUE_FUNC)(DWORD dwTlsIndex, LPVOID lpTlsValue);

// Function Definition: UNHANDLED_EXCEPTION_FILTER_FUNC
typedef long (*UNHANDLED_EXCEPTION_FILTER_FUNC)(struct _EXCEPTION_POINTERS* ExceptionInfo);

// Function Definition: VIRTUAL_ALLOC_FUNC
typedef LPVOID (*VIRTUAL_ALLOC_FUNC)(LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect);

// Function Definition: VIRTUAL_FREE_FUNC
typedef BOOL (*VIRTUAL_FREE_FUNC)(LPVOID lpAddress, SIZE_T dwSize, DWORD dwFreeType);

// Function Definition: VIRTUAL_QUERY_FUNC
typedef SIZE_T (*VIRTUAL_QUERY_FUNC)(LPCVOID lpAddress, PMEMORY_BASIC_INFORMATION lpBuffer, SIZE_T dwLength);

// Function Definition: WAIT_FOR_SINGLE_OBJECT_FUNC
typedef DWORD (*WAIT_FOR_SINGLE_OBJECT_FUNC)(HANDLE hHandle, DWORD dwMilliseconds);

// Function Definition: WIDE_CHAR_TO_MULTI_BYTE_FUNC
typedef int (*WIDE_CHAR_TO_MULTI_BYTE_FUNC)(UINT CodePage, DWORD dwFlags, LPCWSTR lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte, LPCSTR lpDefaultChar, LPBOOL lpUsedDefaultChar);

// Function Definition: WRITE_CONSOLE_A_FUNC
typedef BOOL (*WRITE_CONSOLE_A_FUNC)(HANDLE hConsoleOutput, void* lpBuffer, DWORD nNumberOfCharsToWrite, LPDWORD lpNumberOfCharsWritten, LPVOID lpReserved);

// Function Definition: WRITE_FILE_FUNC
typedef BOOL (*WRITE_FILE_FUNC)(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped);

