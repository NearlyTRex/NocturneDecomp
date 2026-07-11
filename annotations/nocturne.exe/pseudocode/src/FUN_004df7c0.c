// Name: FUN_004df7c0
// Address: 004df7c0
// Address Range: [[004df7c0, 004df7f2]]
// Convention: unknown
// Signature: void FUN_004df7c0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_004df7c0(uint param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = FUN_00453080(param_3,param_4,0,*(uint *)(param_3 + 0x104));
  FUN_004df660(param_1,param_2,uVar1);
  return;
}
