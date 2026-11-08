// Name: FUN_004d6410
// Address: 004d6410
// Address Range: [[004d6410, 004d645b]]
// Convention: unknown
// Signature: int FUN_004d6410(undefined4 param_1)

#include "nocturne.h"

int FUN_004d6410(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_004d5430(param_1);
  *(byte ***)(iVar1 + 0x154) = &PTR_FUN_005e1d04;
  FUN_0054eae0(iVar1 + 0x158,"hotdemon.dfm");
  *(uint *)(iVar1 + 0x2538) = 0x42700000;
  *(uint *)(iVar1 + 0xce5c) = 0x41c80000;
  *(uint *)(iVar1 + 0xce60) = 0x41a00000;
  return iVar1;
}
