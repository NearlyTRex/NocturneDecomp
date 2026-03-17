#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/signal.h"
#include "system/time.h"
#include "system/winnt.h"

// =============================================================================
// WATCOM - System Header
// =============================================================================

// Structure: ExceptionFrame
typedef struct ExceptionFrame {
    struct ExceptionFrame* prev;
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
    _tm localtime_buffer;
    char asctime_buffer[26];
    char padding_0x52[2];
    struct EXCEPTION_REGISTRATION_RECORD* seh_frame;
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
    struct ThreadRegistryEntry* next;
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
    struct ThreadData** tls_ptr;
} ThreadStartupInfo;

// Function Definition: WATCOM_COPY_CONSTRUCTOR_FUNC
typedef void WATCOM_COPY_CONSTRUCTOR_FUNC(void* param0, void* param1);

// Function Definition: WATCOM_DEFAULT_CONSTRUCTOR_FUNC
typedef void WATCOM_DEFAULT_CONSTRUCTOR_FUNC(void* param0);

// Function Definition: WATCOM_VIRTUAL_DESTRUCTOR_FUNC
typedef void WATCOM_VIRTUAL_DESTRUCTOR_FUNC(void* object_ptr, int flags);

// Structure: WatcomDestructorCall
typedef struct WatcomDestructorCall {
    int delete_flags;
    void* destructor_func;
    void* object_instance;
} WatcomDestructorCall;

// Structure: WatcomDestructorFlags
typedef struct WatcomDestructorFlags {
    byte field0_0x0[38];
    undefined1 field1_0x26;
    undefined1 field2_0x27;
    undefined1 field3_0x28;
    undefined1 field4_0x29;
    undefined1 field5_0x2a;
    undefined1 field6_0x2b;
    undefined1 field7_0x2c;
    undefined1 field8_0x2d;
    undefined1 field9_0x2e;
    undefined1 field10_0x2f;
} WatcomDestructorFlags;

// Structure: WatcomInheritanceLayout
typedef struct WatcomInheritanceLayout {
    struct WatcomTypeInfo* base_type;
    int offset_to_base;
} WatcomInheritanceLayout;

// Structure: WatcomStaticDestructorNode
typedef struct WatcomStaticDestructorNode {
    struct WatcomStaticDestructorNode* next;
    struct WatcomDestructorCall* destructor_info;
    int registration_type;
    void* object_instance;
} WatcomStaticDestructorNode;

// Structure: WatcomThunkedDestructor
typedef struct WatcomThunkedDestructor {
    void* destructor_func;
    int* this_adjustment_ptr;
} WatcomThunkedDestructor;

// Structure: WatcomThunkedDestructorDirect
typedef struct WatcomThunkedDestructorDirect {
    void* destructor_func;
    int this_adjustment;
} WatcomThunkedDestructorDirect;

// Structure: WatcomTypeArrayInfo
typedef struct WatcomTypeArrayInfo {
    int obj_count;
    struct WatcomTypeInfo* type_info;
    void** obj_array;
} WatcomTypeArrayInfo;

// Structure: WatcomTypeInfo
typedef struct WatcomTypeInfo {
    int type_flags;
    WATCOM_DEFAULT_CONSTRUCTOR_FUNC* ctor;
    WATCOM_COPY_CONSTRUCTOR_FUNC* copy;
    WATCOM_VIRTUAL_DESTRUCTOR_FUNC* dtor;
    int instance_size;
    char* class_name;
} WatcomTypeInfo;

// Structure: WatcomVirtualBaseDescriptor
typedef struct WatcomVirtualBaseDescriptor {
    int flags;
    int offset_to_vbase;
} WatcomVirtualBaseDescriptor;

// Structure: _heapinfo
typedef struct _heapinfo {
    void* _pentry;
    ushort _segment;
    SIZE_T _size;
    int _useflag;
} _heapinfo;

// =============================================================================
// WATCOM C++ RUNTIME INLINE FUNCTIONS
// =============================================================================
//
// Internal Watcom C++ runtime functions for array new/delete.
// These work with the WatcomTypeInfo and WatcomTypeArrayInfo structs above.
//
// Construction hierarchy:
//   __vec_new -> __vec_new_ -> __arrinit_dispatch -> __arrinit / __arrinit_
// Destruction hierarchy:
//   __vec_delete -> __arrfini -> __arrdtor
//
// =============================================================================

// ---------------------------------------------------------------------------
// Array Construction Functions
// ---------------------------------------------------------------------------

// __arrinit - Low-level array constructor loop (default ctor)
inline void* __arrinit(void* array_start, int count, WatcomTypeInfo* ti) {
    char* p = (char*)array_start;
    for (int i = 0; i < count; i++, p += ti->instance_size)
        if (ti->ctor) (*ti->ctor)(p);
    return array_start;
}

// __arrinit_ - Low-level array constructor loop (flagged types)
inline void* __arrinit_(void* array_start, int count, WatcomTypeInfo* ti) {
    return __arrinit(array_start, count, ti);
}

// __arrinit_dispatch - Selects flagged vs default ctor based on type_flags
inline void* __arrinit_dispatch(void* array_ptr, int count, WatcomTypeInfo* ti) {
    if (!array_ptr) return 0;
    return __arrinit(array_ptr, count, ti);
}

// __vec_new_ - Internal: stores count at dest[0], dispatches construction
inline void* __vec_new_(void* dest, int count, WatcomTypeInfo* ti) {
    if (!dest) return 0;
    *(int*)dest = count;
    return __arrinit_dispatch((char*)dest + 4, count, ti);
}

// __vec_new - new[] entry point wrapper
inline void* __vec_new(void* dest, int count, WatcomTypeInfo* ti) {
    return __vec_new_(dest, count, ti);
}

// __arrcopy - Array copy-construction loop
inline void* __arrcopy(void* dest, void* src, int count, WatcomTypeInfo* ti) {
    char* d = (char*)dest;
    char* s = (char*)src;
    for (int i = 0; i < count; i++, d += ti->instance_size, s += ti->instance_size)
        if (ti->copy) (*ti->copy)(d, s);
    return dest;
}

// __arr_op - Generic array operation with function pointer
// Templated to accept any function pointer type (callers pass typed copy funcs)
template<typename CopyFunc>
inline void* __arr_op(void* dest, void* src, int count, int size, CopyFunc copy_func) {
    char* d = (char*)dest;
    char* s = (char*)src;
    void (*func)(void*, void*) = (void (*)(void*, void*))copy_func;
    for (int i = 0; i < count; i++, d += size, s += size)
        func(d, s);
    return dest;
}

// ---------------------------------------------------------------------------
// Array Destruction Functions
// ---------------------------------------------------------------------------

// __arrdtor - Low-level array destructor loop (reverse order)
inline void* __arrdtor(WatcomTypeArrayInfo* info) {
    char* p = (char*)info->obj_array + (info->obj_count - 1) * info->type_info->instance_size;
    for (int i = info->obj_count - 1; i >= 0; i--, p -= info->type_info->instance_size)
        if (info->type_info->dtor) (*info->type_info->dtor)(p, 0);
    return info->obj_array;
}

// __arrfini - Array destructor wrapper (packs params, calls __arrdtor)
inline void* __arrfini(void* obj_array, int count, WatcomTypeInfo* ti) {
    WatcomTypeArrayInfo info;
    info.obj_count = count;
    info.type_info = ti;
    info.obj_array = (void**)obj_array;
    __arrdtor(&info);
    return obj_array;
}

// __vec_delete - delete[] implementation (reads count from ptr-4)
inline void* __vec_delete(void* ptr, WatcomTypeInfo* ti) {
    if (!ptr) return 0;
    int* base = ((int*)ptr) - 1;
    __arrfini(ptr, *base, ti);
    return base;
}

// ---------------------------------------------------------------------------
// Watcom Memory Helper Functions
// ---------------------------------------------------------------------------

// __memfill - Optimized memory fill (handles alignment)
inline void __memfill(void* dest, unsigned int value, unsigned int count) {
    unsigned char* p = (unsigned char*)dest;
    for (unsigned int i = 0; i < count; i++) *p++ = (unsigned char)value;
}

// ---------------------------------------------------------------------------
// Watcom CRT Internal Functions
// ---------------------------------------------------------------------------

// notifyAbnormalTermination - Called by error handlers before abort
void notifyAbnormalTermination();

// __stosd - Bulk DWORD store (unrolled for performance)
inline void __stosd(void* dest, unsigned int value, unsigned int dword_count) {
    unsigned int* p = (unsigned int*)dest;
    for (unsigned int i = 0; i < dword_count; i++) *p++ = value;
}

// ---------------------------------------------------------------------------
// Stack Probe (Watcom compiler intrinsic)
// ---------------------------------------------------------------------------

// __STK - Stack probe function (ensures stack pages are committed)
// Watcom emits this with no args or with an explicit size argument.
inline void __STK() {}
inline void __STK(size_t size) {
    volatile char* p = (volatile char*)&size;
    while (size > 4096) { p -= 4096; (void)*p; size -= 4096; }
}
#define stack_probe __STK

// ---------------------------------------------------------------------------
// Watcom CRT Functions (io.h)
// ---------------------------------------------------------------------------

#include <cerrno>
#include <cstdlib>
#include <cstring>
#ifndef _MSC_VER
#include <unistd.h>
#endif

// Watcom __fastcall CRT wrappers (underscore-prefixed variants)
inline void* _memcpy(void* dest, const void* src, size_t count) { return memcpy(dest, src, count); }
inline void* _memset(void* dest, int value, size_t count) { return memset(dest, value, count); }

// tell() - get current file position
#ifndef _MSC_VER
inline long tell(int fd) { return lseek(fd, 0, SEEK_CUR); }
#endif

// chsize() - change file size
#ifndef _MSC_VER
inline int chsize(int fd, long size) { return ftruncate(fd, size); }
#endif

// access() mode flags
#ifndef F_OK
#define F_OK 0
#define W_OK 2
#define R_OK 4
#endif

// _fullpath() - get absolute path
#ifndef _MSC_VER
#ifndef PATH_MAX
#define PATH_MAX 4096
#endif
inline char* _fullpath(char* buffer, const char* path, size_t maxlen) {
    if (buffer == 0) buffer = (char*)malloc(maxlen ? maxlen : PATH_MAX);
    if (buffer == 0) return 0;
    if (realpath(path, buffer) == 0) { strcpy(buffer, path); }
    return buffer;
}
#endif

// _getcwd() - get current working directory
#ifndef _MSC_VER
inline char* _getcwd(char* buffer, int size) { return getcwd(buffer, size); }
#endif

// ---------------------------------------------------------------------------
// File Find Functions (Watcom io.h)
// ---------------------------------------------------------------------------
// Note: _find_t struct is defined in system/dos.h (from Ghidra)

#ifndef _MSC_VER
inline long _findfirst(const char* filespec, void* fileinfo) {
    (void)filespec; (void)fileinfo; return -1;
}
inline int _findnext(long handle, void* fileinfo) {
    (void)handle; (void)fileinfo; return -1;
}
inline int _findclose(long handle) {
    (void)handle; return 0;
}
#endif

// ---------------------------------------------------------------------------
// Watcom Directory Functions (direct.h)
// ---------------------------------------------------------------------------

#ifndef _MSC_VER
#include <sys/stat.h>
inline int _mkdir(const char* path) {
    return mkdir(path, 0755);
}
#endif

// ---------------------------------------------------------------------------
// Watcom Heap Functions (malloc.h)
// ---------------------------------------------------------------------------

// Heap status constants
#ifndef _HEAPOK
#define _HEAPOK       0
#define _HEAPEMPTY    1
#define _HEAPBADBEGIN 2
#define _HEAPBADNODE  3
#define _HEAPEND      4
#define _HEAPBADPTR   5
#endif

#ifndef _USEDENTRY
#define _USEDENTRY    0
#define _FREEENTRY    1
#endif

// _heapinfo - forward declaration (full definition from Ghidra types)
struct _heapinfo;

// _heapchk - Check heap consistency
inline int _heapchk(void) {
    return _HEAPOK;  // Always report OK for compilation
}

// _heapwalk - Walk through heap entries
inline int _heapwalk(struct _heapinfo* entry) {
    (void)entry;
    return _HEAPEND;  // Signal end of heap walk
}

// _memmax - Return largest available memory block
inline size_t _memmax(void) {
    return 0x7FFFFFFF;  // Return large value for compilation
}

// memavl - Return total available memory
inline size_t memavl(void) {
    return 0x7FFFFFFF;  // Return large value for compilation
}

// ---------------------------------------------------------------------------
// Watcom Internal CRT Functions
// ---------------------------------------------------------------------------

// __getfileattr - Internal file attribute getter (uses FindFirstFile)
inline unsigned long __getfileattr(const char* filename) {
    (void)filename;
    return 0;  // Return normal file attributes
}

// __set_errno - Get last Windows error and convert to errno
inline unsigned long __set_errno(void) {
    return 0;  // No error
}

// _errno - Return pointer to errno value (Watcom errno.h)
inline int* _errno(void) {
    return &errno;
}

// ---------------------------------------------------------------------------
// Watcom Static Destructor Registration
// ---------------------------------------------------------------------------

struct WatcomStaticDestructorNode;  // Forward declaration

// _atexit - Register static destructor node
inline void _atexit(WatcomStaticDestructorNode* node) {
    (void)node;  // No-op stub
}

