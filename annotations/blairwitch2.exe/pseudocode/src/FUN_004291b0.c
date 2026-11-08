// Name: FUN_004291b0
// Address: 004291b0
// Address Range: [[004291b0, 004291ef]]
// Convention: unknown
// Signature: bool FUN_004291b0(int param_1,undefined4 param_2)

#include "nocturne.h"

bool FUN_004291b0(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0x27c8) = 0;
  uVar1 = FUN_00503860(param_1 + 0x2b4,param_2,0);
  iVar2 = FUN_00502f10(uVar1);
  *(int *)(param_1 + 0x27c4) = iVar2;
  return -1 < iVar2;
}
