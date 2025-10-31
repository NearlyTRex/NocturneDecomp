#pragma once

// Structure: HINSTANCE__
typedef struct HINSTANCE__ {
    int unused;
} HINSTANCE__;

// Structure: HKEY__
typedef struct HKEY__ {
    int unused;
} HKEY__;

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

// Structure: _EXCEPTION_POINTERS
typedef struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
} _EXCEPTION_POINTERS;

// Structure: _EXCEPTION_RECORD
typedef struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    _EXCEPTION_RECORD* ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
} _EXCEPTION_RECORD;

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

// Structure: _GUID
typedef struct _GUID {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
} _GUID;

// Structure: _LIST_ENTRY
typedef struct _LIST_ENTRY {
    _LIST_ENTRY* Flink;
    _LIST_ENTRY* Blink;
} _LIST_ENTRY;

// Structure: _RTL_CRITICAL_SECTION
typedef struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
} _RTL_CRITICAL_SECTION;

// Structure: _RTL_CRITICAL_SECTION_DEBUG
typedef struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    _RTL_CRITICAL_SECTION* CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
} _RTL_CRITICAL_SECTION_DEBUG;

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

// Structure: _struct_519
typedef struct _struct_519 {
    DWORD Offset;
    DWORD OffsetHigh;
} _struct_519;

