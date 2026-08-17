#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// WINNT - System Header
// =============================================================================

// Typedef: ACCESS_MASK
// Unsigned Long Integer (compiler-specific size)
typedef DWORD ACCESS_MASK;

// Enum: EXCEPTION_DISPOSITION
enum {
    ExceptionContinueExecution = 0,
    ExceptionContinueSearch = 1,
    ExceptionNestedException = 2,
    ExceptionCollidedUnwind = 3
};
typedef int EXCEPTION_DISPOSITION;

// Function Definition: EXCEPTION_FILTER_FUNC
typedef int EXCEPTION_FILTER_FUNC(int action, DWORD exceptionCode);

// Typedef: LPCH
// pointer to CHAR
typedef CHAR* LPCH;

// Typedef: LPGUID
// pointer to _GUID
typedef struct _GUID* LPGUID;

// Typedef: PHANDLE
// pointer to HANDLE
typedef HANDLE* PHANDLE;

// Typedef: PLONG
// pointer to LONG
typedef LONG* PLONG;

// Typedef: PMEMORY_BASIC_INFORMATION
// pointer to _MEMORY_BASIC_INFORMATION
typedef struct _MEMORY_BASIC_INFORMATION* PMEMORY_BASIC_INFORMATION;

// Typedef: PRTL_CRITICAL_SECTION
// pointer to _RTL_CRITICAL_SECTION
typedef struct _RTL_CRITICAL_SECTION* PRTL_CRITICAL_SECTION;

// Typedef: PRTL_CRITICAL_SECTION_DEBUG
// pointer to _RTL_CRITICAL_SECTION_DEBUG
typedef struct _RTL_CRITICAL_SECTION_DEBUG* PRTL_CRITICAL_SECTION_DEBUG;

// Union: _BIT_INTEGER16
#pragma pack(push, 1)
typedef union _BIT_INTEGER16 {
    ushort word;
    uchar bytes[2];
} _BIT_INTEGER16;
#pragma pack(pop)

// Union: _BIT_INTEGER32
#pragma pack(push, 1)
typedef union _BIT_INTEGER32 {
    uint dword;
    ushort words[2];
    uchar bytes[4];
    byte nibs[4];
} _BIT_INTEGER32;
#pragma pack(pop)

// Structure: _EXCEPTION_RECORD
typedef struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD* ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
} _EXCEPTION_RECORD;

// Typedef: EXCEPTION_RECORD
typedef _EXCEPTION_RECORD EXCEPTION_RECORD;

// Typedef: PEXCEPTION_RECORD
// pointer to EXCEPTION_RECORD
typedef EXCEPTION_RECORD* PEXCEPTION_RECORD;

// Structure: _FLOATING_SAVE_AREA
typedef struct _FLOATING_SAVE_AREA {
    DWORD ControlWord;
    DWORD StatusWord;
    DWORD TagWord;
    DWORD ErrorOffset;
    DWORD ErrorSelector;
    DWORD DataOffset;
    DWORD DataSelector;
    BYTE RegisterArea[80];
    DWORD Cr0NpxState;
} _FLOATING_SAVE_AREA;

// Typedef: FLOATING_SAVE_AREA
typedef _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

// Structure: _CONTEXT
typedef struct _CONTEXT {
    DWORD ContextFlags;
    DWORD Dr0;
    DWORD Dr1;
    DWORD Dr2;
    DWORD Dr3;
    DWORD Dr6;
    DWORD Dr7;
    FLOATING_SAVE_AREA FloatSave;
    DWORD SegGs;
    DWORD SegFs;
    DWORD SegEs;
    DWORD SegDs;
    DWORD Edi;
    DWORD Esi;
    DWORD Ebx;
    DWORD Edx;
    DWORD Ecx;
    DWORD Eax;
    DWORD Ebp;
    DWORD Eip;
    DWORD SegCs;
    DWORD EFlags;
    DWORD Esp;
    DWORD SegSs;
    BYTE ExtendedRegisters[512];
} _CONTEXT;

// Typedef: CONTEXT
typedef _CONTEXT CONTEXT;

// Typedef: PCONTEXT
// pointer to CONTEXT
typedef CONTEXT* PCONTEXT;

// Function Definition: EXCEPTION_ROUTINE
typedef EXCEPTION_DISPOSITION EXCEPTION_ROUTINE(EXCEPTION_RECORD* ExceptionRecord, PVOID EstablisherFrame, PCONTEXT ContextRecord, PVOID DispatcherContext);

// Typedef: PEXCEPTION_ROUTINE
// pointer to EXCEPTION_ROUTINE
typedef EXCEPTION_ROUTINE* PEXCEPTION_ROUTINE;

// Structure: EXCEPTION_REGISTRATION_RECORD
#pragma pack(push, 1)
typedef struct EXCEPTION_REGISTRATION_RECORD {
    struct EXCEPTION_REGISTRATION_RECORD* Next;
    PEXCEPTION_ROUTINE Handler;
} EXCEPTION_REGISTRATION_RECORD;
#pragma pack(pop)

// Structure: _EXCEPTION_POINTERS
typedef struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
} _EXCEPTION_POINTERS;

// Structure: _GUID
typedef struct _GUID {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
} _GUID;

// Typedef: GUID
typedef _GUID GUID;

// Structure: _LIST_ENTRY
typedef struct _LIST_ENTRY {
    struct _LIST_ENTRY* Flink;
    struct _LIST_ENTRY* Blink;
} _LIST_ENTRY;

// Typedef: LIST_ENTRY
typedef _LIST_ENTRY LIST_ENTRY;

// Structure: _MEMORY_BASIC_INFORMATION
typedef struct _MEMORY_BASIC_INFORMATION {
    PVOID BaseAddress;
    PVOID AllocationBase;
    DWORD AllocationProtect;
    SIZE_T RegionSize;
    DWORD State;
    DWORD Protect;
    DWORD Type;
} _MEMORY_BASIC_INFORMATION;

// Union: _MMX_INTEGER
#pragma pack(push, 1)
typedef union _MMX_INTEGER {
    ulonglong mm;
    uint u32[2];
    _BIT_INTEGER32 b32[2];
} _MMX_INTEGER;
#pragma pack(pop)

// Structure: _RTL_CRITICAL_SECTION_DEBUG
typedef struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION* CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
} _RTL_CRITICAL_SECTION_DEBUG;

// Structure: _RTL_CRITICAL_SECTION
typedef struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
} _RTL_CRITICAL_SECTION;

// Typedef: CRITICAL_SECTION
typedef _RTL_CRITICAL_SECTION CRITICAL_SECTION;

// Structure: _floatx2
#pragma pack(push, 1)
typedef struct _floatx2 {
    float _p1;
    float _p2;
} _floatx2;
#pragma pack(pop)

// Structure: _struct_19
typedef struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
} _struct_19;

// Structure: _struct_20
typedef struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
} _struct_20;

// Union: _LARGE_INTEGER
typedef union _LARGE_INTEGER {
    _struct_19 s;
    _struct_20 u;
    LONGLONG QuadPart;
} _LARGE_INTEGER;

// Typedef: LARGE_INTEGER
typedef _LARGE_INTEGER LARGE_INTEGER;

// Structure: _uintx2
#pragma pack(push, 1)
typedef struct _uintx2 {
    uint low;
    uint high;
} _uintx2;
#pragma pack(pop)

// Union: _SPLIT_DOUBLE
#pragma pack(push, 1)
typedef union _SPLIT_DOUBLE {
    double d;
    _uintx2 u;
} _SPLIT_DOUBLE;
#pragma pack(pop)

