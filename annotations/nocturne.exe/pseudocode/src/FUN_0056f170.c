// Name: FUN_0056f170
// Address: 0056f170
// Address Range: [[0056f170, 0056f19d]]
// Convention: unknown
// Signature: undefined4 FUN_0056f170(LPCSTR param_1,byte param_2)

#include "nocturne.h"

uint FUN_0056f170(LPCSTR param_1,byte param_2)

{
  DWORD DVar1;
  uint uVar2;
  
  DVar1 = GetFileAttributesA(param_1);
  if (DVar1 == 0xffffffff) {
    DVar1 = GetLastError();
    uVar2 = FUN_0056c6d0(DVar1);
    return uVar2;
  }
  if (((param_2 & 2) != 0) && ((DVar1 & 1) != 0)) {
    uVar2 = FUN_0056c6d0(5);
    return uVar2;
  }
  return 0;
}
