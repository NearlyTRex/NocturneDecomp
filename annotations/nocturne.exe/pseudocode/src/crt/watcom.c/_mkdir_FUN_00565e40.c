// Name: crt_watcom.c__mkdir_FUN_00565e40
// Address: 00565e40
// Address Range: [[00565e40, 00565e58]]
// Convention: __cdecl
// Signature: int __cdecl crt_watcom_c__mkdir_FUN_00565e40(char *path)

#include "nocturne.h"

int __cdecl _mkdir(char *path)

{
  BOOL BVar1;
  DWORD windows_error;
  int iVar2;
  
  BVar1 = CreateDirectoryA(path,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 != 0) {
    return 0;
  }
  windows_error = GetLastError();
  iVar2 = convertWindowsErrorToErrno(windows_error);
  return iVar2;
}
