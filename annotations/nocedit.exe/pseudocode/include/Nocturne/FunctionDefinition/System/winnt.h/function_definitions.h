#pragma once

// Function Definition: EXCEPTION_ROUTINE
typedef EXCEPTION_DISPOSITION (*EXCEPTION_ROUTINE)(EXCEPTION_RECORD* ExceptionRecord, PVOID EstablisherFrame, PCONTEXT ContextRecord, PVOID DispatcherContext);

// Function Definition: FARPROC_FUNC
typedef int (*FARPROC_FUNC)(void);

