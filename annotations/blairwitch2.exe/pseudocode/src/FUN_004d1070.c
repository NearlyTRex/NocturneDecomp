// Name: FUN_004d1070
// Address: 004d1070
// Address Range: [[004d1070, 004d11ad]]
// Convention: unknown
// Signature: void FUN_004d1070(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d1070(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float afStack_18 [2];
  
  iVar1 = FUN_004244b0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_005035c0(param_1 + 0x2b4);
  if (*(int *)(iVar1 + 0x24) != 1) {
    iVar1 = FUN_0048e340(0x01C38BC0,param_1 + 0x24348);
    if (iVar1 != 0) {
      FUN_00503620(param_1 + 0x2b4,1,1);
      uVar3 = FUN_004fc740(0x01D182F0,"GlassHiram",_DAT_01cb8280);
      iVar1 = FUN_0040c8f0(uVar3);
      if (iVar1 != 0) {
        FUN_004c6d40(iVar1,iVar1 + 0x20);
      }
    }
  }
  afStack_18[0] = param_2;
  *(uint *)(param_1 + 0x2510) = 0;
  iVar1 = param_1 + 0x2b4;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  while (0.0 < afStack_18[0]) {
    iVar2 = FUN_005030c0(iVar1,afStack_18);
    if (iVar2 == 0x29a) {
      FUN_004fc7b0(0x01D182F0,param_1,1);
    }
    else {
      FUN_0042aa00(param_1,iVar2);
    }
  }
  FUN_00544f00(iVar1);
  FUN_00408ae0(param_1);
  FUN_00544f00(iVar1);
  FUN_00429e90(param_1,param_2);
  return;
}
