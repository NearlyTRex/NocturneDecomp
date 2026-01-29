// Name: crt_io.c_chdir_FUN_006012a0
// Address: 006012a0
// Address Range: [[006012a0, 006012b6]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c_chdir_FUN_006012a0(char *path)

#include "nocturne.h"

int __cdecl chdir(char *path)

{
  BOOL BVar1;
  DWORD windows_error;
  int iVar2;
  
  BVar1 = (*g_SetCurrentDirectoryAFunc)(path);
  if (BVar1 != 0) {
    return 0;
  }
  windows_error = (*g_GetLastErrorFunc)();
  iVar2 = convertWindowsErrorToErrno(windows_error);
  return iVar2;
}
