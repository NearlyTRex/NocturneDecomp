// Name: FUN_00414770
// Address: 00414770
// Address Range: [[00414770, 004147f5]]
// Convention: unknown
// Signature: void FUN_00414770(int param_1,float param_2)

#include "nocturne.h"

void FUN_00414770(int param_1,float param_2)

{
  int iVar1;
  float fStack_10;
  
  iVar1 = FUN_0042e1a0(param_1,param_2);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
    fStack_10 = param_2 * *(float *)(param_1 + 0xc1d0);
    while (0.0 < fStack_10) {
      FUN_00524270(param_1 + 0x158,&fStack_10);
    }
    FUN_0042e160(param_1);
    FUN_005675a0(param_1 + 0x158);
    FUN_00433e80(param_1,param_2);
  }
  return;
}
