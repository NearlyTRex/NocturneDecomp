// Name: crt_unknown.c_FUN_005a55b0
// Address: 005a55b0
// Address Range: [[005a55b0, 005a55c6]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005a55b0(LPCSTR param_1)

#include "nocturne.h"

uint FUN_005a55b0(LPCSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  
  BVar1 = SetCurrentDirectoryA(param_1);
  if (BVar1 != 0) {
    return 0;
  }
  DVar2 = GetLastError();
  uVar3 = FUN_005ab400(DVar2);
  return uVar3;
}
