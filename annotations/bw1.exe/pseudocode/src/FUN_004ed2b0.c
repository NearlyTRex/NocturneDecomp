// Name: FUN_004ed2b0
// Address: 004ed2b0
// Address Range: [[004ed2b0, 004ed3ed]]
// Convention: unknown
// Signature: void FUN_004ed2b0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ed2b0(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float afStack_18 [2];
  
  iVar1 = FUN_0042e1a0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_00524770(param_1 + 0x158);
  if (*(int *)(iVar1 + 0x24) != 1) {
    iVar1 = FUN_004a6c30(0x01C51D80,param_1 + 0x1fab8);
    if (iVar1 != 0) {
      FUN_005247c0(param_1 + 0x158,1,1);
      uVar3 = FUN_0051b6c0(0x01D2C900,"GlassHiram",_DAT_01cd0dfc);
      iVar1 = FUN_0040c600(uVar3);
      if (iVar1 != 0) {
        FUN_004e34b0(iVar1,iVar1 + 0x20);
      }
    }
  }
  afStack_18[0] = param_2;
  *(uint *)(param_1 + 0x24a4) = 0;
  iVar1 = param_1 + 0x158;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  while (0.0 < afStack_18[0]) {
    iVar2 = FUN_00524270(iVar1,afStack_18);
    if (iVar2 == 0x29a) {
      FUN_0051b740(0x01D2C900,param_1,1);
    }
    else {
      FUN_00434a80(param_1,iVar2);
    }
  }
  FUN_005675a0(iVar1);
  FUN_004088b0(param_1);
  FUN_005675a0(iVar1);
  FUN_00433e80(param_1,param_2);
  return;
}
