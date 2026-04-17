// For case-insensitive _findfirst/_findnext (portable, no glibc extensions).
#include <fnmatch.h>
#include <strings.h>
#include <vector>
#include <string>

// =============================================================================
// WATCOM SHIM - Watcom C++ runtime and CRT bridge implementations
// =============================================================================
//
// Provides implementations for the Watcom 11 C++ runtime helper functions
// (array new/delete, copy construction, destruction) and Watcom-specific
// CRT wrappers that bridge to POSIX equivalents.
//
// These were previously inline functions in system/watcom.h.
//

#include "system/watcom.h"

#include <cerrno>
#include <cstdlib>
#include <cstring>
#include <unistd.h>
#include <sys/stat.h>
#include <dirent.h>
#include <glob.h>

// =============================================================================
// Array Construction Functions
// =============================================================================

// WATCOM_TRAMPOLINE is defined in system/watcom.h — see the comment there.

WATCOM_TRAMPOLINE
void* __arrinit(void* array_start, int count, WatcomTypeInfo* ti) {
    char* p = (char*)array_start;
    for (int i = 0; i < count; i++, p += ti->instance_size)
        if (ti->ctor) (*ti->ctor)(p);
    return array_start;
}

void* __arrinit_(void* array_start, int count, WatcomTypeInfo* ti) {
    return __arrinit(array_start, count, ti);
}

void* __arrinit_dispatch(void* array_ptr, int count, WatcomTypeInfo* ti) {
    if (!array_ptr) return 0;
    return __arrinit(array_ptr, count, ti);
}

void* __vec_new_(void* dest, int count, WatcomTypeInfo* ti) {
    if (!dest) return 0;
    *(int*)dest = count;
    return __arrinit_dispatch((char*)dest + 4, count, ti);
}

void* __vec_new(void* dest, int count, WatcomTypeInfo* ti) {
    return __vec_new_(dest, count, ti);
}

WATCOM_TRAMPOLINE
void* __arrcopy(void* dest, void* src, int count, WatcomTypeInfo* ti) {
    char* d = (char*)dest;
    char* s = (char*)src;
    for (int i = 0; i < count; i++, d += ti->instance_size, s += ti->instance_size)
        if (ti->copy) (*ti->copy)(d, s);
    return dest;
}

// Note: __arr_op is a template and remains in the header.

// =============================================================================
// Array Destruction Functions
// =============================================================================

WATCOM_TRAMPOLINE
void* __arrdtor(WatcomTypeArrayInfo* info) {
    char* p = (char*)info->obj_array + (info->obj_count - 1) * info->type_info->instance_size;
    for (int i = info->obj_count - 1; i >= 0; i--, p -= info->type_info->instance_size)
        if (info->type_info->dtor) (*info->type_info->dtor)(p, 0);
    return info->obj_array;
}

void* __arrfini(void* obj_array, int count, WatcomTypeInfo* ti) {
    WatcomTypeArrayInfo info;
    info.obj_count = count;
    info.type_info = ti;
    info.obj_array = (void**)obj_array;
    __arrdtor(&info);
    return obj_array;
}

void* __vec_delete(void* ptr, WatcomTypeInfo* ti) {
    if (!ptr) return 0;
    int* base = ((int*)ptr) - 1;
    __arrfini(ptr, *base, ti);
    return base;
}

// =============================================================================
// Memory Helper Functions
// =============================================================================

void __memfill(void* dest, unsigned int value, unsigned int count) {
    unsigned char* p = (unsigned char*)dest;
    for (unsigned int i = 0; i < count; i++) *p++ = (unsigned char)value;
}

void __stosd(void* dest, unsigned int value, unsigned int dword_count) {
    unsigned int* p = (unsigned int*)dest;
    for (unsigned int i = 0; i < dword_count; i++) *p++ = value;
}

// =============================================================================
// Watcom CRT Internal Functions
// =============================================================================

void notifyAbnormalTermination() {
    // Called by error handlers before abort
}

void __STK() {}

void __STK(size_t size) {
    volatile char* p = (volatile char*)&size;
    while (size > 4096) { p -= 4096; (void)*p; size -= 4096; }
}

// =============================================================================
// Watcom CRT Wrappers (io.h)
// =============================================================================

void* _memcpy(void* dest, const void* src, size_t count) {
    return memcpy(dest, src, count);
}

void* _memset(void* dest, int value, size_t count) {
    return memset(dest, value, count);
}

long tell(int fd) {
    return lseek(fd, 0, SEEK_CUR);
}

int chsize(int fd, long size) {
    return ftruncate(fd, size);
}

char* _fullpath(char* buffer, const char* path, size_t maxlen) {
    if (buffer == 0) buffer = (char*)malloc(maxlen ? maxlen : 4096);
    if (buffer == 0) return 0;
    if (realpath(path, buffer) == 0) { strcpy(buffer, path); }
    return buffer;
}

char* _getcwd(char* buffer, int size) {
    return getcwd(buffer, size);
}

// =============================================================================
// File Find Functions (Watcom io.h)
// =============================================================================
// Windows FindFirstFile/FindNextFile is case-insensitive. Linux glob() is not,
// and GLOB_NOCASE is unreliable across glibc versions. This implementation
// uses opendir/readdir + fnmatch(FNM_CASEFOLD) for portable case-insensitive
// file matching. Results are collected up front so _findnext is a simple
// index bump (matches Watcom's iterator-style API).

struct FindHandle {
    std::vector<std::string> matches;
    size_t current_index;
};

static void split_filespec(const char* filespec, std::string& dir, std::string& pattern) {
    std::string spec(filespec);
    // Normalize backslashes
    for (char& c : spec) {
        if (c == '\\') c = '/';
    }
    size_t sep = spec.rfind('/');
    if (sep == std::string::npos) {
        dir = ".";
        pattern = spec;
    } else {
        dir = spec.substr(0, sep);
        pattern = spec.substr(sep + 1);
    }
}

long _findfirst(const char* filespec, void* fileinfo) {
    (void)fileinfo;

    std::string dir, pattern;
    split_filespec(filespec, dir, pattern);

    DIR* d = opendir(dir.c_str());
    if (!d) return -1;

    FindHandle* handle = new FindHandle();
    while (struct dirent* entry = readdir(d)) {
        if (fnmatch(pattern.c_str(), entry->d_name, FNM_CASEFOLD) == 0) {
            if (dir == ".") {
                handle->matches.push_back(entry->d_name);
            } else {
                handle->matches.push_back(dir + "/" + entry->d_name);
            }
        }
    }
    closedir(d);

    if (handle->matches.empty()) {
        delete handle;
        return -1;
    }
    handle->current_index = 0;
    return (long)(intptr_t)handle;
}

int _findnext(long handle_val, void* fileinfo) {
    (void)fileinfo;
    FindHandle* handle = (FindHandle*)(intptr_t)handle_val;
    if (!handle) return -1;

    handle->current_index++;
    if (handle->current_index >= handle->matches.size()) return -1;
    return 0;
}

int _findclose(long handle_val) {
    FindHandle* handle = (FindHandle*)(intptr_t)handle_val;
    delete handle;
    return 0;
}

// =============================================================================
// Directory Functions (direct.h)
// =============================================================================

int _mkdir(const char* path) {
    return mkdir(path, 0755);
}

// =============================================================================
// Heap Functions (malloc.h)
// =============================================================================

int _heapchk(void) {
    return 0;  // _HEAPOK
}

int _heapwalk(struct _heapinfo* entry) {
    (void)entry;
    return 4;  // _HEAPEND
}

size_t _memmax(void) {
    return 0x7FFFFFFF;
}

size_t memavl(void) {
    return 0x7FFFFFFF;
}

// =============================================================================
// Watcom Internal CRT Functions
// =============================================================================

unsigned long __getfileattr(const char* filename) {
    struct stat st;
    if (stat(filename, &st) != 0) return 0xFFFFFFFF;  // INVALID_FILE_ATTRIBUTES
    unsigned long attrs = 0;
    if (S_ISDIR(st.st_mode)) attrs |= 0x10;  // FILE_ATTRIBUTE_DIRECTORY
    if (!(st.st_mode & S_IWUSR)) attrs |= 0x01;  // FILE_ATTRIBUTE_READONLY
    return attrs;
}

unsigned long __set_errno(void) {
    return 0;
}

int* _errno(void) {
    return &errno;
}

// =============================================================================
// Static Destructor Registration
// =============================================================================

void _atexit(WatcomStaticDestructorNode* node) {
    (void)node;
    // In a full runtime, this would register the destructor for atexit() cleanup.
    // For now, static destructors are not critical for execution.
}
