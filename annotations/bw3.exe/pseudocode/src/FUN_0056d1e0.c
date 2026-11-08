// Name: FUN_0056d1e0
// Address: 0056d1e0
// Address Range: [[0056d1e0, 0056d223]]
// Convention: unknown
// Signature: int FUN_0056d1e0(undefined4 param_1)

#include "nocturne.h"

int FUN_0056d1e0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00408600(param_1);
  iVar1 = FUN_00462500(iVar1 + 0x158);
  *(uint *)(iVar1 + -4) = 0x5e57b4;
  FUN_004625f0(iVar1,"question.kfm");
  return iVar1 + -0x158;
}
