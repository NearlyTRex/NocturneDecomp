// Name: crt_unknown.c_FUN_0056bbf0
// Address: 0056bbf0
// Address Range: [[0056bbf0, 0056bc06]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_unknown_c_FUN_0056bbf0(char *filename)

#include "nocturne.h"

int __watcallStack FUN_0056bbf0(char *filename)

{
  BOOL BVar1;
  DWORD windows_error;
  int iVar2;
  
  BVar1 = DeleteFileA(filename);
  if (BVar1 != 0) {
    return 0;
  }
  windows_error = GetLastError();
  iVar2 = convertWindowsErrorToErrno(windows_error);
  return iVar2;
}
