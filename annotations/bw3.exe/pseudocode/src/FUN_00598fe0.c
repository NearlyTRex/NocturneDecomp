// Name: FUN_00598fe0
// Address: 00598fe0
// Address Range: [[00598fe0, 0059902b]]
// Convention: unknown
// Signature: int FUN_00598fe0(undefined4 param_1)

#include "nocturne.h"

int FUN_00598fe0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00598780(param_1);
  *(byte ***)(iVar1 + 0x154) = &PTR_FUN_005e7b54;
  FUN_0054eae0(iVar1 + 0x158,0x5d98bf);
  *(uint *)(iVar1 + 0x2538) = 0x41f00000;
  *(uint *)(iVar1 + 0xce5c) = 0x41200000;
  *(uint *)(iVar1 + 0xce60) = 0x41200000;
  return iVar1;
}
