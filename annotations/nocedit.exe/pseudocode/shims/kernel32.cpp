#define _GNU_SOURCE

// =============================================================================
// KERNEL32 SHIM - POSIX/SDL implementations for Win32 kernel32 API
// =============================================================================
//
// Maps kernel32 functions to POSIX equivalents:
//   File I/O:    open/read/write/close/lseek
//   Threading:   pthread_create/pthread_mutex
//   Memory:      mmap/munmap for VirtualAlloc/Free, malloc for GlobalAlloc
//   Libraries:   dlopen/dlsym/dlclose
//   Timing:      clock_gettime(CLOCK_MONOTONIC), SDL_Delay for Sleep
//   TLS:         pthread_key_t
//   Sync:        pthread_mutex for critical sections, pthread_cond for events
//

#include "system/kernel32.h"
#include "globals/globals_610000.h"

#include <SDL.h>
#include <dlfcn.h>
#include <pthread.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include <fcntl.h>
#include <fnmatch.h>
#include <glob.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
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

struct ThreadHandle {
    int tag;
    pthread_t thread;
    DWORD exitCode;
    int finished;
};

struct MutexHandle {
    int tag;
    pthread_mutex_t mutex;
};

struct EventHandle {
    int tag;
    pthread_mutex_t mutex;
    pthread_cond_t cond;
    int signaled;
    int manualReset;
};

struct FindHandle {
    int tag;
    glob_t globResult;
    size_t currentIndex;
    char pattern[260];
};

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
        pthread_detach(th->thread);
        free(th);
        return 1;
    }
    case HANDLE_TAG_MUTEX: {
        MutexHandle* mh = (MutexHandle*)hObject;
        pthread_mutex_destroy(&mh->mutex);
        free(mh);
        return 1;
    }
    case HANDLE_TAG_EVENT: {
        EventHandle* eh = (EventHandle*)hObject;
        pthread_cond_destroy(&eh->cond);
        pthread_mutex_destroy(&eh->mutex);
        free(eh);
        return 1;
    }
    case HANDLE_TAG_FIND: {
        FindHandle* fh = (FindHandle*)hObject;
        globfree(&fh->globResult);
        free(fh);
        return 1;
    }
    default:
        // Assume file descriptor
        return close(HANDLE_TO_FD(hObject)) == 0 ? 1 : 0;
    }
}

static DWORD shim_SetFilePointer(HANDLE hFile, long lDistanceToMove,
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
    if (unlink(lpFileName) == 0) return 1;
    s_lastError = (DWORD)errno;
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
    if (mkdir(lpPathName, 0755) == 0) return 1;
    s_lastError = (DWORD)errno;
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
    if (!getcwd(lpBuffer, nBufferLength)) {
        s_lastError = (DWORD)errno;
        return 0;
    }
    return (DWORD)strlen(lpBuffer);
}

static BOOL shim_SetCurrentDirectoryA(LPCSTR lpPathName) {
    if (chdir(lpPathName) == 0) return 1;
    s_lastError = (DWORD)errno;
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

static HANDLE shim_FindFirstFileA(LPCSTR lpFileName, LPWIN32_FIND_DATAA lpFindFileData) {
    FindHandle* fh = (FindHandle*)malloc(sizeof(FindHandle));
    if (!fh) { s_lastError = 8; return INVALID_HANDLE; } // ERROR_NOT_ENOUGH_MEMORY

    memset(fh, 0, sizeof(FindHandle));
    fh->tag = HANDLE_TAG_FIND;
    strncpy(fh->pattern, lpFileName, 259);
    fh->pattern[259] = '\0';

    // Convert backslashes to forward slashes
    for (char* p = fh->pattern; *p; p++) {
        if (*p == '\\') *p = '/';
    }

    int ret = glob(fh->pattern, GLOB_NOSORT, NULL, &fh->globResult);
    if (ret != 0 || fh->globResult.gl_pathc == 0) {
        if (ret == 0) globfree(&fh->globResult);
        free(fh);
        s_lastError = 2; // ERROR_FILE_NOT_FOUND
        return INVALID_HANDLE;
    }

    fh->currentIndex = 0;
    populate_find_data(fh->globResult.gl_pathv[0], lpFindFileData);
    fh->currentIndex = 1;
    return (HANDLE)fh;
}

static BOOL shim_FindNextFileA(HANDLE hFindFile, LPWIN32_FIND_DATAA lpFindFileData) {
    FindHandle* fh = (FindHandle*)hFindFile;
    if (!fh || fh->tag != HANDLE_TAG_FIND) return 0;
    if (fh->currentIndex >= fh->globResult.gl_pathc) {
        s_lastError = 18; // ERROR_NO_MORE_FILES
        return 0;
    }
    populate_find_data(fh->globResult.gl_pathv[fh->currentIndex], lpFindFileData);
    fh->currentIndex++;
    return 1;
}

static BOOL shim_FindClose(HANDLE hFindFile) {
    FindHandle* fh = (FindHandle*)hFindFile;
    if (!fh || fh->tag != HANDLE_TAG_FIND) return 0;
    globfree(&fh->globResult);
    free(fh);
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

struct ThreadStartInfo {
    LPTHREAD_START_ROUTINE startAddress;
    LPVOID parameter;
    ThreadHandle* handle;
};

static void* thread_entry(void* arg) {
    ThreadStartInfo* info = (ThreadStartInfo*)arg;
    LPTHREAD_START_ROUTINE func = info->startAddress;
    LPVOID param = info->parameter;
    ThreadHandle* th = info->handle;
    free(info);

    DWORD exitCode = func(param);
    th->exitCode = exitCode;
    th->finished = 1;
    return NULL;
}

static HANDLE shim_CreateThread(LPSECURITY_ATTRIBUTES lpThreadAttributes,
    SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress,
    LPVOID lpParameter, DWORD dwCreationFlags, LPDWORD lpThreadId)
{
    (void)lpThreadAttributes;
    (void)dwCreationFlags; // CREATE_SUSPENDED not supported

    ThreadHandle* th = (ThreadHandle*)malloc(sizeof(ThreadHandle));
    if (!th) { s_lastError = 8; return NULL; }
    memset(th, 0, sizeof(ThreadHandle));
    th->tag = HANDLE_TAG_THREAD;

    ThreadStartInfo* info = (ThreadStartInfo*)malloc(sizeof(ThreadStartInfo));
    if (!info) { free(th); s_lastError = 8; return NULL; }
    info->startAddress = lpStartAddress;
    info->parameter = lpParameter;
    info->handle = th;

    pthread_attr_t attr;
    pthread_attr_init(&attr);
    if (dwStackSize > 0) {
        pthread_attr_setstacksize(&attr, dwStackSize);
    }

    int ret = pthread_create(&th->thread, &attr, thread_entry, info);
    pthread_attr_destroy(&attr);

    if (ret != 0) {
        free(info);
        free(th);
        s_lastError = (DWORD)ret;
        return NULL;
    }

    if (lpThreadId) *lpThreadId = (DWORD)(uintptr_t)th->thread;
    return (HANDLE)th;
}

static void shim_ExitThread(DWORD dwExitCode) {
    (void)dwExitCode;
    pthread_exit(NULL);
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
    return (DWORD)(uintptr_t)pthread_self();
}

// =============================================================================
// Mutex / Event Shims
// =============================================================================

static HANDLE shim_CreateMutexA(LPSECURITY_ATTRIBUTES lpMutexAttributes,
    BOOL bInitialOwner, LPCSTR lpName)
{
    (void)lpMutexAttributes;
    (void)lpName;

    MutexHandle* mh = (MutexHandle*)malloc(sizeof(MutexHandle));
    if (!mh) { s_lastError = 8; return NULL; }
    mh->tag = HANDLE_TAG_MUTEX;

    pthread_mutexattr_t attr;
    pthread_mutexattr_init(&attr);
    pthread_mutexattr_settype(&attr, PTHREAD_MUTEX_RECURSIVE);
    pthread_mutex_init(&mh->mutex, &attr);
    pthread_mutexattr_destroy(&attr);

    if (bInitialOwner) {
        pthread_mutex_lock(&mh->mutex);
    }
    return (HANDLE)mh;
}

static BOOL shim_ReleaseMutex(HANDLE hMutex) {
    MutexHandle* mh = (MutexHandle*)hMutex;
    if (!mh || mh->tag != HANDLE_TAG_MUTEX) return 0;
    pthread_mutex_unlock(&mh->mutex);
    return 1;
}

static HANDLE shim_CreateEventA(LPSECURITY_ATTRIBUTES lpEventAttributes,
    BOOL bManualReset, BOOL bInitialState, LPCSTR lpName)
{
    (void)lpEventAttributes;
    (void)lpName;

    EventHandle* eh = (EventHandle*)malloc(sizeof(EventHandle));
    if (!eh) { s_lastError = 8; return NULL; }
    eh->tag = HANDLE_TAG_EVENT;
    eh->manualReset = bManualReset;
    eh->signaled = bInitialState ? 1 : 0;
    pthread_mutex_init(&eh->mutex, NULL);
    pthread_cond_init(&eh->cond, NULL);
    return (HANDLE)eh;
}

static BOOL shim_SetEvent(HANDLE hEvent) {
    EventHandle* eh = (EventHandle*)hEvent;
    if (!eh || eh->tag != HANDLE_TAG_EVENT) return 0;
    pthread_mutex_lock(&eh->mutex);
    eh->signaled = 1;
    if (eh->manualReset)
        pthread_cond_broadcast(&eh->cond);
    else
        pthread_cond_signal(&eh->cond);
    pthread_mutex_unlock(&eh->mutex);
    return 1;
}

static DWORD shim_WaitForSingleObject(HANDLE hHandle, DWORD dwMilliseconds) {
    if (!hHandle) return WIN32_WAIT_FAILED;

    int* tagPtr = (int*)hHandle;
    if (*tagPtr == HANDLE_TAG_MUTEX) {
        MutexHandle* mh = (MutexHandle*)hHandle;
        if (dwMilliseconds == WIN32_INFINITE) {
            pthread_mutex_lock(&mh->mutex);
            return WIN32_WAIT_OBJECT_0;
        } else {
            struct timespec ts;
            clock_gettime(CLOCK_REALTIME, &ts);
            ts.tv_sec += dwMilliseconds / 1000;
            ts.tv_nsec += (dwMilliseconds % 1000) * 1000000L;
            if (ts.tv_nsec >= 1000000000L) {
                ts.tv_sec++;
                ts.tv_nsec -= 1000000000L;
            }
            int ret = pthread_mutex_timedlock(&mh->mutex, &ts);
            return (ret == 0) ? WIN32_WAIT_OBJECT_0 : WIN32_WAIT_TIMEOUT;
        }
    } else if (*tagPtr == HANDLE_TAG_EVENT) {
        EventHandle* eh = (EventHandle*)hHandle;
        pthread_mutex_lock(&eh->mutex);
        if (dwMilliseconds == WIN32_INFINITE) {
            while (!eh->signaled)
                pthread_cond_wait(&eh->cond, &eh->mutex);
        } else {
            struct timespec ts;
            clock_gettime(CLOCK_REALTIME, &ts);
            ts.tv_sec += dwMilliseconds / 1000;
            ts.tv_nsec += (dwMilliseconds % 1000) * 1000000L;
            if (ts.tv_nsec >= 1000000000L) {
                ts.tv_sec++;
                ts.tv_nsec -= 1000000000L;
            }
            while (!eh->signaled) {
                int ret = pthread_cond_timedwait(&eh->cond, &eh->mutex, &ts);
                if (ret != 0) {
                    pthread_mutex_unlock(&eh->mutex);
                    return WIN32_WAIT_TIMEOUT;
                }
            }
        }
        if (!eh->manualReset) eh->signaled = 0;
        pthread_mutex_unlock(&eh->mutex);
        return WIN32_WAIT_OBJECT_0;
    } else if (*tagPtr == HANDLE_TAG_THREAD) {
        ThreadHandle* th = (ThreadHandle*)hHandle;
        if (dwMilliseconds == WIN32_INFINITE) {
            pthread_join(th->thread, NULL);
            return WIN32_WAIT_OBJECT_0;
        }
        // Timed wait on thread not easily done; poll
        if (th->finished) return WIN32_WAIT_OBJECT_0;
        return WIN32_WAIT_TIMEOUT;
    }
    return WIN32_WAIT_FAILED;
}

// =============================================================================
// Critical Section Shims
// =============================================================================

static void shim_InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection) {
    // Store a pthread_mutex in the CRITICAL_SECTION's LockSemaphore field
    pthread_mutex_t* mtx = (pthread_mutex_t*)malloc(sizeof(pthread_mutex_t));
    if (mtx) {
        pthread_mutexattr_t attr;
        pthread_mutexattr_init(&attr);
        pthread_mutexattr_settype(&attr, PTHREAD_MUTEX_RECURSIVE);
        pthread_mutex_init(mtx, &attr);
        pthread_mutexattr_destroy(&attr);
    }
    lpCriticalSection->LockSemaphore = (HANDLE)mtx;
    lpCriticalSection->LockCount = -1;
    lpCriticalSection->RecursionCount = 0;
    lpCriticalSection->OwningThread = NULL;
}

static void shim_DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection) {
    pthread_mutex_t* mtx = (pthread_mutex_t*)lpCriticalSection->LockSemaphore;
    if (mtx) {
        pthread_mutex_destroy(mtx);
        free(mtx);
        lpCriticalSection->LockSemaphore = NULL;
    }
}

static void shim_EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection) {
    pthread_mutex_t* mtx = (pthread_mutex_t*)lpCriticalSection->LockSemaphore;
    if (mtx) pthread_mutex_lock(mtx);
}

static void shim_LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection) {
    pthread_mutex_t* mtx = (pthread_mutex_t*)lpCriticalSection->LockSemaphore;
    if (mtx) pthread_mutex_unlock(mtx);
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

static LPVOID shim_VirtualAlloc(LPVOID lpAddress, SIZE_T dwSize,
    DWORD flAllocationType, DWORD flProtect)
{
    (void)flAllocationType;
    int prot = PROT_READ | PROT_WRITE;
    if (flProtect & 0x10) prot |= PROT_EXEC; // PAGE_EXECUTE
    if (flProtect & 0x20) prot |= PROT_EXEC; // PAGE_EXECUTE_READ
    if (flProtect & 0x40) prot |= PROT_EXEC; // PAGE_EXECUTE_READWRITE

    int flags = MAP_PRIVATE | MAP_ANONYMOUS;
    if (lpAddress) flags |= MAP_FIXED;

    void* result = mmap(lpAddress, dwSize, prot, flags, -1, 0);
    if (result == MAP_FAILED) {
        s_lastError = (DWORD)errno;
        return NULL;
    }
    return result;
}

static BOOL shim_VirtualFree(LPVOID lpAddress, SIZE_T dwSize, DWORD dwFreeType) {
    (void)dwFreeType;
    if (dwSize == 0) dwSize = 4096; // Minimum page
    if (munmap(lpAddress, dwSize) == 0) return 1;
    s_lastError = (DWORD)errno;
    return 0;
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

static void shim_GlobalMemoryStatus(LPMEMORYSTATUS lpBuffer) {
    if (!lpBuffer) return;
    memset(lpBuffer, 0, sizeof(_MEMORYSTATUS));
    lpBuffer->dwLength = sizeof(_MEMORYSTATUS);
    lpBuffer->dwTotalPhys = 256 * 1024 * 1024;  // 256 MB
    lpBuffer->dwAvailPhys = 128 * 1024 * 1024;
    lpBuffer->dwTotalVirtual = 0x7FFFFFFF;
    lpBuffer->dwAvailVirtual = 0x7FFFFFFF;
}

// =============================================================================
// Library Shims
// =============================================================================

static HMODULE shim_LoadLibraryA(LPCSTR lpLibFileName) {
    void* handle = dlopen(lpLibFileName, RTLD_LAZY);
    if (!handle) {
        s_lastError = 126; // ERROR_MOD_NOT_FOUND
        return NULL;
    }
    return (HMODULE)handle;
}

static BOOL shim_FreeLibrary(HMODULE hLibModule) {
    if (dlclose((void*)hLibModule) == 0) return 1;
    return 0;
}

static FARPROC shim_GetProcAddress(HMODULE hModule, LPCSTR lpProcName) {
    void* sym = dlsym((void*)hModule, lpProcName);
    if (!sym) {
        s_lastError = 127; // ERROR_PROC_NOT_FOUND
    }
    return (FARPROC)sym;
}

static HMODULE shim_GetModuleHandleA(LPCSTR lpModuleName) {
    if (!lpModuleName) {
        // NULL = current exe
        return (HMODULE)dlopen(NULL, RTLD_LAZY);
    }
    return (HMODULE)dlopen(lpModuleName, RTLD_LAZY | RTLD_NOLOAD);
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
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    lpPerformanceCount->QuadPart = (LONGLONG)ts.tv_sec * 1000000000LL + ts.tv_nsec;
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

// Simple TLS slot table using pthread_key_t
#define MAX_TLS_SLOTS 64
static pthread_key_t s_tlsKeys[MAX_TLS_SLOTS];
static int s_tlsUsed[MAX_TLS_SLOTS];
static pthread_mutex_t s_tlsMutex = PTHREAD_MUTEX_INITIALIZER;

static DWORD shim_TlsAlloc(void) {
    pthread_mutex_lock(&s_tlsMutex);
    for (int i = 0; i < MAX_TLS_SLOTS; i++) {
        if (!s_tlsUsed[i]) {
            if (pthread_key_create(&s_tlsKeys[i], NULL) == 0) {
                s_tlsUsed[i] = 1;
                pthread_mutex_unlock(&s_tlsMutex);
                return (DWORD)i;
            }
        }
    }
    pthread_mutex_unlock(&s_tlsMutex);
    return WIN32_TLS_OUT_OF_INDEXES;
}

static BOOL shim_TlsFree(DWORD dwTlsIndex) {
    if (dwTlsIndex >= MAX_TLS_SLOTS) return 0;
    pthread_mutex_lock(&s_tlsMutex);
    if (s_tlsUsed[dwTlsIndex]) {
        pthread_key_delete(s_tlsKeys[dwTlsIndex]);
        s_tlsUsed[dwTlsIndex] = 0;
        pthread_mutex_unlock(&s_tlsMutex);
        return 1;
    }
    pthread_mutex_unlock(&s_tlsMutex);
    return 0;
}

static LPVOID shim_TlsGetValue(DWORD dwTlsIndex) {
    if (dwTlsIndex >= MAX_TLS_SLOTS || !s_tlsUsed[dwTlsIndex]) {
        s_lastError = 0;
        return NULL;
    }
    return pthread_getspecific(s_tlsKeys[dwTlsIndex]);
}

static BOOL shim_TlsSetValue(DWORD dwTlsIndex, LPVOID lpTlsValue) {
    if (dwTlsIndex >= MAX_TLS_SLOTS || !s_tlsUsed[dwTlsIndex]) return 0;
    return pthread_setspecific(s_tlsKeys[dwTlsIndex], lpTlsValue) == 0 ? 1 : 0;
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

static long shim_UnhandledExceptionFilter(struct _EXCEPTION_POINTERS* ExceptionInfo) {
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
    if (gethostname(lpBuffer, *nSize) == 0) {
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
