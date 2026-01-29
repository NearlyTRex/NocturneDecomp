// Name: crt_errno.c_convertWindowsErrorToErrno_FUN_00608390
// Address: 00608390
// Address Range: [[00608390, 006083fb]]
// Convention: __cdecl
// Signature: int __cdecl crt_errno_c_convertWindowsErrorToErrno_FUN_00608390(DWORD windows_error)

#include "nocturne.h"

int __cdecl convertWindowsErrorToErrno(DWORD windows_error)

{
  int error_code;
  
  SetWindowsError(windows_error);
  if (windows_error == SYSTEM_ERROR_INVALID_NAME) {
    error_code = SYSTEM_EPERM;
  }
  else {
    if (windows_error == SYSTEM_ERROR_FILENAME_EXCED_RANGE) {
      setErrno(SYSTEM_EBADF);
      return -1;
    }
    if (windows_error == SYSTEM_ERROR_ALREADY_EXISTS) {
      setErrno(SYSTEM_E2BIG);
      return -1;
    }
    if (0x13 < windows_error) {
      windows_error = 0x13;
    }
    error_code = *(int *)(&g_LookupTableStruct + windows_error) >> 0x18;
  }
  setErrno(error_code);
  return -1;
}
