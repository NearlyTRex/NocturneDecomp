// Name: FUN_004637b0
// Address: 004637b0
// Address Range: [[004637b0, 0046380f]]
// Convention: unknown
// Signature: int FUN_004637b0(undefined4 param_1)

#include "nocturne.h"

int FUN_004637b0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00462710(param_1);
  *(byte ***)(iVar1 + 0x154) = &PTR_FUN_005de9c4;
  FUN_0054eae0(iVar1 + 0x158,"ethereal_dog.dfm");
  *(uint *)(iVar1 + 0x2538) = 0x41f00000;
  *(uint *)(iVar1 + 0xce5c) = 0x41200000;
  *(uint *)(iVar1 + 0xce60) = 0x41200000;
  *(uint *)(iVar1 + 0xcdc4) = 1;
  *(uint *)(iVar1 + 0xd060) = 3;
  return iVar1;
}
