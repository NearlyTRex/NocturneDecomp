// Name: crt_stdio.c_remove_FUN_00606600
// Address: 00606600
// Address Range: [[00606600, 00606616]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_stdio_c_remove_FUN_00606600(char *filename)

#include "nocturne.h"

int __watcallStack remove(char *filename)

{
  BOOL BVar1;
  DWORD windows_error;
  int iVar2;
  
  BVar1 = (*g_DeleteFileAFunc)(filename);
  if (BVar1 != 0) {
    return 0;
  }
  windows_error = (*g_GetLastErrorFunc)();
  iVar2 = convertWindowsErrorToErrno(windows_error);
  return iVar2;
}
