// Name: FUN_0058ccc0
// Address: 0058ccc0
// Address Range: [[0058ccc0, 0058cd15]]
// Convention: unknown
// Signature: int FUN_0058ccc0(undefined4 param_1)

#include "nocturne.h"

int FUN_0058ccc0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_005888d0(param_1);
  *(byte ***)(iVar1 + 0x154) = &PTR_FUN_005e68e4;
  FUN_0054eae0(iVar1 + 0x158,0x5d8984);
  *(uint *)(iVar1 + 0xd140) = 1;
  *(uint *)(iVar1 + 0x2538) = 0x41a00000;
  *(uint *)(iVar1 + 0xce5c) = 0x41200000;
  *(uint *)(iVar1 + 0xce60) = 0x41200000;
  return iVar1;
}
