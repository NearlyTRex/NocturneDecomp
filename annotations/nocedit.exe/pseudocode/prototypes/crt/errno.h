#pragma once

// Function prototypes for crt/errno.cpp
// Generated from Ghidra function signatures

// Original: crt_errno.c_errno_FUN_00601450
// Address: 00601450
undefined errno();

// Original: crt_errno.c_setErrno_FUN_00602790
// Address: 00602790
void setErrno(int error_code);

// Original: crt_errno.c_SetWindowsError_FUN_006027c8
// Address: 006027c8
void SetWindowsError(DWORD windows_error_code);

// Original: crt_errno.c_convertWindowsErrorToErrno_FUN_00608390
// Address: 00608390
int convertWindowsErrorToErrno(DWORD windows_error);

// Original: crt_errno.c_getLastErrorAndSetErrno_FUN_006083fc
// Address: 006083fc
DWORD getLastErrorAndSetErrno(void);
