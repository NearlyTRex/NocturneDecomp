// Name: FUN_004198e0
// Address: 004198e0
// Address Range: [[004198e0, 00419941]]
// Convention: unknown
// Signature: int FUN_004198e0(undefined4 param_1)

#include "nocturne.h"

int FUN_004198e0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00417400(param_1);
  *(byte ***)(iVar1 + 0x154) = &PTR_FUN_005dc2b4;
  FUN_0054eae0(iVar1 + 0x158,0x5b7182);
  *(uint *)(iVar1 + 0x2538) = 0x41c80000;
  *(uint *)(iVar1 + 0xce5c) = 0x41000000;
  *(uint *)(iVar1 + 0xce60) = 0x40a00000;
  *(uint *)(iVar1 + 0xd074) = 1;
  *(uint *)(iVar1 + 0xd058) = *(uint *)(iVar1 + 0x2538);
  return iVar1;
}
