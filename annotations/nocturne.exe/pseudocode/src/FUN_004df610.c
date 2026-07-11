// Name: FUN_004df610
// Address: 004df610
// Address Range: [[004df610, 004df658]]
// Convention: unknown
// Signature: void FUN_004df610(undefined4 param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_004df610(uint param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = FUN_00453080(param_2,param_3,*(uint *)(param_2 + 0x110),
                       *(uint *)(param_2 + 0x114),0x48,param_2 + 0x124,
                       *(uint *)(param_2 + 0x118));
  FUN_004df2f0(param_1,*(uint *)(param_2 + 0x104),uVar1);
  return;
}
