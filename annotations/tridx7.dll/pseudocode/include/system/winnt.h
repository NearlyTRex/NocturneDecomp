#pragma once

// Dependencies
#include "system/basetypes.h"

// =============================================================================
// WINNT - System Header
// =============================================================================

// Typedef: LCID
// Unsigned Integer (compiler-specific size)
typedef DWORD LCID;

// Typedef: LPCH
// pointer to CHAR
typedef CHAR* LPCH;

// Typedef: LPWCH
// pointer to WCHAR
typedef WCHAR* LPWCH;

// Typedef: PCNZCH
// pointer to CHAR
typedef CHAR* PCNZCH;

// Typedef: PCNZWCH
// pointer to WCHAR
typedef WCHAR* PCNZWCH;

// Typedef: PLONG
// pointer to LONG
typedef LONG* PLONG;

// Typedef: PRTL_CRITICAL_SECTION
// pointer to _RTL_CRITICAL_SECTION
typedef struct _RTL_CRITICAL_SECTION* PRTL_CRITICAL_SECTION;

// Typedef: PRTL_CRITICAL_SECTION_DEBUG
// pointer to _RTL_CRITICAL_SECTION_DEBUG
typedef struct _RTL_CRITICAL_SECTION_DEBUG* PRTL_CRITICAL_SECTION_DEBUG;

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
#pragma pack(push, 4)
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
#pragma pack(pop)

// Typedef: CONTEXT
typedef _CONTEXT CONTEXT;

// Typedef: PCONTEXT
// pointer to CONTEXT
typedef CONTEXT* PCONTEXT;

// Structure: _EXCEPTION_POINTERS
typedef struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
} _EXCEPTION_POINTERS;

// Structure: _GUID
typedef struct _GUID {
    ULONG Data1;
    USHORT Data2;
    USHORT Data3;
    UCHAR Data4[8];
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
#pragma pack(push, 8)
typedef struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
} __attribute__((aligned(4))) _RTL_CRITICAL_SECTION;
#pragma pack(pop)

