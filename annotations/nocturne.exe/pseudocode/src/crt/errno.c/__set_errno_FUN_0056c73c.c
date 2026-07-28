// Name: crt_errno.c___set_errno_FUN_0056c73c
// Address: 0056c73c
// Address Range: [[0056c73c, 0056c74c]]
// Convention: __cdecl
// Signature: DWORD __cdecl crt_errno_c___set_errno_FUN_0056c73c(void)

#include "nocturne.h"

DWORD __cdecl __set_errno(void)

{
  DWORD windows_error;
  DWORD DVar1;
  
  windows_error = GetLastError();
  DVar1 = convertWindowsErrorToErrno(windows_error);
  return DVar1;
}
