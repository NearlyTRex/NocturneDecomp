// Name: FUN_004737b0
// Address: 004737b0
// Address Range: [[004737b0, 00473c06]]
// Convention: unknown
// Signature: void FUN_004737b0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004737b0(int param_1,int param_2)

{
  byte *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  float afStackY_1020 [1013];
  ulonglong uVar6;
  uint uStack_38;
  float fStack_30;
  uint uStack_2c;
  int iStack_18;
  float fStack_14;
  
  bVar5 = 0;
  if (*(int *)(param_1 + 0x27b0) != 0) {
    return;
  }
  if (*(int *)(0x01CCF390 + 0x1ec) != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)(0x01CCF390 + 0x248) == 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  FUN_004ebe80();
  if ((0.0 < *(float *)(param_1 + 0xc1d0)) && (0xb < *(int *)(param_2 + 0x30))) {
    *(uint *)(param_2 + 4) = 0;
    return;
  }
  *(uint *)(param_1 + 0xc1d0) = _DAT_005feca8;
  iVar2 = FUN_0040c550(*(uint *)(param_2 + 0x38),"CBugs");
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0xc1d0) = 0x3e19999a;
  }
  if (*(int *)(0x01CCF390 + 0xd0) == 3) {
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_005da3c4;
  }
  *(float *)(param_1 + 0x2538) = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  iVar2 = FUN_0040c550(*(uint *)(param_2 + 0x38),"CShadowsc");
  if ((iVar2 != 0) && (iVar2 = FUN_004a6c30(0x01C51D80,"ScorpTailAttack"), iVar2 != 0)) {
    FUN_004a1b70(0x01C51D80,"HitByShadowScorp");
  }
  puVar1 = PTR_DAT_00611100;
  if (((*(int *)(0x01CCF390 + 0xdc) != 0) && (0xb < *(int *)(param_2 + 0x30))) &&
     (*(float *)(param_1 + 0x2538) <= 0.0)) {
    *(uint *)(param_1 + 0x2538) = 0;
    FUN_00445430(puVar1,"Using auto health\n");
    FUN_004fc3e0();
    FUN_00445430(PTR_DAT_00611100,"hit points: %3.2f\n",(double)*(float *)(param_1 + 0x2538));
  }
  iStack_18 = param_1 + 0x158;
  if (*(float *)(param_1 + 0x2538) <= 0.0) {
    *(uint *)(param_1 + 0x2538) = 0;
    (**(code **)(*(int *)(param_1 + 0x154) + 0xf0))();
    iVar2 = iStack_18;
    iVar3 = FUN_00524770();
    if ((*(int *)(iVar3 + 0x24) != 0x2e) && (iVar3 = FUN_00524770(), *(int *)(iVar3 + 0x24) != 0x2d)
       ) {
      if ((*(int *)(param_1 + 0x1ff84) == 0) && (*(int *)(param_1 + 0x20000) == 0)) {
        if (*(int *)(param_2 + 0x30) == 1) {
          uVar6 = 0x10000002c;
        }
        else {
          uVar4 = 1;
          fStack_14 = (float)FUN_0040cc00(0,0x42c80000,1);
          uVar6 = CONCAT44(uVar4,(fStack_14 <= _DAT_005da3cc) + 0x2a);
          iVar2 = param_1 + 0x158;
        }
      }
      else {
        uVar6 = 0x100000012;
        iVar2 = param_1 + 0x158;
        *(uint *)(param_1 + 0x1ff84) = 0;
        *(uint *)(param_1 + 0x20000) = 0;
      }
      FUN_005247c0(iVar2,uVar6);
      FUN_00573a80();
      if (*(int *)(param_2 + 0x30) != 1) {
        uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"doc_die??.wav");
        *(uint *)(param_1 + 0x200d4) = uVar4;
      }
      FUN_004e64d0(0x01CD0E3C,param_1,0x32,0x42480000,0);
    }
    if (*(int *)(param_1 + 0x20004) == *(int *)(param_1 + 0x25b0)) {
      *(uint *)(param_1 + 0x20004) = 0;
    }
    (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,0,0);
    if (*(int *)(param_1 + 0x2628) == *(int *)(param_1 + 0x20004)) {
      *(uint *)(param_1 + 0x20004) = 0;
    }
    (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,0);
    goto LAB_00473a66;
  }
  if (*(float *)(param_2 + 4) <= 0.0) goto LAB_00473a66;
  if (((*(int *)(param_2 + 0x30) != 0x69) && (*(int *)(param_1 + 0x1ff84) == 0)) &&
     ((*(int *)(param_1 + 0x20000) == 0 && (*(int *)(param_1 + 0x1ff5c) == 0)))) {
    iVar2 = FUN_0040c600(*(uint *)(param_2 + 0x34),_DAT_02c8ad44);
    if (iVar2 == 0) {
      if (*(int *)(param_2 + 0x30) == 0x6d) {
        FUN_00408bb0(param_1,*(int *)(param_2 + 0x38) + 0x20);
        uStack_38 = uStack_2c;
        *(uint *)(&stack0xffffffcc + (uint)bVar5 * -8) =
             *(uint *)(&stack0xffffffd8 + (uint)bVar5 * -8);
        *(uint *)((int)&stack0xffffffd0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             *(uint *)(&stack0xffffffdc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        if (fStack_30 <= 0.0) {
          uVar6 = 0x100000083;
        }
        else {
          uVar6 = 0x100000082;
        }
      }
      else {
        uVar6 = 0x100000029;
      }
    }
    else {
      iVar2 = FUN_0040cd00();
      if (iVar2 == 0) goto LAB_00473b7a;
      uVar6 = 0x100000029;
    }
    FUN_005247c0(iStack_18,uVar6);
  }
LAB_00473b7a:
  iVar2 = FUN_005735a0();
  if (iVar2 == 0) {
    uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"generic_doc_hit1?.wav")
    ;
    *(uint *)(param_1 + 0x200d4) = uVar4;
  }
LAB_00473a66:
  if (0.0 < *(float *)(param_2 + 4)) {
    FUN_004d6320();
  }
  FUN_004319e0(param_1,param_2);
  return;
}
