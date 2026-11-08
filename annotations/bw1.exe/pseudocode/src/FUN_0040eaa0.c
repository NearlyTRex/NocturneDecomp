// Name: FUN_0040eaa0
// Address: 0040eaa0
// Address Range: [[0040eaa0, 0040ebdf]]
// Convention: unknown
// Signature: void FUN_0040eaa0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_0040eaa0(int param_1,float param_2)

{
  int iVar1;
  float afStack_20 [4];
  
  iVar1 = FUN_0042e1a0(param_1,param_2);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
    afStack_20[0] = param_2 * *(float *)(param_1 + 0xc1d0);
    while (0.0 < afStack_20[0]) {
      FUN_00524270(param_1 + 0x158,afStack_20);
    }
    *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
    FUN_00435320(param_1,param_2 * *(float *)(param_1 + 0xc1d0));
    FUN_00524770(param_1 + 0x158);
    iVar1 = FUN_00432240(param_1,param_2);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x24a4) = 0;
      *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
      *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
    }
    FUN_005675a0(param_1 + 0x158);
    FUN_00433e80(param_1,param_2);
    iVar1 = FUN_004a6c30(0x01C51D80,param_1 + 0xc268);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"armour.wav");
      afStack_20[1] = 0.0;
      afStack_20[2] = 0.0;
      afStack_20[3] = 5.0;
      FUN_00430d90(param_1,afStack_20 + 1,0xbf800000,1);
      return;
    }
  }
  return;
}
