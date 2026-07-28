// Name: crt_unknown.c_FUN_00566570
// Address: 00566570
// Address Range: [[00566570, 00566586]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_00566570(LPCSTR param_1)

#include "nocturne.h"

int FUN_00566570(LPCSTR param_1)

{
  BOOL BVar1;
  DWORD windows_error;
  int iVar2;
  
  BVar1 = SetCurrentDirectoryA(param_1);
  if (BVar1 != 0) {
    return 0;
  }
  windows_error = GetLastError();
  iVar2 = convertWindowsErrorToErrno(windows_error);
  return iVar2;
}
