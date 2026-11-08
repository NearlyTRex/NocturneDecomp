// Name: FUN_005459b0
// Address: 005459b0
// Address Range: [[005459b0, 00545bbe]]
// Convention: unknown
// Signature: void FUN_005459b0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005459b0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  float afStackY_102c [1015];
  uint uVar4;
  uint uStack_44;
  uint uStack_38;
  float fStack_30;
  int iStack_18;
  float fStack_14;
  
  bVar3 = 0;
  if (*(int *)(param_2 + 0x30) == 0x6c) {
    FUN_00545000(param_1);
    fStack_14 = (float)FUN_0040ce40(0x41700000,0x41f00000);
    *(float *)(param_2 + 4) = fStack_14 * (float)_DAT_005d13be * *(float *)(param_2 + 4);
    FUN_00408b80(param_1,param_2 + 0x1c);
  }
  iStack_18 = param_1 + 0x158;
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2538) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2538) = 0;
    iVar2 = FUN_004fc070(iStack_18);
    iVar2 = *(int *)(iVar2 + 0x24);
    if ((((iVar2 != 0xf) && (iVar2 != 0xd)) && (iVar2 != 0x10)) && (iVar2 != 0xe)) {
      FUN_00408bf0(param_1,*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20);
      uStack_38 = uStack_44;
      *(uint *)(&stack0xffffffcc + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffc0 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffd0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if (0.0 < fStack_30) {
        uVar4 = 0xd;
      }
      else {
        uVar4 = 0xe;
      }
      FUN_004fc0d0(iStack_18,uVar4,1);
      FUN_00545100(param_1);
      FUN_0048c150(0x01C6E360,"ShadowDead");
      FUN_00489b80(param_1,param_2);
      return;
    }
  }
  else {
    if ((*(int *)(param_1 + 0xd054) != 2) &&
       (iVar2 = FUN_0048a1b0(param_1,*(uint *)(param_2 + 4)), iVar2 != 0)) {
      iVar2 = FUN_004fc070(iStack_18);
      iVar2 = *(int *)(iVar2 + 0x24);
      if ((((iVar2 == 0) || ((iVar2 == 5 || (iVar2 == 0xc)))) || (iVar2 == 6)) || (iVar2 == 7)) {
        iVar2 = FUN_0040cea0(0,2);
        if (iVar2 == 0) {
          FUN_004fc0d0(param_1 + 0x158,0x11,1);
        }
        if (iVar2 == 1) {
          FUN_004fc0d0(param_1 + 0x158,0x12,1);
        }
        if (iVar2 == 2) {
          FUN_004fc0d0(param_1 + 0x158,0x13,1);
        }
      }
    }
    FUN_005450c0(param_1);
  }
  FUN_00489b80(param_1,param_2);
  return;
}
