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
// Cross-platform implementation using glob()

struct FindHandle {
    glob_t glob_result;
    size_t current_index;
    int valid;
};

long _findfirst(const char* filespec, void* fileinfo) {
    (void)fileinfo;
    FindHandle* handle = (FindHandle*)malloc(sizeof(FindHandle));
    if (!handle) return -1;

    int result = glob(filespec, GLOB_NOSORT, nullptr, &handle->glob_result);
    if (result != 0 || handle->glob_result.gl_pathc == 0) {
        if (result == 0) globfree(&handle->glob_result);
        free(handle);
        return -1;
    }

    handle->current_index = 0;
    handle->valid = 1;
    return (long)(intptr_t)handle;
}

int _findnext(long handle_val, void* fileinfo) {
    (void)fileinfo;
    FindHandle* handle = (FindHandle*)(intptr_t)handle_val;
    if (!handle || !handle->valid) return -1;

    handle->current_index++;
    if (handle->current_index >= handle->glob_result.gl_pathc) return -1;
    return 0;
}

int _findclose(long handle_val) {
    FindHandle* handle = (FindHandle*)(intptr_t)handle_val;
    if (handle) {
        if (handle->valid) globfree(&handle->glob_result);
        free(handle);
    }
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
