// Name: FUN_005c5348
// Address: 005c5348
// Address Range: [[005c5348, 005c539e]]
// Convention: unknown
// Signature: void FUN_005c5348(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005c5348(uint param_1,uint param_2)

{
  HMODULE pHVar1;
  uint uVar2;
  
  pHVar1 = GetModuleHandleA((LPCSTR)0x0);
  FUN_005c50fc(0,param_2,pHVar1);
  uVar2 = (*(code *)PTR_FUN_006265fc)(&DAT_006265bc);
  FUN_005cb0a0(uVar2);
  FUN_005cb5a8(param_1);
  FUN_005cb630();
  (*(code *)PTR_FUN_0062663c)();
  FUN_005cb630();
  return;
}
