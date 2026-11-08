// Name: FUN_0040f4a0
// Address: 0040f4a0
// Address Range: [[0040f4a0, 0040f4f7]]
// Convention: unknown
// Signature: int FUN_0040f4a0(undefined4 param_1)

#include "nocturne.h"

int FUN_0040f4a0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408600(param_1);
  iVar1 = FUN_00462500(iVar1 + 0x158);
  *(uint *)(iVar1 + -4) = 0x5db8b4;
  FUN_004625f0(iVar1,"question.kfm");
  *(uint *)(iVar1 + 0x180) = 0x41f00000;
  *(uint *)(iVar1 + 0x184) = 0x41f00000;
  return iVar1 + -0x158;
}
