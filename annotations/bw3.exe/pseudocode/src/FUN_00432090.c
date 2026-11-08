// Name: FUN_00432090
// Address: 00432090
// Address Range: [[00432090, 004320cf]]
// Convention: unknown
// Signature: bool FUN_00432090(int param_1,undefined4 param_2)

#include "nocturne.h"

bool FUN_00432090(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0x2758) = 0;
  uVar1 = FUN_004fc310(param_1 + 0x158,param_2,0);
  iVar2 = FUN_004fb9c0(uVar1);
  *(int *)(param_1 + 0x2754) = iVar2;
  return -1 < iVar2;
}
