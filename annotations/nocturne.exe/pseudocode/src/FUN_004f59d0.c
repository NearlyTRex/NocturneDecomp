// Name: FUN_004f59d0
// Address: 004f59d0
// Address Range: [[004f59d0, 004f5a1f]]
// Convention: unknown
// Signature: void FUN_004f59d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

void FUN_004f59d0(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  
  FUN_004f5320(param_1);
  uVar1 = FUN_004f5110(param_1,param_2,param_3,param_4,param_5,0xffffffff);
  *(uint *)(param_1 + 4) = uVar1;
  FUN_004f5c40(param_1,param_2);
  FUN_004f52c0(param_1);
  *(uint *)(param_1 + 0x24) = param_4;
  return;
}
