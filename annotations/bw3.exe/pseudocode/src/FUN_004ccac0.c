// Name: FUN_004ccac0
// Address: 004ccac0
// Address Range: [[004ccac0, 004ccaef]]
// Convention: unknown
// Signature: void FUN_004ccac0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_004ccac0(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0x40) = param_4;
  uVar1 = FUN_0040cea0(0,0xf);
  *(uint *)(param_1 + 0x44) = uVar1;
  FUN_00509e40(param_1,param_2,param_3);
  return;
}
