// Name: FUN_005c44f0
// Address: 005c44f0
// Address Range: [[005c44f0, 005c4540]]
// Convention: unknown
// Signature: void FUN_005c44f0(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_005c44f0(uint param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 < 0x1001) {
    if (-0x1001 < param_2) goto LAB_005c4530;
    uVar1 = 0xfffff000;
    param_2 = param_2 + 0x1000;
  }
  else {
    uVar1 = 0x1000;
    param_2 = param_2 + -0x1000;
  }
  FUN_005c445c(param_1,uVar1);
LAB_005c4530:
  FUN_005c445c(param_1,param_2);
  return;
}
