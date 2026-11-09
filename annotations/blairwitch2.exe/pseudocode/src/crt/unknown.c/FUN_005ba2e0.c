// Name: crt_unknown.c_FUN_005ba2e0
// Address: 005ba2e0
// Address Range: [[005ba2e0, 005ba2f6]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005ba2e0(LPCSTR param_1)

#include "nocturne.h"

uint FUN_005ba2e0(LPCSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  
  BVar1 = SetCurrentDirectoryA(param_1);
  if (BVar1 != 0) {
    return 0;
  }
  DVar2 = GetLastError();
  uVar3 = FUN_005c0300(DVar2);
  return uVar3;
}
