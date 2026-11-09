// Name: crt_unknown.c_FUN_005c26c0
// Address: 005c26c0
// Address Range: [[005c26c0, 005c26d6]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c26c0(LPCSTR param_1)

#include "nocturne.h"

uint FUN_005c26c0(LPCSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  
  BVar1 = SetCurrentDirectoryA(param_1);
  if (BVar1 != 0) {
    return 0;
  }
  DVar2 = GetLastError();
  uVar3 = FUN_005c85c0(DVar2);
  return uVar3;
}
