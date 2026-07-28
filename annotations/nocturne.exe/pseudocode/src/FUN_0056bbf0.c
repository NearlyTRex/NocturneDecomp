// Name: FUN_0056bbf0
// Address: 0056bbf0
// Address Range: [[0056bbf0, 0056bc06]]
// Convention: unknown
// Signature: int FUN_0056bbf0(LPCSTR param_1)

#include "nocturne.h"

int FUN_0056bbf0(LPCSTR param_1)

{
  BOOL BVar1;
  DWORD windows_error;
  int iVar2;
  
  BVar1 = DeleteFileA(param_1);
  if (BVar1 != 0) {
    return 0;
  }
  windows_error = GetLastError();
  iVar2 = convertWindowsErrorToErrno(windows_error);
  return iVar2;
}
