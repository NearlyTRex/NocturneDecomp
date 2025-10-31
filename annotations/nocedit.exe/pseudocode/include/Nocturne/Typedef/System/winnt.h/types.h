#pragma once

// Typedef: ACCESS_MASK
// Unsigned Long Integer (compiler-specific size)
typedef DWORD ACCESS_MASK;

// Typedef: CONTEXT
typedef _CONTEXT CONTEXT;

// Typedef: CRITICAL_SECTION
typedef _RTL_CRITICAL_SECTION CRITICAL_SECTION;

// Typedef: EXCEPTION_RECORD
typedef _EXCEPTION_RECORD EXCEPTION_RECORD;

// Typedef: FARPROC
// pointer to FARPROC_FUNC
typedef FARPROC_FUNC* FARPROC;

// Typedef: GUID
typedef _GUID GUID;

// Typedef: LARGE_INTEGER
typedef _LARGE_INTEGER LARGE_INTEGER;

// Typedef: LIST_ENTRY
typedef _LIST_ENTRY LIST_ENTRY;

// Typedef: LPCRITICAL_SECTION
// pointer to _RTL_CRITICAL_SECTION
typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

// Typedef: LPCSTR
// pointer to CHAR
typedef CHAR* LPCSTR;

// Typedef: LPGUID
// pointer to _GUID
typedef _GUID* LPGUID;

// Typedef: LRESULT
// Signed Long Integer (compiler-specific size)
typedef LONG_PTR LRESULT;

// Typedef: LSTATUS
// Signed Long Integer (compiler-specific size)
typedef LONG LSTATUS;

// Typedef: PCONTEXT
// pointer to CONTEXT
typedef CONTEXT* PCONTEXT;

// Typedef: PEXCEPTION_RECORD
// pointer to EXCEPTION_RECORD
typedef EXCEPTION_RECORD* PEXCEPTION_RECORD;

// Typedef: PEXCEPTION_ROUTINE
// pointer to EXCEPTION_ROUTINE
typedef EXCEPTION_ROUTINE* PEXCEPTION_ROUTINE;

// Typedef: PLONG
// pointer to LONG
typedef LONG* PLONG;

// Typedef: PRTL_CRITICAL_SECTION
// pointer to _RTL_CRITICAL_SECTION
typedef _RTL_CRITICAL_SECTION* PRTL_CRITICAL_SECTION;

// Typedef: PRTL_CRITICAL_SECTION_DEBUG
// pointer to _RTL_CRITICAL_SECTION_DEBUG
typedef _RTL_CRITICAL_SECTION_DEBUG* PRTL_CRITICAL_SECTION_DEBUG;

// Typedef: PVOID
// pointer to void
typedef void* PVOID;

// Typedef: REGSAM
// Unsigned Long Integer (compiler-specific size)
typedef ACCESS_MASK REGSAM;

// Typedef: SIGNAL_HANDLER
// pointer to SIGNAL_HANDLER_FUNC
typedef SIGNAL_HANDLER_FUNC* SIGNAL_HANDLER;

