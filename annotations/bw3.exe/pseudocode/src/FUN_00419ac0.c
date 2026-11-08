// Name: FUN_00419ac0
// Address: 00419ac0
// Address Range: [[00419ac0, 00419b21]]
// Convention: unknown
// Signature: int FUN_00419ac0(undefined4 param_1)

#include "nocturne.h"

int FUN_00419ac0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00417400(param_1);
  *(byte ***)(iVar1 + 0x154) = &PTR_FUN_005dc6d4;
  FUN_0054eae0(iVar1 + 0x158,0x5b71a6);
  *(uint *)(iVar1 + 0x2538) = 0x41200000;
  *(uint *)(iVar1 + 0xce5c) = 0x40a00000;
  *(uint *)(iVar1 + 0xce60) = 0x40a00000;
  *(uint *)(iVar1 + 0xd074) = 4;
  *(uint *)(iVar1 + 0xd058) = *(uint *)(iVar1 + 0x2538);
  return iVar1;
}
