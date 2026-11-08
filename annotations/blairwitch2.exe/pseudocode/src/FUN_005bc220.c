// Name: FUN_005bc220
// Address: 005bc220
// Address Range: [[005bc220, 005bc270]]
// Convention: unknown
// Signature: void FUN_005bc220(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_005bc220(uint param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 < 0x1001) {
    if (-0x1001 < param_2) goto LAB_005bc260;
    uVar1 = 0xfffff000;
    param_2 = param_2 + 0x1000;
  }
  else {
    uVar1 = 0x1000;
    param_2 = param_2 + -0x1000;
  }
  FUN_005bc18c(param_1,uVar1);
LAB_005bc260:
  FUN_005bc18c(param_1,param_2);
  return;
}
