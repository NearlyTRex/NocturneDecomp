#pragma once

// Function prototypes for crt/errno.cpp
// Generated from Ghidra function signatures

// Original: crt_errno.c_setErrno_FUN_00568e80
// Address: 00568e80
void __cdecl setErrno(int error_code);

// Original: crt_errno.c_SetWindowsError_FUN_00568eb8
// Address: 00568eb8
void __cdecl SetWindowsError(DWORD windows_error_code);

// Original: crt_errno.c_convertWindowsErrorToErrno_FUN_0056c6d0
// Address: 0056c6d0
int __cdecl convertWindowsErrorToErrno(DWORD windows_error);

// Original: crt_errno.c___set_errno_FUN_0056c73c
// Address: 0056c73c
DWORD __cdecl ::_set_errno(void);

// Original: crt_errno.c__errno_FUN_0056f1a0
// Address: 0056f1a0
int * __cdecl ::errno(void);
