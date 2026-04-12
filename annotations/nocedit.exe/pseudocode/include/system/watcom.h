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
#pragma pack(push, 1)
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
#pragma pack(pop)

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
#pragma pack(push, 1)
typedef struct WatcomDestructorFlags {
    byte bits[48];
} WatcomDestructorFlags;
#pragma pack(pop)

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
#pragma pack(push, 1)
typedef struct WatcomThunkedDestructorDirect {
    void* destructor_func;
    int this_adjustment;
} WatcomThunkedDestructorDirect;
#pragma pack(pop)

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
#pragma pack(push, 1)
typedef struct WatcomVirtualBaseDescriptor {
    int flags;
    int offset_to_vbase;
} WatcomVirtualBaseDescriptor;
#pragma pack(pop)

// Structure: _heapinfo
#pragma pack(push, 1)
typedef struct _heapinfo {
    void* _pentry;
    ushort _segment;
    SIZE_T _size;
    int _useflag;
} _heapinfo;
#pragma pack(pop)

// =============================================================================
// WATCOM C++ RUNTIME FUNCTIONS
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
// Implementations are in shims/watcom.cpp.
//
// =============================================================================

// ---------------------------------------------------------------------------
// Array Construction Functions
// ---------------------------------------------------------------------------

extern void* __arrinit(void* array_start, int count, WatcomTypeInfo* ti);
extern void* __arrinit_(void* array_start, int count, WatcomTypeInfo* ti);
extern void* __arrinit_dispatch(void* array_ptr, int count, WatcomTypeInfo* ti);
extern void* __vec_new_(void* dest, int count, WatcomTypeInfo* ti);
extern void* __vec_new(void* dest, int count, WatcomTypeInfo* ti);
extern void* __arrcopy(void* dest, void* src, int count, WatcomTypeInfo* ti);

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

extern void* __arrdtor(WatcomTypeArrayInfo* info);
extern void* __arrfini(void* obj_array, int count, WatcomTypeInfo* ti);
extern void* __vec_delete(void* ptr, WatcomTypeInfo* ti);

// ---------------------------------------------------------------------------
// Watcom Memory Helper Functions
// ---------------------------------------------------------------------------

extern void __memfill(void* dest, unsigned int value, unsigned int count);

// ---------------------------------------------------------------------------
// Watcom CRT Internal Functions
// ---------------------------------------------------------------------------

extern void notifyAbnormalTermination();
extern void __stosd(void* dest, unsigned int value, unsigned int dword_count);

// ---------------------------------------------------------------------------
// Stack Probe (Watcom compiler intrinsic)
// ---------------------------------------------------------------------------

extern void __STK();
extern void __STK(size_t size);
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

extern void* _memcpy(void* dest, const void* src, size_t count);
extern void* _memset(void* dest, int value, size_t count);
extern long tell(int fd);
extern int chsize(int fd, long size);

// access() mode flags
#ifndef F_OK
#define F_OK 0
#define W_OK 2
#define R_OK 4
#endif

#ifndef PATH_MAX
#define PATH_MAX 4096
#endif
extern char* _fullpath(char* buffer, const char* path, size_t maxlen);
extern char* _getcwd(char* buffer, int size);

// ---------------------------------------------------------------------------
// File Find Functions (Watcom io.h)
// ---------------------------------------------------------------------------
// Note: _find_t struct is defined in system/dos.h (from Ghidra)

extern long _findfirst(const char* filespec, void* fileinfo);
extern int _findnext(long handle, void* fileinfo);
extern int _findclose(long handle);

// ---------------------------------------------------------------------------
// Watcom Directory Functions (direct.h)
// ---------------------------------------------------------------------------

extern int _mkdir(const char* path);

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

extern int _heapchk(void);
extern int _heapwalk(struct _heapinfo* entry);
extern size_t _memmax(void);
extern size_t memavl(void);

// ---------------------------------------------------------------------------
// Watcom Internal CRT Functions
// ---------------------------------------------------------------------------

extern unsigned long __getfileattr(const char* filename);
extern unsigned long __set_errno(void);
extern int* _errno(void);

// ---------------------------------------------------------------------------
// Watcom Static Destructor Registration
// ---------------------------------------------------------------------------

struct WatcomStaticDestructorNode;  // Forward declaration

extern void _atexit(WatcomStaticDestructorNode* node);

