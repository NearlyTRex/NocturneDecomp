#pragma once

// Function prototypes for crt/errno.cpp
// Generated from Ghidra function signatures

// Original: crt_errno.c__errno_FUN_00601450
// Address: 00601450
int * __cdecl ::errno(void);

// Original: crt_errno.c_setErrno_FUN_00602790
// Address: 00602790
void __cdecl setErrno(int error_code);

// Original: crt_errno.c_SetWindowsError_FUN_006027c8
// Address: 006027c8
void __cdecl SetWindowsError(DWORD windows_error_code);

// Original: crt_errno.c_convertWindowsErrorToErrno_FUN_00608390
// Address: 00608390
int __cdecl convertWindowsErrorToErrno(DWORD windows_error);

// Original: crt_errno.c___set_errno_FUN_006083fc
// Address: 006083fc
DWORD __cdecl ::_set_errno(void);
