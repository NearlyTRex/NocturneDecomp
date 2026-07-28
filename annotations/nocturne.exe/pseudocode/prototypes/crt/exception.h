#pragma once

// Function prototypes for crt/exception.cpp
// Generated from Ghidra function signatures

// Original: crt_exception.c_FormatHexString_FUN_0056ea78
// Address: 0056ea78
void __cdecl FormatHexString(char *dest,char *format,DWORD value);

// Original: crt_exception.c_TopLevelExceptionFilter_FUN_0056ead4
// Address: 0056ead4
long __cdecl TopLevelExceptionFilter(_EXCEPTION_POINTERS *ExceptionInfo);

// Original: crt_exception.c_ExceptionHandler_FUN_0056ed08
// Address: 0056ed08
undefined4 ExceptionHandler(PEXCEPTION_RECORD param_1,undefined4 param_2,PCONTEXT param_3);

// Original: crt_exception.c_installExceptionHandler_FUN_0056eed8
// Address: 0056eed8
void installExceptionHandler(undefined4 param_1);

// Original: crt_exception.c_RemoveExceptionHandler_FUN_0056ef24
// Address: 0056ef24
void __cdecl RemoveExceptionHandler(void);
