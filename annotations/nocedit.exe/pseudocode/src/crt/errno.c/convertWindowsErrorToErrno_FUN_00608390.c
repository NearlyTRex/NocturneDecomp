// Name: crt_errno.c_convertWindowsErrorToErrno_FUN_00608390
// Address: 00608390
// Address Range: [[00608390, 006083fb]]
// Convention: __cdecl
// Signature: int __cdecl crt_errno_c_convertWindowsErrorToErrno_FUN_00608390(DWORD windows_error)

#include "nocturne.h"

int __cdecl crt_errno_c_convertWindowsErrorToErrno_FUN_00608390(DWORD windows_error)

{
  int error_code;
  
  crt_errno_c_SetWindowsError_FUN_006027c8(windows_error);
  if (windows_error == SYSTEM_ERROR_INVALID_NAME) {
    error_code = SYSTEM_EPERM;
  }
  else {
    if (windows_error == SYSTEM_ERROR_FILENAME_EXCED_RANGE) {
      crt_errno_c_setErrno_FUN_00602790(SYSTEM_EBADF);
      return -1;
    }
    if (windows_error == SYSTEM_ERROR_ALREADY_EXISTS) {
      crt_errno_c_setErrno_FUN_00602790(SYSTEM_E2BIG);
      return -1;
    }
    if (0x13 < windows_error) {
      windows_error = 0x13;
    }
    error_code = *(int *)(&g_LookupTableStruct + windows_error) >> 0x18;
  }
  crt_errno_c_setErrno_FUN_00602790(error_code);
  return -1;
}
