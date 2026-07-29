// Name: crt_unknown.c_FUN_00566570
// Address: 00566570
// Address Range: [[00566570, 00566586]]
// Convention: __cdecl
// Signature: int __cdecl crt_unknown_c_FUN_00566570(char *path)

#include "nocturne.h"

int __cdecl FUN_00566570(char *path)

{
  BOOL BVar1;
  DWORD windows_error;
  int iVar2;
  
  BVar1 = SetCurrentDirectoryA(path);
  if (BVar1 != 0) {
    return 0;
  }
  windows_error = GetLastError();
  iVar2 = convertWindowsErrorToErrno(windows_error);
  return iVar2;
}
