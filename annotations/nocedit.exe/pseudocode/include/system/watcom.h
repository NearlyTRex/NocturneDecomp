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
    tm localtime_buffer;
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
typedef void (*WATCOM_COPY_CONSTRUCTOR_FUNC)(void* param0, void* param1);

// Function Definition: WATCOM_DEFAULT_CONSTRUCTOR_FUNC
typedef void (*WATCOM_DEFAULT_CONSTRUCTOR_FUNC)(void* param0);

// Function Definition: WATCOM_VIRTUAL_DESTRUCTOR_FUNC
typedef void (*WATCOM_VIRTUAL_DESTRUCTOR_FUNC)(void* object_ptr, int flags);

// Structure: WatcomDestructorCall
typedef struct WatcomDestructorCall {
    int delete_flags;
    void* destructor_func;
    void* object_instance;
} WatcomDestructorCall;

// Structure: WatcomDestructorFlags
typedef struct WatcomDestructorFlags {
    byte field_0[38];
    undefined1 field_38;
    undefined1 field_39;
    undefined1 field_40;
    undefined1 field_41;
    undefined1 field_42;
    undefined1 field_43;
    undefined1 field_44;
    undefined1 field_45;
    undefined1 field_46;
    undefined1 field_47;
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

