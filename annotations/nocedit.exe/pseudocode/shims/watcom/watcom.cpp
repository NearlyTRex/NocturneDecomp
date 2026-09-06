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
#include "core/file_search.h"   // nocturne_find_files() — shared with kernel32

#include <cerrno>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <system_error>
// The descriptor-based half of Watcom's io.h — read, write, lseek, ftruncate.
// A file descriptor is not POSIX-only: Windows' own CRT has the same calls under
// underscored names, so this is a spelling difference rather than a port.
#include <unistd.h>

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
    // Watcom's _fullpath answers even for a path that does not exist yet, which
    // is what the game asks it for — a place to write. weakly_canonical does
    // the same, resolving as far as the filesystem goes and taking the rest
    // lexically. The path is handed back unchanged if even that fails, which is
    // what the caller was going to use anyway.
    std::error_code ec;
    const std::filesystem::path full =
        std::filesystem::weakly_canonical(std::filesystem::path(path), ec);
    const std::string text = ec ? std::string(path) : full.string();
    const size_t room = maxlen ? maxlen : 4096;
    if (text.size() + 1 > room) {
        strcpy(buffer, path);
        return buffer;
    }
    memcpy(buffer, text.c_str(), text.size() + 1);
    return buffer;
}

char* _getcwd(char* buffer, int size) {
    std::error_code ec;
    const std::string here = std::filesystem::current_path(ec).string();
    if (ec || size <= 0 || here.size() + 1 > (size_t)size) return 0;
    memcpy(buffer, here.c_str(), here.size() + 1);
    return buffer;
}

// =============================================================================
// File Find Functions (Watcom io.h)
// =============================================================================
// The search itself is in core/file_search.cpp, shared with the Win32 flavour
// of the same question in kernel32.cpp. What is left here is Watcom's shape for
// it: a long handle, and an iterator that reports the end by returning -1.
//
// Results are collected up front, so _findnext is an index bump. That matches
// the API — the caller is not told how many there are and cannot go back — and
// it means the directory is read once rather than being held open across calls
// the game makes no promise about the timing of.

// Internal linkage, deliberately. kernel32.cpp has a handle of its own with a
// different layout, and two definitions of one class name in a program is an ODR
// violation the linker resolves by keeping whichever destructor it saw first —
// silently giving one of them the other's field offsets. Anonymous namespaces
// here and there make the two unrelated types they always were. Sharing the
// search below removes the reason they ever looked alike.
namespace {

struct FindHandle {
    std::vector<std::string> matches;
    size_t current_index;
};

}  // namespace

long _findfirst(const char* filespec, void* fileinfo) {
    (void)fileinfo;

    std::vector<std::string> matches = nocturne_find_files(filespec);
    if (matches.empty()) return -1;

    FindHandle* handle = new FindHandle();
    handle->matches = matches;
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
    std::error_code ec;
    // Watcom answers 0 for success and -1 otherwise, including when the
    // directory is already there.
    return std::filesystem::create_directory(std::filesystem::path(path), ec) ? 0 : -1;
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
    std::error_code ec;
    const std::filesystem::path path(filename);
    const std::filesystem::file_status status = std::filesystem::status(path, ec);
    if (ec || !std::filesystem::exists(status)) return 0xFFFFFFFF;  // INVALID_FILE_ATTRIBUTES

    unsigned long attrs = 0;
    if (std::filesystem::is_directory(status)) attrs |= 0x10;  // DIRECTORY
    // Windows has one read-only bit for the file; POSIX has three write bits for
    // three audiences. The owner's is the one that decides whether this process
    // can write, which is the question the attribute is asked to answer.
    if ((status.permissions() & std::filesystem::perms::owner_write) ==
        std::filesystem::perms::none) {
        attrs |= 0x01;  // FILE_ATTRIBUTE_READONLY
    }
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
