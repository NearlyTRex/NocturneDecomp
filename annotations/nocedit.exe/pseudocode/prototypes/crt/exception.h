#pragma once

// Function prototypes for crt/exception.cpp
// Generated from Ghidra function signatures

// Original: crt_exception.c_FormatHexString_FUN_0060a748
// Address: 0060a748
void __cdecl FormatHexString(char *dest,char *format,DWORD value);

// Original: crt_exception.c_TopLevelExceptionFilter_FUN_0060a7a4
// Address: 0060a7a4
long __cdecl TopLevelExceptionFilter(_EXCEPTION_POINTERS *ExceptionInfo);

// Original: crt_exception.c_ExceptionHandler_FUN_0060a9d8
// Address: 0060a9d8
EXCEPTION_DISPOSITION __cdecl ExceptionHandler(EXCEPTION_RECORD *ExceptionRecord,void *EstablisherFrame,CONTEXT *ContextRecord,void *DispatcherContext);

// Original: crt_exception.c_installExceptionHandler_FUN_0060aba8
// Address: 0060aba8
void __cdecl installExceptionHandler(ExceptionFrame *pExceptionFrame);

// Original: crt_exception.c_RemoveExceptionHandler_FUN_0060abf4
// Address: 0060abf4
void __cdecl RemoveExceptionHandler(void);
