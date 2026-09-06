#define _GNU_SOURCE

// =============================================================================
// KERNEL32 SHIM - POSIX/SDL implementations for Win32 kernel32 API
// =============================================================================
//
// Maps kernel32 functions onto what is underneath. The standard library where
// it reaches, which is everything to do with threads, and the host's own
// interfaces where it does not:
//
//   Threads:     std::thread, and std::hash of an id where Win32 wants a number
//   Sync:        std::recursive_mutex for critical sections and Win32 mutexes,
//                std::condition_variable for events
//   TLS:         thread_local, one array of slots per thread
//   Timing:      std::this_thread::sleep_for, clock_gettime for the clocks
//   File I/O:    open/read/write/close/lseek
//   Searching:   core/file_search.cpp, shared with Watcom's _findfirst
//   Memory:      aligned operator new for VirtualAlloc, malloc for GlobalAlloc
//   Libraries:   renderer/builtin_dll.cpp — compiled in, nothing is loaded
//
// What is left of the host here is the descriptor-based file calls, which
// Windows' own runtime spells the same way under underscored names, and asking
// how much memory the machine has, which no language can. Both are marked where
// they are.
//

#include "system/kernel32.h"
#include "globals/globals_610000.h"
#include "renderer/builtin_dll.h"
#include "core/file_search.h"   // nocturne_find_files() — shared with _findfirst

#include <SDL.h>

// The threading is the standard library's. The game creates exactly one thread
// and asks for no stack size and no suspended start, which is the whole of what
// std::thread cannot express, so nothing here needs a platform thread API.
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <filesystem>
#include <mutex>
#include <system_error>
#include <thread>
#include <sys/stat.h>
// How much memory the machine has is the one question with no portable answer,
// so its header is chosen the same way its implementation is. See host_memory.
#if defined(__linux__)
#include <sys/sysinfo.h>
#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || \
      defined(__NetBSD__)
#include <sys/sysctl.h>
#endif
#include <sys/types.h>
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <vector>
#include <string>
#include <wchar.h>
#include <stdint.h>

// =============================================================================
// Handle Wrapper Types
// =============================================================================

// Convert fd to HANDLE and back
#define FD_TO_HANDLE(fd) ((HANDLE)(intptr_t)(fd))
#define HANDLE_TO_FD(h)  ((int)(intptr_t)(h))

// Handle tag for identifying wrapper types
enum HandleTag {
    HANDLE_TAG_THREAD = 0x54485244, // 'THRD'
    HANDLE_TAG_MUTEX  = 0x4D555458, // 'MUTX'
    HANDLE_TAG_EVENT  = 0x45565454, // 'EVNT'
    HANDLE_TAG_FIND   = 0x46494E44, // 'FIND'
    HANDLE_TAG_PROC   = 0x50524F43  // 'PROC'
};

// The waitable objects, on the standard library rather than on pthreads. What
// Win32 calls a mutex is recursive and can be waited on with a timeout, and what
// it calls an event is a flag with a queue behind it — both of which the
// standard library has, and neither of which is POSIX-shaped.
//
// These hold real objects now rather than plain bytes, so they are made with new
// and released with delete. The malloc/free they used to use would leave the
// mutex and the condition variable unconstructed.
struct ThreadHandle {
    int tag;
    std::thread thread;
    DWORD exitCode;
    // Read by a waiter while the thread that sets it is still running, so it is
    // atomic. It was a plain int being written and read by two threads with
    // nothing between them, which is a race whether or not it ever showed.
    std::atomic<int> finished;
};

struct MutexHandle {
    int tag;
    std::recursive_timed_mutex mutex;
};

struct EventHandle {
    int tag;
    std::mutex mutex;
    std::condition_variable cond;
    int signaled;
    int manualReset;
};

// Internal linkage: watcom.cpp has a FindHandle of its own with a different
// layout, and one class name with two definitions is an ODR violation whose
// symptom is a destructor reading the wrong field as a pointer.
namespace {

struct FindHandle {
    int tag;
    std::vector<std::string> matches;
    size_t currentIndex;
};

}  // namespace

// =============================================================================
// Thread-local last error
// =============================================================================

static __thread DWORD s_lastError = 0;

// =============================================================================
// Internal Helpers
// =============================================================================

static const HANDLE INVALID_HANDLE = (HANDLE)(intptr_t)(-1);
static const DWORD SHIM_INVALID_FILE_ATTRIBUTES = 0xFFFFFFFF;

// Win32 file open mode constants
#define WIN32_GENERIC_READ    0x80000000UL
#define WIN32_GENERIC_WRITE   0x40000000UL
#define WIN32_CREATE_NEW      1
#define WIN32_CREATE_ALWAYS   2
#define WIN32_OPEN_EXISTING   3
#define WIN32_OPEN_ALWAYS     4
#define WIN32_TRUNCATE_EXISTING 5

// Win32 file attribute constants
#define WIN32_FILE_ATTRIBUTE_READONLY   0x00000001
#define WIN32_FILE_ATTRIBUTE_HIDDEN     0x00000002
#define WIN32_FILE_ATTRIBUTE_SYSTEM     0x00000004
#define WIN32_FILE_ATTRIBUTE_DIRECTORY  0x00000010
#define WIN32_FILE_ATTRIBUTE_ARCHIVE    0x00000020
#define WIN32_FILE_ATTRIBUTE_NORMAL     0x00000080

// Win32 move method constants
#define WIN32_FILE_BEGIN   0
#define WIN32_FILE_CURRENT 1
#define WIN32_FILE_END     2

// Win32 STD handle constants
#define WIN32_STD_INPUT_HANDLE  ((DWORD)-10)
#define WIN32_STD_OUTPUT_HANDLE ((DWORD)-11)
#define WIN32_STD_ERROR_HANDLE  ((DWORD)-12)

// Win32 file type constants
#define WIN32_FILE_TYPE_DISK 0x0001
#define WIN32_FILE_TYPE_CHAR 0x0002
#define WIN32_FILE_TYPE_PIPE 0x0003

// Win32 TLS_OUT_OF_INDEXES
#define WIN32_TLS_OUT_OF_INDEXES 0xFFFFFFFF

// Win32 WAIT constants
#define WIN32_WAIT_OBJECT_0  0x00000000
#define WIN32_WAIT_TIMEOUT   0x00000102
#define WIN32_WAIT_FAILED    0xFFFFFFFF
#define WIN32_INFINITE       0xFFFFFFFF

// Win32 page protection
#define WIN32_PAGE_READWRITE 0x04

// FILETIME epoch offset: 100ns intervals between 1601-01-01 and 1970-01-01
static const unsigned long long FILETIME_EPOCH_OFFSET = 116444736000000000ULL;

static void timespec_to_filetime(const struct timespec* ts, FILETIME* ft) {
    unsigned long long val = (unsigned long long)ts->tv_sec * 10000000ULL
                           + (unsigned long long)ts->tv_nsec / 100ULL
                           + FILETIME_EPOCH_OFFSET;
    ft->dwLowDateTime = (DWORD)(val & 0xFFFFFFFF);
    ft->dwHighDateTime = (DWORD)(val >> 32);
}

static void filetime_to_timespec(const FILETIME* ft, struct timespec* ts) {
    unsigned long long val = ((unsigned long long)ft->dwHighDateTime << 32)
                           | (unsigned long long)ft->dwLowDateTime;
    val -= FILETIME_EPOCH_OFFSET;
    ts->tv_sec = (time_t)(val / 10000000ULL);
    ts->tv_nsec = (long)((val % 10000000ULL) * 100ULL);
}

// =============================================================================
// File I/O Shims
// =============================================================================

static HANDLE shim_CreateFileA(LPCSTR lpFileName, DWORD dwDesiredAccess,
    DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile)
{
    (void)dwShareMode;
    (void)lpSecurityAttributes;
    (void)dwFlagsAndAttributes;
    (void)hTemplateFile;

    int flags = 0;
    if ((dwDesiredAccess & WIN32_GENERIC_READ) && (dwDesiredAccess & WIN32_GENERIC_WRITE))
        flags = O_RDWR;
    else if (dwDesiredAccess & WIN32_GENERIC_WRITE)
        flags = O_WRONLY;
    else
        flags = O_RDONLY;

    switch (dwCreationDisposition) {
    case WIN32_CREATE_NEW:
        flags |= O_CREAT | O_EXCL;
        break;
    case WIN32_CREATE_ALWAYS:
        flags |= O_CREAT | O_TRUNC;
        break;
    case WIN32_OPEN_EXISTING:
        break;
    case WIN32_OPEN_ALWAYS:
        flags |= O_CREAT;
        break;
    case WIN32_TRUNCATE_EXISTING:
        flags |= O_TRUNC;
        break;
    }

    int fd = open(lpFileName, flags, 0666);
    if (fd < 0) {
        s_lastError = (DWORD)errno;
        return INVALID_HANDLE;
    }
    return FD_TO_HANDLE(fd);
}

static BOOL shim_ReadFile(HANDLE hFile, LPVOID lpBuffer,
    DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead,
    LPOVERLAPPED lpOverlapped)
{
    (void)lpOverlapped;
    int fd = HANDLE_TO_FD(hFile);
    ssize_t result = read(fd, lpBuffer, nNumberOfBytesToRead);
    if (result < 0) {
        s_lastError = (DWORD)errno;
        if (lpNumberOfBytesRead) *lpNumberOfBytesRead = 0;
        return 0;
    }
    if (lpNumberOfBytesRead) *lpNumberOfBytesRead = (DWORD)result;
    return 1;
}

static BOOL shim_WriteFile(HANDLE hFile, LPCVOID lpBuffer,
    DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten,
    LPOVERLAPPED lpOverlapped)
{
    (void)lpOverlapped;
    int fd = HANDLE_TO_FD(hFile);
    ssize_t result = write(fd, lpBuffer, nNumberOfBytesToWrite);
    if (result < 0) {
        s_lastError = (DWORD)errno;
        if (lpNumberOfBytesWritten) *lpNumberOfBytesWritten = 0;
        return 0;
    }
    if (lpNumberOfBytesWritten) *lpNumberOfBytesWritten = (DWORD)result;
    return 1;
}

static BOOL shim_CloseHandle(HANDLE hObject) {
    if (hObject == NULL || hObject == INVALID_HANDLE) return 0;

    // Check if this is a tagged handle
    int* tagPtr = (int*)hObject;
    switch (*tagPtr) {
    case HANDLE_TAG_THREAD: {
        ThreadHandle* th = (ThreadHandle*)hObject;
        // Closing a thread handle on Windows drops the caller's reference and
        // lets the thread run on. Detaching says the same thing. The handle
        // itself is deliberately not deleted: the thread body still holds it and
        // writes its exit code through it, and there is no way from here to know
        // whether it has finished. One leaked handle per thread, and the game
        // creates one.
        if (th->thread.joinable()) th->thread.detach();
        return 1;
    }
    case HANDLE_TAG_MUTEX: {
        delete (MutexHandle*)hObject;
        return 1;
    }
    case HANDLE_TAG_EVENT: {
        delete (EventHandle*)hObject;
        return 1;
    }
    case HANDLE_TAG_FIND: {
        FindHandle* fh = (FindHandle*)hObject;
        delete fh;
        return 1;
    }
    default:
        // Assume file descriptor
        return close(HANDLE_TO_FD(hObject)) == 0 ? 1 : 0;
    }
}

static DWORD shim_SetFilePointer(HANDLE hFile, LONGVAL lDistanceToMove,
    PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod)
{
    int fd = HANDLE_TO_FD(hFile);
    int whence;
    switch (dwMoveMethod) {
    case WIN32_FILE_BEGIN:   whence = SEEK_SET; break;
    case WIN32_FILE_CURRENT: whence = SEEK_CUR; break;
    case WIN32_FILE_END:     whence = SEEK_END; break;
    default: whence = SEEK_SET; break;
    }

    off_t offset;
    if (lpDistanceToMoveHigh) {
        offset = ((off_t)(*lpDistanceToMoveHigh) << 32) | (off_t)(unsigned long)lDistanceToMove;
    } else {
        offset = (off_t)lDistanceToMove;
    }

    off_t result = lseek(fd, offset, whence);
    if (result == (off_t)-1) {
        s_lastError = (DWORD)errno;
        return 0xFFFFFFFF;
    }
    if (lpDistanceToMoveHigh) {
        *lpDistanceToMoveHigh = (LONG)(result >> 32);
    }
    return (DWORD)(result & 0xFFFFFFFF);
}

static BOOL shim_SetEndOfFile(HANDLE hFile) {
    int fd = HANDLE_TO_FD(hFile);
    off_t pos = lseek(fd, 0, SEEK_CUR);
    if (pos == (off_t)-1) { s_lastError = (DWORD)errno; return 0; }
    if (ftruncate(fd, pos) != 0) { s_lastError = (DWORD)errno; return 0; }
    return 1;
}

static BOOL shim_FlushFileBuffers(HANDLE hFile) {
    int fd = HANDLE_TO_FD(hFile);
    return fsync(fd) == 0 ? 1 : 0;
}

static BOOL shim_DeleteFileA(LPCSTR lpFileName) {
    std::error_code ec;
    if (std::filesystem::remove(std::filesystem::path(lpFileName), ec)) return 1;
    // remove answers false without an error when there was nothing to remove.
    s_lastError = ec ? (DWORD)ec.value() : (DWORD)2;   // ERROR_FILE_NOT_FOUND
    return 0;
}

static BOOL shim_MoveFileA(LPCSTR lpExistingFileName, LPCSTR lpNewFileName) {
    if (rename(lpExistingFileName, lpNewFileName) == 0) return 1;
    s_lastError = (DWORD)errno;
    return 0;
}

static BOOL shim_CreateDirectoryA(LPCSTR lpPathName,
    LPSECURITY_ATTRIBUTES lpSecurityAttributes)
{
    (void)lpSecurityAttributes;
    std::error_code ec;
    if (std::filesystem::create_directory(std::filesystem::path(lpPathName), ec)) return 1;
    // create_directory answers false without an error when the directory is
    // already there, which Win32 reports as a failure with ERROR_ALREADY_EXISTS.
    s_lastError = ec ? (DWORD)ec.value() : (DWORD)183;
    return 0;
}

static DWORD shim_GetFileAttributesA(LPCSTR lpFileName) {
    struct stat st;
    if (stat(lpFileName, &st) != 0) {
        s_lastError = (DWORD)errno;
        return SHIM_INVALID_FILE_ATTRIBUTES;
    }
    DWORD attrs = 0;
    if (S_ISDIR(st.st_mode)) attrs |= WIN32_FILE_ATTRIBUTE_DIRECTORY;
    if (!(st.st_mode & S_IWUSR)) attrs |= WIN32_FILE_ATTRIBUTE_READONLY;
    if (attrs == 0) attrs = WIN32_FILE_ATTRIBUTE_NORMAL;
    return attrs;
}

static BOOL shim_SetFileAttributesA(LPCSTR lpFileName, DWORD dwFileAttributes) {
    (void)lpFileName;
    (void)dwFileAttributes;
    // Stub - POSIX doesn't have direct equivalent for most Win32 file attributes
    return 1;
}

static BOOL shim_GetFileTime(HANDLE hFile, LPFILETIME lpCreationTime,
    LPFILETIME lpLastAccessTime, LPFILETIME lpLastWriteTime)
{
    int fd = HANDLE_TO_FD(hFile);
    struct stat st;
    if (fstat(fd, &st) != 0) {
        s_lastError = (DWORD)errno;
        return 0;
    }
    struct timespec ts;
    if (lpCreationTime) {
        ts.tv_sec = st.st_ctime; ts.tv_nsec = 0;
        timespec_to_filetime(&ts, lpCreationTime);
    }
    if (lpLastAccessTime) {
        ts.tv_sec = st.st_atime; ts.tv_nsec = 0;
        timespec_to_filetime(&ts, lpLastAccessTime);
    }
    if (lpLastWriteTime) {
        ts.tv_sec = st.st_mtime; ts.tv_nsec = 0;
        timespec_to_filetime(&ts, lpLastWriteTime);
    }
    return 1;
}

static BOOL shim_SetFileTime(HANDLE hFile, FILETIME* lpCreationTime,
    FILETIME* lpLastAccessTime, FILETIME* lpLastWriteTime)
{
    (void)hFile;
    (void)lpCreationTime;
    (void)lpLastAccessTime;
    (void)lpLastWriteTime;
    // Stub - setting file times is complex on POSIX
    return 1;
}

static DWORD shim_GetFileType(HANDLE hFile) {
    int fd = HANDLE_TO_FD(hFile);
    struct stat st;
    if (fstat(fd, &st) != 0) return 0;
    if (S_ISREG(st.st_mode)) return WIN32_FILE_TYPE_DISK;
    if (S_ISCHR(st.st_mode)) return WIN32_FILE_TYPE_CHAR;
    if (S_ISFIFO(st.st_mode) || S_ISSOCK(st.st_mode)) return WIN32_FILE_TYPE_PIPE;
    return WIN32_FILE_TYPE_DISK;
}

static DWORD shim_GetFullPathNameA(LPCSTR lpFileName, DWORD nBufferLength,
    LPSTR lpBuffer, LPSTR* lpFilePart)
{
    char resolved[4096];
    if (!realpath(lpFileName, resolved)) {
        // If file doesn't exist, just copy the input
        strncpy(lpBuffer, lpFileName, nBufferLength);
        lpBuffer[nBufferLength - 1] = '\0';
        if (lpFilePart) {
            char* slash = strrchr(lpBuffer, '/');
            *lpFilePart = slash ? slash + 1 : lpBuffer;
        }
        return (DWORD)strlen(lpBuffer);
    }
    DWORD len = (DWORD)strlen(resolved);
    if (len + 1 > nBufferLength) return len + 1;
    strcpy(lpBuffer, resolved);
    if (lpFilePart) {
        char* slash = strrchr(lpBuffer, '/');
        *lpFilePart = slash ? slash + 1 : lpBuffer;
    }
    return len;
}

static DWORD shim_GetCurrentDirectoryA(DWORD nBufferLength, LPSTR lpBuffer) {
    std::error_code ec;
    const std::string here = std::filesystem::current_path(ec).string();
    if (ec) {
        s_lastError = (DWORD)ec.value();
        return 0;
    }
    // Win32 reports the length it needed when the buffer is too small and
    // writes nothing, rather than truncating.
    if (here.size() + 1 > (size_t)nBufferLength) return (DWORD)(here.size() + 1);
    memcpy(lpBuffer, here.c_str(), here.size() + 1);
    return (DWORD)here.size();
}

static BOOL shim_SetCurrentDirectoryA(LPCSTR lpPathName) {
    std::error_code ec;
    std::filesystem::current_path(std::filesystem::path(lpPathName), ec);
    if (!ec) return 1;
    s_lastError = (DWORD)ec.value();
    return 0;
}

// =============================================================================
// File Search Shims
// =============================================================================

static void populate_find_data(const char* path, LPWIN32_FIND_DATAA lpFindFileData) {
    memset(lpFindFileData, 0, sizeof(WIN32_FIND_DATAA));

    const char* basename = strrchr(path, '/');
    basename = basename ? basename + 1 : path;
    strncpy(lpFindFileData->cFileName, basename, 259);
    lpFindFileData->cFileName[259] = '\0';

    struct stat st;
    if (stat(path, &st) == 0) {
        if (S_ISDIR(st.st_mode))
            lpFindFileData->dwFileAttributes = WIN32_FILE_ATTRIBUTE_DIRECTORY;
        else
            lpFindFileData->dwFileAttributes = WIN32_FILE_ATTRIBUTE_NORMAL;
        lpFindFileData->nFileSizeLow = (DWORD)(st.st_size & 0xFFFFFFFF);
        lpFindFileData->nFileSizeHigh = (DWORD)((unsigned long long)st.st_size >> 32);
        struct timespec ts;
        ts.tv_sec = st.st_mtime; ts.tv_nsec = 0;
        timespec_to_filetime(&ts, &lpFindFileData->ftLastWriteTime);
        ts.tv_sec = st.st_atime;
        timespec_to_filetime(&ts, &lpFindFileData->ftLastAccessTime);
        ts.tv_sec = st.st_ctime;
        timespec_to_filetime(&ts, &lpFindFileData->ftCreationTime);
    }
}

// The search is in core/file_search.cpp, shared with Watcom's _findfirst — the
// same question asked through a different API. What is Win32's here is the
// handle, the find-data the first match is written into, and the error code for
// finding nothing.
static HANDLE shim_FindFirstFileA(LPCSTR lpFileName, LPWIN32_FIND_DATAA lpFindFileData) {
    std::vector<std::string> matches = nocturne_find_files(lpFileName);
    if (matches.empty()) {
        s_lastError = 2; // ERROR_FILE_NOT_FOUND
        return INVALID_HANDLE;
    }

    FindHandle* fh = new FindHandle();
    fh->tag = HANDLE_TAG_FIND;
    fh->matches = matches;
    // Win32 hands the first match back through the out-parameter rather than
    // making the caller ask for it, so the cursor starts on the second.
    populate_find_data(fh->matches[0].c_str(), lpFindFileData);
    fh->currentIndex = 1;
    return (HANDLE)fh;
}

static BOOL shim_FindNextFileA(HANDLE hFindFile, LPWIN32_FIND_DATAA lpFindFileData) {
    FindHandle* fh = (FindHandle*)hFindFile;
    if (!fh || fh == INVALID_HANDLE || fh->tag != HANDLE_TAG_FIND) return 0;
    if (fh->currentIndex >= fh->matches.size()) {
        s_lastError = 18; // ERROR_NO_MORE_FILES
        return 0;
    }
    populate_find_data(fh->matches[fh->currentIndex].c_str(), lpFindFileData);
    fh->currentIndex++;
    return 1;
}

static BOOL shim_FindClose(HANDLE hFindFile) {
    FindHandle* fh = (FindHandle*)hFindFile;
    if (!fh || fh == INVALID_HANDLE || fh->tag != HANDLE_TAG_FIND) return 0;
    delete fh;
    return 1;
}

// =============================================================================
// Console / Std Handle Shims
// =============================================================================

static HANDLE shim_GetStdHandle(DWORD nStdHandle) {
    switch (nStdHandle) {
    case WIN32_STD_INPUT_HANDLE:  return FD_TO_HANDLE(0);
    case WIN32_STD_OUTPUT_HANDLE: return FD_TO_HANDLE(1);
    case WIN32_STD_ERROR_HANDLE:  return FD_TO_HANDLE(2);
    default: return INVALID_HANDLE;
    }
}

static BOOL shim_SetStdHandle(DWORD nStdHandle, HANDLE hHandle) {
    int target;
    switch (nStdHandle) {
    case WIN32_STD_INPUT_HANDLE:  target = 0; break;
    case WIN32_STD_OUTPUT_HANDLE: target = 1; break;
    case WIN32_STD_ERROR_HANDLE:  target = 2; break;
    default: return 0;
    }
    return dup2(HANDLE_TO_FD(hHandle), target) >= 0 ? 1 : 0;
}

static BOOL shim_WriteConsoleA(HANDLE hConsoleOutput, void* lpBuffer,
    DWORD nNumberOfCharsToWrite, LPDWORD lpNumberOfCharsWritten, LPVOID lpReserved)
{
    (void)lpReserved;
    int fd = HANDLE_TO_FD(hConsoleOutput);
    ssize_t written = write(fd, lpBuffer, nNumberOfCharsToWrite);
    if (written < 0) {
        s_lastError = (DWORD)errno;
        if (lpNumberOfCharsWritten) *lpNumberOfCharsWritten = 0;
        return 0;
    }
    if (lpNumberOfCharsWritten) *lpNumberOfCharsWritten = (DWORD)written;
    return 1;
}

static BOOL shim_GetConsoleMode(HANDLE hConsoleHandle, LPDWORD lpMode) {
    (void)hConsoleHandle;
    if (lpMode) *lpMode = 0;
    return 1;
}

static BOOL shim_SetConsoleMode(HANDLE hConsoleHandle, DWORD dwMode) {
    (void)hConsoleHandle;
    (void)dwMode;
    return 1;
}

static BOOL shim_SetConsoleCtrlHandler(PHANDLER_ROUTINE HandlerRoutine, BOOL Add) {
    (void)HandlerRoutine;
    (void)Add;
    // Stub - could use signal() but not critical
    return 1;
}

static BOOL shim_ReadConsoleInputA(HANDLE hConsoleInput, PINPUT_RECORD lpBuffer,
    DWORD nLength, LPDWORD lpNumberOfEventsRead)
{
    (void)hConsoleInput;
    (void)lpBuffer;
    (void)nLength;
    if (lpNumberOfEventsRead) *lpNumberOfEventsRead = 0;
    return 0;
}

// =============================================================================
// Thread Shims
// =============================================================================

static HANDLE shim_CreateThread(LPSECURITY_ATTRIBUTES lpThreadAttributes,
    SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress,
    LPVOID lpParameter, DWORD dwCreationFlags, LPDWORD lpThreadId)
{
    (void)lpThreadAttributes;
    (void)dwCreationFlags;   // CREATE_SUSPENDED not supported
    // A stack size cannot be asked for through std::thread. The game's one call
    // site passes zero, meaning "whatever the default is", so there is nothing
    // to honour — and adding a threading library to carry a parameter nobody
    // sets would be paying for it twice.
    (void)dwStackSize;

    ThreadHandle* th = new (std::nothrow) ThreadHandle();
    if (!th) { s_lastError = 8; return NULL; }
    th->tag = HANDLE_TAG_THREAD;
    th->exitCode = 0;
    th->finished = 0;

    // The handle is captured, so it has to outlive the thread body. Every path
    // that releases one either joins first or detaches and leaks deliberately —
    // see CloseHandle.
    th->thread = std::thread([th, lpStartAddress, lpParameter]() {
        th->exitCode = lpStartAddress(lpParameter);
        th->finished = 1;
    });

    if (lpThreadId) {
        *lpThreadId = (DWORD)std::hash<std::thread::id>()(th->thread.get_id());
    }
    return (HANDLE)th;
}

static void shim_ExitThread(DWORD dwExitCode) {
    (void)dwExitCode;
    // Win32 ends the calling thread here and unwinds nothing. The standard
    // library has no equivalent — a thread ends by returning from its body —
    // and the game never calls this: its one thread runs to the end of the
    // routine it was given. Left as a no-op rather than reaching for a platform
    // call to implement something with no caller.
}

static BOOL shim_SetThreadPriority(HANDLE hThread, int nPriority) {
    (void)hThread;
    (void)nPriority;
    // Stub - POSIX thread priorities work differently
    return 1;
}

static HANDLE shim_GetCurrentThread(void) {
    // Return a pseudo-handle
    return (HANDLE)(intptr_t)-2;
}

static DWORD shim_GetCurrentThreadId(void) {
    return (DWORD)std::hash<std::thread::id>()(std::this_thread::get_id());
}

// =============================================================================
// Mutex / Event Shims
// =============================================================================

static HANDLE shim_CreateMutexA(LPSECURITY_ATTRIBUTES lpMutexAttributes,
    BOOL bInitialOwner, LPCSTR lpName)
{
    (void)lpMutexAttributes;
    (void)lpName;

    MutexHandle* mh = new (std::nothrow) MutexHandle();
    if (!mh) { s_lastError = 8; return NULL; }
    mh->tag = HANDLE_TAG_MUTEX;

    if (bInitialOwner) {
        mh->mutex.lock();
    }
    return (HANDLE)mh;
}

static BOOL shim_ReleaseMutex(HANDLE hMutex) {
    MutexHandle* mh = (MutexHandle*)hMutex;
    if (!mh || mh->tag != HANDLE_TAG_MUTEX) return 0;
    mh->mutex.unlock();
    return 1;
}

static HANDLE shim_CreateEventA(LPSECURITY_ATTRIBUTES lpEventAttributes,
    BOOL bManualReset, BOOL bInitialState, LPCSTR lpName)
{
    (void)lpEventAttributes;
    (void)lpName;

    EventHandle* eh = new (std::nothrow) EventHandle();
    if (!eh) { s_lastError = 8; return NULL; }
    eh->tag = HANDLE_TAG_EVENT;
    eh->manualReset = bManualReset;
    eh->signaled = bInitialState ? 1 : 0;
    return (HANDLE)eh;
}

static BOOL shim_SetEvent(HANDLE hEvent) {
    EventHandle* eh = (EventHandle*)hEvent;
    if (!eh || eh->tag != HANDLE_TAG_EVENT) return 0;
    {
        std::lock_guard<std::mutex> held(eh->mutex);
        eh->signaled = 1;
    }
    // A manual-reset event stays signalled, so everyone waiting can go; an
    // automatic one is taken by whoever wakes first, so only one is woken.
    if (eh->manualReset) eh->cond.notify_all();
    else                 eh->cond.notify_one();
    return 1;
}

static DWORD shim_WaitForSingleObject(HANDLE hHandle, DWORD dwMilliseconds) {
    if (!hHandle) return WIN32_WAIT_FAILED;

    const std::chrono::milliseconds timeout((long long)dwMilliseconds);
    const bool forever = (dwMilliseconds == WIN32_INFINITE);

    int* tagPtr = (int*)hHandle;
    if (*tagPtr == HANDLE_TAG_MUTEX) {
        MutexHandle* mh = (MutexHandle*)hHandle;
        // Waiting on a mutex is taking it. It stays taken until ReleaseMutex,
        // which is why this does not use a lock guard.
        if (forever) {
            mh->mutex.lock();
            return WIN32_WAIT_OBJECT_0;
        }
        return mh->mutex.try_lock_for(timeout) ? WIN32_WAIT_OBJECT_0 : WIN32_WAIT_TIMEOUT;
    }

    if (*tagPtr == HANDLE_TAG_EVENT) {
        EventHandle* eh = (EventHandle*)hHandle;
        std::unique_lock<std::mutex> held(eh->mutex);
        if (forever) {
            // The predicate form, which re-checks after every wake and so is not
            // fooled by a spurious one.
            eh->cond.wait(held, [eh]() { return eh->signaled != 0; });
        } else if (!eh->cond.wait_for(held, timeout, [eh]() { return eh->signaled != 0; })) {
            return WIN32_WAIT_TIMEOUT;
        }
        // An automatic event is consumed by the wait that takes it; a
        // manual-reset one stays signalled until ResetEvent.
        if (!eh->manualReset) eh->signaled = 0;
        return WIN32_WAIT_OBJECT_0;
    }

    if (*tagPtr == HANDLE_TAG_THREAD) {
        ThreadHandle* th = (ThreadHandle*)hHandle;
        if (forever) {
            if (th->thread.joinable()) th->thread.join();
            return WIN32_WAIT_OBJECT_0;
        }
        // A timed wait for a thread has no direct expression: joining cannot be
        // given a deadline. The thread reports its own end, so this asks. It is
        // a poll rather than a wait — the same shape as before, and the game
        // only ever waits on its one thread without a timeout.
        return th->finished ? WIN32_WAIT_OBJECT_0 : WIN32_WAIT_TIMEOUT;
    }
    return WIN32_WAIT_FAILED;
}

// =============================================================================
// Critical Section Shims
// =============================================================================

// A CRITICAL_SECTION is the game's own struct, so the lock cannot live inside
// it — it is carried in the LockSemaphore field, which is where Windows keeps
// something of its own too. Recursive, because that is what a critical section
// is: the thread holding one can enter it again.
static void shim_InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection) {
    std::recursive_mutex* mtx = new (std::nothrow) std::recursive_mutex();
    lpCriticalSection->LockSemaphore = (HANDLE)mtx;
    lpCriticalSection->LockCount = -1;
    lpCriticalSection->RecursionCount = 0;
    lpCriticalSection->OwningThread = NULL;
}

static void shim_DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection) {
    std::recursive_mutex* mtx = (std::recursive_mutex*)lpCriticalSection->LockSemaphore;
    if (mtx) {
        delete mtx;
        lpCriticalSection->LockSemaphore = NULL;
    }
}

static void shim_EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection) {
    std::recursive_mutex* mtx = (std::recursive_mutex*)lpCriticalSection->LockSemaphore;
    if (mtx) mtx->lock();
}

static void shim_LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection) {
    std::recursive_mutex* mtx = (std::recursive_mutex*)lpCriticalSection->LockSemaphore;
    if (mtx) mtx->unlock();
}

// =============================================================================
// Process Shims
// =============================================================================

static BOOL shim_CreateProcessA(LPCSTR lpApplicationName, LPSTR lpCommandLine,
    LPSECURITY_ATTRIBUTES lpProcessAttributes,
    LPSECURITY_ATTRIBUTES lpThreadAttributes, BOOL bInheritHandles,
    DWORD dwCreationFlags, LPVOID lpEnvironment, LPCSTR lpCurrentDirectory,
    LPSTARTUPINFOA lpStartupInfo, LPPROCESS_INFORMATION lpProcessInformation)
{
    (void)lpApplicationName; (void)lpCommandLine;
    (void)lpProcessAttributes; (void)lpThreadAttributes;
    (void)bInheritHandles; (void)dwCreationFlags;
    (void)lpEnvironment; (void)lpCurrentDirectory;
    (void)lpStartupInfo; (void)lpProcessInformation;
    // Stub - process creation is complex
    s_lastError = 5; // ERROR_ACCESS_DENIED
    return 0;
}

static void shim_ExitProcess(UINT uExitCode) {
    _exit((int)uExitCode);
}

static HANDLE shim_GetCurrentProcess(void) {
    return (HANDLE)(intptr_t)-1; // Pseudo-handle
}

static DWORD shim_GetCurrentProcessId(void) {
    return (DWORD)getpid();
}

static BOOL shim_GetExitCodeProcess(HANDLE hProcess, LPDWORD lpExitCode) {
    (void)hProcess;
    if (lpExitCode) *lpExitCode = 0;
    return 1;
}

static BOOL shim_DuplicateHandle(HANDLE hSourceProcessHandle, HANDLE hSourceHandle,
    HANDLE hTargetProcessHandle, LPHANDLE lpTargetHandle,
    DWORD dwDesiredAccess, BOOL bInheritHandle, DWORD dwOptions)
{
    (void)hSourceProcessHandle; (void)hTargetProcessHandle;
    (void)dwDesiredAccess; (void)bInheritHandle; (void)dwOptions;
    int newfd = dup(HANDLE_TO_FD(hSourceHandle));
    if (newfd < 0) {
        s_lastError = (DWORD)errno;
        return 0;
    }
    if (lpTargetHandle) *lpTargetHandle = FD_TO_HANDLE(newfd);
    return 1;
}

// =============================================================================
// Memory Shims
// =============================================================================

// VirtualAlloc, as far as the language goes.
//
// The whole of what the game asks of it is page-aligned read-write memory, and
// even that only from src/crt, which is not compiled — the host's own runtime is
// linked instead. So the caller set is empty and this exists to keep the
// function-pointer table honest.
//
// Three things a real VirtualAlloc does cannot be expressed portably: memory at
// a chosen address, reserving without committing, and pages that can be
// executed. Rather than quietly hand back something that is none of those, each
// is refused. A silent substitution here would be the worst kind: the caller
// asked for a guarantee and would carry on believing it had one.
static const DWORD kPageSize = 4096;

static LPVOID shim_VirtualAlloc(LPVOID lpAddress, SIZE_T dwSize,
    DWORD flAllocationType, DWORD flProtect)
{
    // PAGE_EXECUTE, _READ, _READWRITE — nothing in the language grants these.
    if (flProtect & (0x10 | 0x20 | 0x40 | 0x80)) {
        s_lastError = 50;   // ERROR_NOT_SUPPORTED
        return NULL;
    }
    // A specific base address is a request about the address space itself.
    if (lpAddress != NULL) {
        s_lastError = 50;
        return NULL;
    }
    // MEM_RESERVE without MEM_COMMIT wants address space with no memory behind
    // it, which is the same kind of request.
    if ((flAllocationType & 0x2000) && !(flAllocationType & 0x1000)) {
        s_lastError = 50;
        return NULL;
    }
    if (dwSize == 0) { s_lastError = 87; return NULL; }   // ERROR_INVALID_PARAMETER

    // Rounded up to a page and aligned to one, because callers of VirtualAlloc
    // are entitled to both.
    const SIZE_T rounded = ((dwSize + kPageSize - 1) / kPageSize) * kPageSize;
    void* result = ::operator new(rounded, std::align_val_t(kPageSize),
                                  std::nothrow);
    if (result == NULL) {
        s_lastError = 8;    // ERROR_NOT_ENOUGH_MEMORY
        return NULL;
    }
    // VirtualAlloc hands back zeroed pages and callers rely on it.
    memset(result, 0, rounded);
    return result;
}

static BOOL shim_VirtualFree(LPVOID lpAddress, SIZE_T dwSize, DWORD dwFreeType) {
    (void)dwSize;
    (void)dwFreeType;
    if (lpAddress == NULL) return 0;
    ::operator delete(lpAddress, std::align_val_t(kPageSize));
    return 1;
}

static SIZE_T shim_VirtualQuery(LPCVOID lpAddress, PMEMORY_BASIC_INFORMATION lpBuffer,
    SIZE_T dwLength)
{
    (void)lpAddress;
    if (!lpBuffer || dwLength < sizeof(_MEMORY_BASIC_INFORMATION)) return 0;
    memset(lpBuffer, 0, sizeof(_MEMORY_BASIC_INFORMATION));
    lpBuffer->BaseAddress = (PVOID)lpAddress;
    lpBuffer->RegionSize = 4096;
    lpBuffer->State = 0x1000; // MEM_COMMIT
    lpBuffer->Protect = WIN32_PAGE_READWRITE;
    return sizeof(_MEMORY_BASIC_INFORMATION);
}

static HGLOBAL shim_GlobalAlloc(UINT uFlags, SIZE_T dwBytes) {
    (void)uFlags;
    void* ptr = calloc(1, dwBytes > 0 ? dwBytes : 1);
    return (HGLOBAL)ptr;
}

static HGLOBAL shim_GlobalFree(HGLOBAL hMem) {
    free(hMem);
    return NULL;
}

static LPVOID shim_GlobalLock(HGLOBAL hMem) {
    // GlobalLock on GMEM_FIXED is just a cast
    return (LPVOID)hMem;
}

static BOOL shim_GlobalUnlock(HGLOBAL hMem) {
    (void)hMem;
    return 1;
}

// Every MEMORYSTATUS field is capped at INT_MAX, because the game copies
// dwTotalPhys and dwAvailPageFile into `int` globals (g_TotalPhysicalMemory /
// g_AvailableSwapSpace) and then, in initializeGameSystems, compares them
// SIGNED against 60 MB and 200 MB to decide whether to raise the "Nocturne
// requires at least 64MB of system RAM" warning. A value past INT_MAX arrives
// negative, trips both checks, and prints a negative megabyte figure — which
// is exactly how this warning misfires on modern Windows, where the same
// 32-bit-era API is documented to report -1 above 4 GB. Saturating keeps the
// value positive and comfortably over both thresholds.
static SIZE_T mem_status_clamp(unsigned long long bytes) {
    const unsigned long long cap = 0x7FFFFFFFull;
    return (SIZE_T)(bytes > cap ? cap : bytes);
}

// Linux counts reclaimable page cache as used, so sysinfo's freeram badly
// understates what a process can actually obtain — on a normally-warm machine
// it can sit under the 200 MB the swap warning tests against while gigabytes
// are in fact available. MemAvailable is the kernel's own estimate of that and
// is the honest number to judge those thresholds by. Returns 0 if unreadable.
// How much memory the machine has, which the language does not know and cannot
// be asked. Every host answers it differently, so this is the one place in the
// shims that selects on the platform, and it is written so that a host nobody
// has tried still compiles and still starts the game.
struct HostMemory {
    unsigned long long total_phys;
    unsigned long long avail_phys;
    unsigned long long total_commit;   // Windows' commit limit: RAM plus backing
    unsigned long long avail_commit;
};

// The figures used when the host cannot be asked. Not zero: the game warns that
// it "runs best with at least 200MB free" and would say so on every start, and
// sizes caches from these. A modest machine is the safe thing to claim to be.
static void host_memory_fallback(HostMemory *out) {
    out->total_phys   = 256ull * 1024 * 1024;
    out->avail_phys   = 128ull * 1024 * 1024;
    out->total_commit = 512ull * 1024 * 1024;
    out->avail_commit = 512ull * 1024 * 1024;
}

#if defined(__linux__)

// MemAvailable is the kernel's own estimate of what a new allocation could
// actually get, which is a better answer than free memory: most of a healthy
// machine's RAM is cache it would give back.
static unsigned long long linux_available_bytes(void) {
    FILE* f = fopen("/proc/meminfo", "r");
    if (!f) return 0;
    char line[256];
    unsigned long long kb = 0;
    while (fgets(line, sizeof(line), f)) {
        if (strncmp(line, "MemAvailable:", 13) == 0) {
            if (sscanf(line + 13, "%llu", &kb) != 1) kb = 0;
            break;
        }
    }
    fclose(f);
    return kb * 1024ull;
}

static void host_memory(HostMemory *out) {
    struct sysinfo si;
    if (sysinfo(&si) != 0) { host_memory_fallback(out); return; }

    const unsigned long long unit = si.mem_unit ? si.mem_unit : 1;
    out->total_phys = (unsigned long long)si.totalram * unit;
    out->avail_phys = linux_available_bytes();
    if (out->avail_phys == 0) {
        out->avail_phys = ((unsigned long long)si.freeram +
                           (unsigned long long)si.bufferram) * unit;
    }
    // The page-file fields are Windows' commit limit and remaining commit,
    // which span RAM plus backing store — not the swap device alone. Match
    // that: a swapless host would otherwise report a 0-byte page file and
    // trip the "runs best with at least 200MB free" warning on every start.
    out->total_commit = out->total_phys + (unsigned long long)si.totalswap * unit;
    out->avail_commit = out->avail_phys + (unsigned long long)si.freeswap * unit;
}

#elif defined(_WIN32)

// Straight through: the game is asking a Windows question and this is a
// Windows host, so the shim is the identity.
static void host_memory(HostMemory *out) {
    MEMORYSTATUSEX status;
    status.dwLength = sizeof(status);
    if (!GlobalMemoryStatusEx(&status)) { host_memory_fallback(out); return; }
    out->total_phys   = status.ullTotalPhys;
    out->avail_phys   = status.ullAvailPhys;
    out->total_commit = status.ullTotalPageFile;
    out->avail_commit = status.ullAvailPageFile;
}

#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || \
      defined(__NetBSD__)

// The BSDs and macOS answer through sysctl. Total is asked for directly;
// available is not reported in a form that means the same thing, so it is left
// as a fraction of total rather than invented more precisely than it is known.
static void host_memory(HostMemory *out) {
    uint64_t total = 0;
    size_t length = sizeof(total);
#if defined(__APPLE__)
    const char *name = "hw.memsize";
#else
    const char *name = "hw.physmem";
#endif
    if (sysctlbyname(name, &total, &length, NULL, 0) != 0 || total == 0) {
        host_memory_fallback(out);
        return;
    }
    out->total_phys   = total;
    out->avail_phys   = total / 2;
    out->total_commit = total;
    out->avail_commit = total / 2;
}

#else

// A host nobody has tried yet. It compiles, it starts, and the figures say a
// modest machine — which is the honest answer to a question this build cannot
// ask here.
static void host_memory(HostMemory *out) { host_memory_fallback(out); }

#endif

static void shim_GlobalMemoryStatus(LPMEMORYSTATUS lpBuffer) {
    if (!lpBuffer) return;
    memset(lpBuffer, 0, sizeof(_MEMORYSTATUS));
    lpBuffer->dwLength = sizeof(_MEMORYSTATUS);

    HostMemory memory;
    host_memory(&memory);

    lpBuffer->dwTotalPhys     = mem_status_clamp(memory.total_phys);
    lpBuffer->dwAvailPhys     = mem_status_clamp(memory.avail_phys);
    lpBuffer->dwTotalPageFile = mem_status_clamp(memory.total_commit);
    lpBuffer->dwAvailPageFile = mem_status_clamp(memory.avail_commit);
    // Address space, not memory: the 2 GB user half of a 32-bit process.
    lpBuffer->dwTotalVirtual = 0x7FFFFFFF;
    lpBuffer->dwAvailVirtual = 0x7FFFFFFF;
    lpBuffer->dwMemoryLoad =
        (memory.total_phys != 0 && memory.avail_phys < memory.total_phys)
            ? (DWORD)(((memory.total_phys - memory.avail_phys) * 100) / memory.total_phys)
            : 0;
}

// =============================================================================
// Library Shims
// =============================================================================

// There is no dynamic loading here, and there is nothing to load.
//
// Every library the game asks for by name is a renderer — tridx7, trigl and the
// three the shipped game offered and this build does not have — and all of them
// are compiled in and answered from the registry in renderer/builtin_dll.cpp.
// The game's own LoadLibrary/GetProcAddress path runs unmodified against our
// code, which is the point of keeping these entry points at all.
//
// So there is no fallback to the host's loader. A name the registry does not
// know is one this build does not have, and the answer is the same either way:
// a DLL that is not there. Reaching for the host's loader would only ask a
// second time, in a form no other platform spells the same, for a file nobody
// ships. The one non-renderer name in the game, winmm.dll, never reaches here —
// it is asked for with GetModuleHandle, and the joystick calls it goes on to
// make are shimmed directly.
static HMODULE shim_LoadLibraryA(LPCSTR lpLibFileName) {
    void* builtin = nocturne_builtin_dll_open(lpLibFileName);
    if (builtin) return (HMODULE)builtin;
    s_lastError = 126; // ERROR_MOD_NOT_FOUND
    return NULL;
}

static BOOL shim_FreeLibrary(HMODULE hLibModule) {
    // Built-in modules are static data — nothing to unload, and nothing else
    // can have been loaded.
    return nocturne_builtin_dll_is_handle((void*)hLibModule) ? 1 : 0;
}

static FARPROC shim_GetProcAddress(HMODULE hModule, LPCSTR lpProcName) {
    if (nocturne_builtin_dll_is_handle((void*)hModule)) {
        void* proc = nocturne_builtin_dll_sym((void*)hModule, lpProcName);
        if (!proc) {
            s_lastError = 127; // ERROR_PROC_NOT_FOUND
        }
        return (FARPROC)proc;
    }
    // Not a registry handle, so not a module this build has. Nothing else can
    // have produced a handle: LoadLibrary only ever returns one of those.
    s_lastError = 127; // ERROR_PROC_NOT_FOUND
    return NULL;
}

// A handle for a module already loaded, which here means one of the compiled-in
// ones. Asking about anything else answers no.
//
// The game asks for winmm.dll here, to look up joyGetPosEx. It has never been
// found — the answer was no before this too — and the extended joystick read is
// simply not used: the plain joyGetPos beside it is shimmed and is what the game
// falls back to.
static HMODULE shim_GetModuleHandleA(LPCSTR lpModuleName) {
    // NULL asks for the running program itself. There is no handle for it here,
    // and no caller wants one — the game passes a name.
    if (!lpModuleName) return NULL;
    return (HMODULE)nocturne_builtin_dll_open(lpModuleName);
}

static DWORD shim_GetModuleFileNameA(HMODULE hModule, LPSTR lpFilename, DWORD nSize) {
    (void)hModule;
    ssize_t len = readlink("/proc/self/exe", lpFilename, nSize - 1);
    if (len < 0) {
        if (nSize > 0) lpFilename[0] = '\0';
        return 0;
    }
    lpFilename[len] = '\0';
    return (DWORD)len;
}

static DWORD shim_GetModuleFileNameW(HMODULE hModule, LPWSTR lpFilename, DWORD nSize) {
    (void)hModule;
    char buf[4096];
    ssize_t len = readlink("/proc/self/exe", buf, sizeof(buf) - 1);
    if (len < 0) {
        if (nSize > 0) lpFilename[0] = L'\0';
        return 0;
    }
    buf[len] = '\0';
    // Simple ASCII->wchar conversion
    DWORD i;
    for (i = 0; i < (DWORD)len && i < nSize - 1; i++) {
        lpFilename[i] = (wchar_t)buf[i];
    }
    lpFilename[i] = L'\0';
    return i;
}

// =============================================================================
// Time / Performance Shims
// =============================================================================

static BOOL shim_QueryPerformanceCounter(LARGE_INTEGER* lpPerformanceCount) {
    // steady_clock is the one that only goes forwards. A performance counter
    // that could step backwards when the system clock is corrected would make
    // every elapsed-time measurement in the game briefly negative.
    const std::chrono::nanoseconds since =
        std::chrono::steady_clock::now().time_since_epoch();
    lpPerformanceCount->QuadPart = (LONGLONG)since.count();
    return 1;
}

static BOOL shim_QueryPerformanceFrequency(LARGE_INTEGER* lpFrequency) {
    lpFrequency->QuadPart = 1000000000LL; // nanoseconds
    return 1;
}

static void shim_Sleep(DWORD dwMilliseconds) {
    SDL_Delay(dwMilliseconds);
}

static void shim_GetLocalTime(LPSYSTEMTIME lpSystemTime) {
    time_t now = time(NULL);
    struct tm tm_buf;
    localtime_r(&now, &tm_buf);
    lpSystemTime->wYear = (WORD)(tm_buf.tm_year + 1900);
    lpSystemTime->wMonth = (WORD)(tm_buf.tm_mon + 1);
    lpSystemTime->wDayOfWeek = (WORD)tm_buf.tm_wday;
    lpSystemTime->wDay = (WORD)tm_buf.tm_mday;
    lpSystemTime->wHour = (WORD)tm_buf.tm_hour;
    lpSystemTime->wMinute = (WORD)tm_buf.tm_min;
    lpSystemTime->wSecond = (WORD)tm_buf.tm_sec;
    lpSystemTime->wMilliseconds = 0;
}

static DWORD shim_GetTimeZoneInformation(LPTIME_ZONE_INFORMATION lpTimeZoneInformation) {
    memset(lpTimeZoneInformation, 0, sizeof(_TIME_ZONE_INFORMATION));
    time_t now = time(NULL);
    struct tm tm_buf;
    localtime_r(&now, &tm_buf);
    lpTimeZoneInformation->Bias = (LONG)(-(tm_buf.tm_gmtoff / 60));
    return 0; // TIME_ZONE_ID_UNKNOWN
}

static DWORD shim_GetVersion(void) {
    // Return Windows NT 5.0 (Windows 2000) - matches game era
    return 0x05000000;
}

// =============================================================================
// FILETIME Conversion Shims
// =============================================================================

static BOOL shim_FileTimeToLocalFileTime(FILETIME* lpFileTime, LPFILETIME lpLocalFileTime) {
    // Convert UTC FILETIME to local by applying timezone offset
    struct timespec ts;
    filetime_to_timespec(lpFileTime, &ts);
    struct tm tm_buf;
    localtime_r(&ts.tv_sec, &tm_buf);
    // Recompute with local offset
    time_t local = ts.tv_sec + tm_buf.tm_gmtoff;
    ts.tv_sec = local;
    timespec_to_filetime(&ts, lpLocalFileTime);
    return 1;
}

static BOOL shim_LocalFileTimeToFileTime(FILETIME* lpLocalFileTime, LPFILETIME lpFileTime) {
    struct timespec ts;
    filetime_to_timespec(lpLocalFileTime, &ts);
    struct tm tm_buf;
    localtime_r(&ts.tv_sec, &tm_buf);
    time_t utc = ts.tv_sec - tm_buf.tm_gmtoff;
    ts.tv_sec = utc;
    timespec_to_filetime(&ts, lpFileTime);
    return 1;
}

static BOOL shim_FileTimeToSystemTime(FILETIME* lpFileTime, LPSYSTEMTIME lpSystemTime) {
    struct timespec ts;
    filetime_to_timespec(lpFileTime, &ts);
    struct tm tm_buf;
    gmtime_r(&ts.tv_sec, &tm_buf);
    lpSystemTime->wYear = (WORD)(tm_buf.tm_year + 1900);
    lpSystemTime->wMonth = (WORD)(tm_buf.tm_mon + 1);
    lpSystemTime->wDayOfWeek = (WORD)tm_buf.tm_wday;
    lpSystemTime->wDay = (WORD)tm_buf.tm_mday;
    lpSystemTime->wHour = (WORD)tm_buf.tm_hour;
    lpSystemTime->wMinute = (WORD)tm_buf.tm_min;
    lpSystemTime->wSecond = (WORD)tm_buf.tm_sec;
    lpSystemTime->wMilliseconds = (WORD)(ts.tv_nsec / 1000000);
    return 1;
}

static BOOL shim_SystemTimeToFileTime(SYSTEMTIME* lpSystemTime, LPFILETIME lpFileTime) {
    struct tm tm_buf;
    memset(&tm_buf, 0, sizeof(tm_buf));
    tm_buf.tm_year = lpSystemTime->wYear - 1900;
    tm_buf.tm_mon = lpSystemTime->wMonth - 1;
    tm_buf.tm_mday = lpSystemTime->wDay;
    tm_buf.tm_hour = lpSystemTime->wHour;
    tm_buf.tm_min = lpSystemTime->wMinute;
    tm_buf.tm_sec = lpSystemTime->wSecond;
    time_t t = timegm(&tm_buf);
    struct timespec ts;
    ts.tv_sec = t;
    ts.tv_nsec = (long)lpSystemTime->wMilliseconds * 1000000L;
    timespec_to_filetime(&ts, lpFileTime);
    return 1;
}

static BOOL shim_DosDateTimeToFileTime(WORD wFatDate, WORD wFatTime, LPFILETIME lpFileTime) {
    struct tm tm_buf;
    memset(&tm_buf, 0, sizeof(tm_buf));
    tm_buf.tm_year = ((wFatDate >> 9) & 0x7F) + 80;
    tm_buf.tm_mon = ((wFatDate >> 5) & 0x0F) - 1;
    tm_buf.tm_mday = wFatDate & 0x1F;
    tm_buf.tm_hour = (wFatTime >> 11) & 0x1F;
    tm_buf.tm_min = (wFatTime >> 5) & 0x3F;
    tm_buf.tm_sec = (wFatTime & 0x1F) * 2;
    time_t t = timegm(&tm_buf);
    struct timespec ts;
    ts.tv_sec = t;
    ts.tv_nsec = 0;
    timespec_to_filetime(&ts, lpFileTime);
    return 1;
}

static BOOL shim_FileTimeToDosDateTime(FILETIME* lpFileTime, LPWORD lpFatDate, LPWORD lpFatTime) {
    struct timespec ts;
    filetime_to_timespec(lpFileTime, &ts);
    struct tm tm_buf;
    gmtime_r(&ts.tv_sec, &tm_buf);
    if (lpFatDate) {
        *lpFatDate = (WORD)(((tm_buf.tm_year - 80) << 9) |
                            ((tm_buf.tm_mon + 1) << 5) |
                            tm_buf.tm_mday);
    }
    if (lpFatTime) {
        *lpFatTime = (WORD)((tm_buf.tm_hour << 11) |
                            (tm_buf.tm_min << 5) |
                            (tm_buf.tm_sec / 2));
    }
    return 1;
}

// =============================================================================
// TLS Shims
// =============================================================================

// Thread-local storage. Win32 hands out an index and stores a pointer per slot
// per thread; `thread_local` gives exactly that when the slots are an array —
// each thread gets its own copy, created when it first touches one and released
// with the thread, which is what pthread keys were being used to arrange.
//
// Which slots are in use is shared and needs a lock. What is IN a slot is not:
// it is per thread by construction, and that is the whole point of it.
#define MAX_TLS_SLOTS 64
static bool s_tlsUsed[MAX_TLS_SLOTS];
static std::mutex s_tlsMutex;
static thread_local LPVOID s_tlsValues[MAX_TLS_SLOTS];

static DWORD shim_TlsAlloc(void) {
    std::lock_guard<std::mutex> held(s_tlsMutex);
    for (int i = 0; i < MAX_TLS_SLOTS; i++) {
        if (!s_tlsUsed[i]) {
            s_tlsUsed[i] = true;
            return (DWORD)i;
        }
    }
    return WIN32_TLS_OUT_OF_INDEXES;
}

static BOOL shim_TlsFree(DWORD dwTlsIndex) {
    if (dwTlsIndex >= MAX_TLS_SLOTS) return 0;
    std::lock_guard<std::mutex> held(s_tlsMutex);
    if (!s_tlsUsed[dwTlsIndex]) return 0;
    s_tlsUsed[dwTlsIndex] = false;
    // Only this thread's copy can be cleared from here, which is the same reach
    // pthread_key_delete had: it releases the key without touching the values
    // other threads left behind.
    s_tlsValues[dwTlsIndex] = NULL;
    return 1;
}

static LPVOID shim_TlsGetValue(DWORD dwTlsIndex) {
    if (dwTlsIndex >= MAX_TLS_SLOTS || !s_tlsUsed[dwTlsIndex]) {
        s_lastError = 0;
        return NULL;
    }
    return s_tlsValues[dwTlsIndex];
}

static BOOL shim_TlsSetValue(DWORD dwTlsIndex, LPVOID lpTlsValue) {
    if (dwTlsIndex >= MAX_TLS_SLOTS || !s_tlsUsed[dwTlsIndex]) return 0;
    s_tlsValues[dwTlsIndex] = lpTlsValue;
    return 1;
}

// =============================================================================
// Error Handling Shims
// =============================================================================

static DWORD shim_GetLastError(void) {
    return s_lastError;
}

static void shim_SetLastError(DWORD dwErrCode) {
    s_lastError = dwErrCode;
}

static LPTOP_LEVEL_EXCEPTION_FILTER s_unhandledFilter = NULL;

static LPTOP_LEVEL_EXCEPTION_FILTER shim_SetUnhandledExceptionFilter(
    LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)
{
    LPTOP_LEVEL_EXCEPTION_FILTER prev = s_unhandledFilter;
    s_unhandledFilter = lpTopLevelExceptionFilter;
    return prev;
}

static LONGVAL shim_UnhandledExceptionFilter(struct _EXCEPTION_POINTERS* ExceptionInfo) {
    (void)ExceptionInfo;
    return 0; // EXCEPTION_CONTINUE_SEARCH
}

// =============================================================================
// Environment / System Info Shims
// =============================================================================

static LPSTR shim_GetCommandLineA(void) {
    static char cmdline[4096] = "";
    if (cmdline[0] == '\0') {
        // Read from /proc/self/cmdline
        int fd = open("/proc/self/cmdline", O_RDONLY);
        if (fd >= 0) {
            ssize_t n = read(fd, cmdline, sizeof(cmdline) - 1);
            close(fd);
            if (n > 0) {
                // Replace NUL separators with spaces
                for (ssize_t i = 0; i < n - 1; i++) {
                    if (cmdline[i] == '\0') cmdline[i] = ' ';
                }
                cmdline[n] = '\0';
            }
        }
    }
    return cmdline;
}

static LPWSTR shim_GetCommandLineW(void) {
    static wchar_t wcmdline[4096] = {0};
    if (wcmdline[0] == L'\0') {
        LPSTR narrow = shim_GetCommandLineA();
        for (int i = 0; narrow[i] && i < 4095; i++) {
            wcmdline[i] = (wchar_t)narrow[i];
        }
    }
    return wcmdline;
}

static LPSTR shim_GetEnvironmentStrings(void) {
    // Return a double-null-terminated block of "KEY=VALUE\0" pairs
    extern char** environ;
    size_t total = 0;
    for (int i = 0; environ[i]; i++) {
        total += strlen(environ[i]) + 1;
    }
    total++; // double null terminator

    char* block = (char*)malloc(total);
    if (!block) return NULL;

    char* p = block;
    for (int i = 0; environ[i]; i++) {
        size_t len = strlen(environ[i]);
        memcpy(p, environ[i], len + 1);
        p += len + 1;
    }
    *p = '\0';
    return block;
}

static BOOL shim_FreeEnvironmentStringsA(LPSTR penv) {
    free(penv);
    return 1;
}

static BOOL shim_SetEnvironmentVariableA(LPCSTR lpName, LPCSTR lpValue) {
    if (!lpValue) {
        unsetenv(lpName);
    } else {
        setenv(lpName, lpValue, 1);
    }
    return 1;
}

static BOOL shim_SetEnvironmentVariableW(LPCWSTR lpName, LPCWSTR lpValue) {
    // Basic wchar->char conversion
    char name[256], value[1024];
    int i;
    for (i = 0; lpName[i] && i < 255; i++) name[i] = (char)lpName[i];
    name[i] = '\0';

    if (!lpValue) {
        unsetenv(name);
    } else {
        for (i = 0; lpValue[i] && i < 1023; i++) value[i] = (char)lpValue[i];
        value[i] = '\0';
        setenv(name, value, 1);
    }
    return 1;
}

static BOOL shim_GetComputerNameA(LPSTR lpBuffer, LPDWORD nSize) {
    // Explicit cast picks the POSIX unistd.h overload (size_t) over the
    // winsock.h extern (int) — both are in scope because nocturne.h pulls
    // in winsock.h and this shim also needs unistd.h directly.
    if (gethostname(lpBuffer, (size_t)*nSize) == 0) {
        *nSize = (DWORD)strlen(lpBuffer);
        return 1;
    }
    return 0;
}

static UINT shim_GetACP(void) {
    return 1252; // Windows-1252 (Western European)
}

static UINT shim_GetOEMCP(void) {
    return 437; // OEM US
}

static BOOL shim_GetCPInfo(UINT CodePage, LPCPINFO lpCPInfo) {
    (void)CodePage;
    if (!lpCPInfo) return 0;
    _cpinfo* info = lpCPInfo;
    info->MaxCharSize = 1;
    info->DefaultChar[0] = '?';
    info->DefaultChar[1] = 0;
    memset(info->LeadByte, 0, sizeof(info->LeadByte));
    return 1;
}

// =============================================================================
// String Conversion Shims
// =============================================================================

static int shim_MultiByteToWideChar(UINT CodePage, DWORD dwFlags,
    LPCSTR lpMultiByteStr, int cbMultiByte,
    LPWSTR lpWideCharStr, int cchWideChar)
{
    (void)CodePage;
    (void)dwFlags;

    int len;
    if (cbMultiByte == -1)
        len = (int)strlen(lpMultiByteStr) + 1;
    else
        len = cbMultiByte;

    if (cchWideChar == 0) return len; // Query size

    int count = (len < cchWideChar) ? len : cchWideChar;
    for (int i = 0; i < count; i++) {
        lpWideCharStr[i] = (wchar_t)(unsigned char)lpMultiByteStr[i];
    }
    return count;
}

static int shim_WideCharToMultiByte(UINT CodePage, DWORD dwFlags,
    LPCWSTR lpWideCharStr, int cchWideChar,
    LPSTR lpMultiByteStr, int cbMultiByte,
    LPCSTR lpDefaultChar, LPBOOL lpUsedDefaultChar)
{
    (void)CodePage;
    (void)dwFlags;
    (void)lpDefaultChar;

    if (lpUsedDefaultChar) *lpUsedDefaultChar = 0;

    int len;
    if (cchWideChar == -1) {
        len = 0;
        while (lpWideCharStr[len]) len++;
        len++; // include null
    } else {
        len = cchWideChar;
    }

    if (cbMultiByte == 0) return len; // Query size

    int count = (len < cbMultiByte) ? len : cbMultiByte;
    for (int i = 0; i < count; i++) {
        wchar_t wc = lpWideCharStr[i];
        lpMultiByteStr[i] = (wc < 256) ? (char)wc : '?';
    }
    return count;
}

// =============================================================================
// Init Function
// =============================================================================

void shims_init_kernel32(void) {
    // File I/O
    g_CloseHandleFunc = shim_CloseHandle;
    g_CreateDirectoryAFunc = shim_CreateDirectoryA;
    g_CreateFileAFunc = shim_CreateFileA;
    g_DeleteFileAFunc = shim_DeleteFileA;
    g_FlushFileBuffersFunc = shim_FlushFileBuffers;
    g_GetFileAttributesAFunc = shim_GetFileAttributesA;
    g_GetFileTimeFunc = shim_GetFileTime;
    g_GetFileTypeFunc = shim_GetFileType;
    g_GetFullPathNameAFunc = shim_GetFullPathNameA;
    g_MoveFileAFunc = shim_MoveFileA;
    g_ReadFileFunc = shim_ReadFile;
    g_SetEndOfFileFunc = shim_SetEndOfFile;
    g_SetFileAttributesAFunc = shim_SetFileAttributesA;
    g_SetFilePointerFunc = shim_SetFilePointer;
    g_SetFileTimeFunc = shim_SetFileTime;
    g_WriteFileFunc = shim_WriteFile;

    // File search
    g_FindCloseFunc = shim_FindClose;
    g_FindFirstFileAFunc = shim_FindFirstFileA;
    g_FindNextFileAFunc = shim_FindNextFileA;

    // Console / Std handles
    g_GetStdHandleFunc = shim_GetStdHandle;
    g_SetStdHandleFunc = shim_SetStdHandle;
    g_WriteConsoleAFunc = shim_WriteConsoleA;
    g_GetConsoleModeFunc = shim_GetConsoleMode;
    g_SetConsoleModeFunc = shim_SetConsoleMode;
    g_SetConsoleCtrlHandlerFunc = shim_SetConsoleCtrlHandler;
    g_ReadConsoleInputAFunc = shim_ReadConsoleInputA;

    // Threads
    g_CreateThreadFunc = shim_CreateThread;
    g_ExitThreadFunc = shim_ExitThread;
    g_SetThreadPriorityFunc = shim_SetThreadPriority;
    g_GetCurrentThreadFunc = shim_GetCurrentThread;
    g_GetCurrentThreadIdFunc = shim_GetCurrentThreadId;

    // Mutex / Event / Sync
    g_CreateMutexAFunc = shim_CreateMutexA;
    g_ReleaseMutexFunc = shim_ReleaseMutex;
    g_CreateEventAFunc = shim_CreateEventA;
    g_SetEventFunc = shim_SetEvent;
    g_WaitForSingleObjectFunc = shim_WaitForSingleObject;

    // Critical sections
    g_InitializeCriticalSectionFunc = shim_InitializeCriticalSection;
    g_DeleteCriticalSectionFunc = shim_DeleteCriticalSection;
    g_EnterCriticalSectionFunc = shim_EnterCriticalSection;
    g_LeaveCriticalSectionFunc = shim_LeaveCriticalSection;

    // Process
    g_CreateProcessAFunc = shim_CreateProcessA;
    g_ExitProcessFunc = shim_ExitProcess;
    g_GetCurrentProcessFunc = shim_GetCurrentProcess;
    g_GetCurrentProcessIdFunc = shim_GetCurrentProcessId;
    g_GetExitCodeProcessFunc = shim_GetExitCodeProcess;
    g_DuplicateHandleFunc = shim_DuplicateHandle;

    // Memory
    g_VirtualAllocFunc = shim_VirtualAlloc;
    g_VirtualFreeFunc = shim_VirtualFree;
    g_VirtualQueryFunc = shim_VirtualQuery;
    g_GlobalAllocFunc = shim_GlobalAlloc;
    g_GlobalFreeFunc = shim_GlobalFree;
    g_GlobalLockFunc = shim_GlobalLock;
    g_GlobalUnlockFunc = shim_GlobalUnlock;
    g_GlobalMemoryStatusFunc = shim_GlobalMemoryStatus;

    // Libraries
    g_LoadLibraryAFunc = shim_LoadLibraryA;
    g_FreeLibraryFunc = shim_FreeLibrary;
    g_GetProcAddressFunc = shim_GetProcAddress;
    g_GetModuleHandleAFunc = shim_GetModuleHandleA;
    g_GetModuleFileNameAFunc = shim_GetModuleFileNameA;
    g_GetModuleFileNameWFunc = shim_GetModuleFileNameW;

    // Time / Performance
    g_QueryPerformanceCounterFunc = shim_QueryPerformanceCounter;
    g_QueryPerformanceFrequencyFunc = shim_QueryPerformanceFrequency;
    g_SleepFunc = shim_Sleep;
    g_GetLocalTimeFunc = shim_GetLocalTime;
    g_GetTimeZoneInformationFunc = shim_GetTimeZoneInformation;
    g_GetVersionFunc = shim_GetVersion;

    // FILETIME conversions
    g_FileTimeToLocalFileTimeFunc = shim_FileTimeToLocalFileTime;
    g_LocalFileTimeToFileTimeFunc = shim_LocalFileTimeToFileTime;
    g_FileTimeToSystemTimeFunc = shim_FileTimeToSystemTime;
    g_SystemTimeToFileTimeFunc = shim_SystemTimeToFileTime;
    g_DosDateTimeToFileTimeFunc = shim_DosDateTimeToFileTime;
    g_FileTimeToDosDateTimeFunc = shim_FileTimeToDosDateTime;

    // TLS
    g_TlsAllocFunc = shim_TlsAlloc;
    g_TlsFreeFunc = shim_TlsFree;
    g_TlsGetValueFunc = shim_TlsGetValue;
    g_TlsSetValueFunc = shim_TlsSetValue;

    // Error handling
    g_GetLastErrorFunc = shim_GetLastError;
    g_SetLastErrorFunc = shim_SetLastError;
    g_SetUnhandledExceptionFilterFunc = shim_SetUnhandledExceptionFilter;
    g_UnhandledExceptionFilterFunc = shim_UnhandledExceptionFilter;

    // Environment / System info
    g_GetCommandLineAFunc = shim_GetCommandLineA;
    g_GetCommandLineWFunc = shim_GetCommandLineW;
    g_GetEnvironmentStringsFunc = shim_GetEnvironmentStrings;
    g_FreeEnvironmentStringsAFunc = shim_FreeEnvironmentStringsA;
    g_SetEnvironmentVariableAFunc = shim_SetEnvironmentVariableA;
    g_SetEnvironmentVariableWFunc = shim_SetEnvironmentVariableW;
    g_GetComputerNameAFunc = shim_GetComputerNameA;
    g_GetACPFunc = shim_GetACP;
    g_GetOEMCPFunc = shim_GetOEMCP;
    g_GetCPInfoFunc = shim_GetCPInfo;
    g_GetCurrentDirectoryAFunc = shim_GetCurrentDirectoryA;
    g_SetCurrentDirectoryAFunc = shim_SetCurrentDirectoryA;

    // String conversion
    g_MultiByteToWideCharFunc = shim_MultiByteToWideChar;
    g_WideCharToMultiByteFunc = shim_WideCharToMultiByte;
}
