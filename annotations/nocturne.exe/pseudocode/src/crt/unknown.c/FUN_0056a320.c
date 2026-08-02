// Name: crt_unknown.c_FUN_0056a320
// Address: 0056a320
// Address Range: [[0056a320, 0056a370]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0056a320(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_0056a320(uint param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 < 0x1001) {
    if (-0x1001 < param_2) goto LAB_0056a360;
    uVar1 = 0xfffff000;
    param_2 = param_2 + 0x1000;
  }
  else {
    uVar1 = 0x1000;
    param_2 = param_2 + -0x1000;
  }
  FUN_0056a28c(param_1,uVar1);
LAB_0056a360:
  FUN_0056a28c(param_1,param_2);
  return;
}
