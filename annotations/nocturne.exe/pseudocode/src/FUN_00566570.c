// Name: FUN_00566570
// Address: 00566570
// Address Range: [[00566570, 00566586]]
// Convention: unknown
// Signature: undefined4 FUN_00566570(LPCSTR param_1)

#include "nocturne.h"

uint FUN_00566570(LPCSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  
  BVar1 = SetCurrentDirectoryA(param_1);
  if (BVar1 != 0) {
    return 0;
  }
  DVar2 = GetLastError();
  uVar3 = FUN_0056c6d0(DVar2);
  return uVar3;
}
