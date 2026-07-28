// Name: crt_errno.c_convertWindowsErrorToErrno_FUN_0056c6d0
// Address: 0056c6d0
// Address Range: [[0056c6d0, 0056c73b]]
// Convention: __cdecl
// Signature: int __cdecl crt_errno_c_convertWindowsErrorToErrno_FUN_0056c6d0(DWORD windows_error)

#include "nocturne.h"

int __cdecl convertWindowsErrorToErrno(DWORD windows_error)

{
  int error_code;
  
  SetWindowsError(windows_error);
  if (windows_error == 0x7b) {
    error_code = 1;
  }
  else {
    if (windows_error == 0xce) {
      setErrno(9);
      return -1;
    }
    if (windows_error == 0xb7) {
      setErrno(7);
      return -1;
    }
    if (0x13 < windows_error) {
      windows_error = 0x13;
    }
    error_code = *(int *)(&DAT_005c1da9 + windows_error) >> 0x18;
  }
  setErrno(error_code);
  return -1;
}
