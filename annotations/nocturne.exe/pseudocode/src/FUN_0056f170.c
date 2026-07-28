// Name: FUN_0056f170
// Address: 0056f170
// Address Range: [[0056f170, 0056f19d]]
// Convention: unknown
// Signature: int FUN_0056f170(LPCSTR param_1,byte param_2)

#include "nocturne.h"

int FUN_0056f170(LPCSTR param_1,byte param_2)

{
  DWORD DVar1;
  int iVar2;
  
  DVar1 = GetFileAttributesA(param_1);
  if (DVar1 == 0xffffffff) {
    DVar1 = GetLastError();
    iVar2 = convertWindowsErrorToErrno(DVar1);
    return iVar2;
  }
  if (((param_2 & 2) != 0) && ((DVar1 & 1) != 0)) {
    iVar2 = convertWindowsErrorToErrno(5);
    return iVar2;
  }
  return 0;
}
