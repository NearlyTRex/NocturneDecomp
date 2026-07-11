// Name: FUN_004ae070
// Address: 004ae070
// Address Range: [[004ae070, 004ae09f]]
// Convention: unknown
// Signature: void FUN_004ae070(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_004ae070(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0x38) = param_4;
  uVar1 = FUN_0040de00(0,0xf);
  *(uint *)(param_1 + 0x3c) = uVar1;
  FUN_004ef040(param_1,param_2,param_3);
  return;
}
