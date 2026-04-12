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

// Function Definition: FARPROC_FUNC
typedef int FARPROC_FUNC(void);

// Typedef: FARPROC
// pointer to FARPROC_FUNC
typedef FARPROC_FUNC* FARPROC;

// Structure: HKEY__
#pragma pack(push, 1)
typedef struct HKEY__ {
    void* unused;
} __attribute__((aligned(4))) HKEY__;
#pragma pack(pop)

// Typedef: LPGUID
// pointer to _GUID
typedef struct _GUID* LPGUID;

// Typedef: LSTATUS
// Signed Long Integer (compiler-specific size)
typedef LONG LSTATUS;

// Typedef: PLONG
// pointer to LONG
typedef LONG* PLONG;

// Typedef: PRTL_CRITICAL_SECTION
// pointer to _RTL_CRITICAL_SECTION
typedef struct _RTL_CRITICAL_SECTION* PRTL_CRITICAL_SECTION;

// Typedef: PRTL_CRITICAL_SECTION_DEBUG
// pointer to _RTL_CRITICAL_SECTION_DEBUG
typedef struct _RTL_CRITICAL_SECTION_DEBUG* PRTL_CRITICAL_SECTION_DEBUG;

// Typedef: REGSAM
// Unsigned Long Integer (compiler-specific size)
typedef ACCESS_MASK REGSAM;

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
#pragma pack(push, 1)
typedef struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD* ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
} __attribute__((aligned(4))) _EXCEPTION_RECORD;
#pragma pack(pop)

// Typedef: EXCEPTION_RECORD
typedef _EXCEPTION_RECORD EXCEPTION_RECORD;

// Typedef: PEXCEPTION_RECORD
// pointer to EXCEPTION_RECORD
typedef EXCEPTION_RECORD* PEXCEPTION_RECORD;

// Structure: _FLOATING_SAVE_AREA
#pragma pack(push, 1)
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
} __attribute__((aligned(4))) _FLOATING_SAVE_AREA;
#pragma pack(pop)

// Typedef: FLOATING_SAVE_AREA
typedef _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

// Structure: _CONTEXT
#pragma pack(push, 1)
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
} __attribute__((aligned(4))) _CONTEXT;
#pragma pack(pop)

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
#pragma pack(push, 1)
typedef struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
} __attribute__((aligned(4))) _EXCEPTION_POINTERS;
#pragma pack(pop)

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
#pragma pack(push, 1)
typedef struct _LIST_ENTRY {
    struct _LIST_ENTRY* Flink;
    struct _LIST_ENTRY* Blink;
} __attribute__((aligned(4))) _LIST_ENTRY;
#pragma pack(pop)

// Typedef: LIST_ENTRY
typedef _LIST_ENTRY LIST_ENTRY;

// Union: _MMX_INTEGER
#pragma pack(push, 1)
typedef union _MMX_INTEGER {
    ulonglong mm;
    uint u32[2];
    _BIT_INTEGER32 b32[2];
} _MMX_INTEGER;
#pragma pack(pop)

// Structure: _RTL_CRITICAL_SECTION_DEBUG
#pragma pack(push, 1)
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
} __attribute__((aligned(4))) _RTL_CRITICAL_SECTION_DEBUG;
#pragma pack(pop)

// Structure: _RTL_CRITICAL_SECTION
#pragma pack(push, 1)
typedef struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
} __attribute__((aligned(4))) _RTL_CRITICAL_SECTION;
#pragma pack(pop)

// Typedef: CRITICAL_SECTION
typedef _RTL_CRITICAL_SECTION CRITICAL_SECTION;

// Typedef: LPCRITICAL_SECTION
// pointer to _RTL_CRITICAL_SECTION
typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

// Structure: _floatx2
#pragma pack(push, 1)
typedef struct _floatx2 {
    float _p1;
    float _p2;
} _floatx2;
#pragma pack(pop)

// Structure: _struct_19
#pragma pack(push, 1)
typedef struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
} __attribute__((aligned(4))) _struct_19;
#pragma pack(pop)

// Union: _LARGE_INTEGER
#pragma pack(push, 1)
typedef union _LARGE_INTEGER {
    _struct_19 s;
    LONGLONG QuadPart;
} __attribute__((aligned(4))) _LARGE_INTEGER;
#pragma pack(pop)

// Typedef: LARGE_INTEGER
typedef _LARGE_INTEGER LARGE_INTEGER;

// Structure: _struct_20
#pragma pack(push, 1)
typedef struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
} __attribute__((aligned(4))) _struct_20;
#pragma pack(pop)

// Structure: _struct_519
#pragma pack(push, 1)
typedef struct _struct_519 {
    DWORD Offset;
    DWORD OffsetHigh;
} __attribute__((aligned(4))) _struct_519;
#pragma pack(pop)

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

// Union: _union_518
#pragma pack(push, 1)
typedef union _union_518 {
    _struct_519 s;
    PVOID Pointer;
} __attribute__((aligned(4))) _union_518;
#pragma pack(pop)

