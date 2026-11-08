// Name: FUN_005a7360
// Address: 005a7360
// Address Range: [[005a7360, 005a73b0]]
// Convention: unknown
// Signature: void FUN_005a7360(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_005a7360(uint param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 < 0x1001) {
    if (-0x1001 < param_2) goto LAB_005a73a0;
    uVar1 = 0xfffff000;
    param_2 = param_2 + 0x1000;
  }
  else {
    uVar1 = 0x1000;
    param_2 = param_2 + -0x1000;
  }
  FUN_005a72cc(param_1,uVar1);
LAB_005a73a0:
  FUN_005a72cc(param_1,param_2);
  return;
}
