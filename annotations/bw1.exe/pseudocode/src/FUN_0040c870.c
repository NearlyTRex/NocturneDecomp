// Name: FUN_0040c870
// Address: 0040c870
// Address Range: [[0040c870, 0040cb71]]
// Convention: unknown
// Signature: undefined4 FUN_0040c870(int param_1,float *param_2,int param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0040c870(int param_1,float *param_2,int param_3,float param_4)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  byte auStack_d0 [100];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float afStack_60 [3];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_30;
  uint uStack_18;
  float fStack_14;
  
  fStack_48 = _DAT_01fe37f0;
  fStack_44 = _DAT_01fe37f4;
  fStack_40 = _DAT_01fe37f8;
  fStack_54 = _DAT_01fe37f0;
  fStack_50 = _DAT_01fe37f4;
  fStack_4c = _DAT_01fe37f8;
  if (_DAT_005d2e89 <
      (param_2[2] - _DAT_01fe37f8) * (param_2[2] - _DAT_01fe37f8) +
      (param_2[1] - _DAT_01fe37f4) * (param_2[1] - _DAT_01fe37f4) +
      (*param_2 - _DAT_01fe37f0) * (*param_2 - _DAT_01fe37f0)) {
    return 0;
  }
  iVar1 = FUN_005595a0(0x01E82168,param_2);
  if (iVar1 != 0) {
    param_3 = 6;
    iVar1 = FUN_0040c550(param_1,"CHero");
    if (iVar1 != 0) {
      FUN_004a1b70(0x01C51D80,"FeetAreWet");
    }
  }
  iVar1 = FUN_004e6590(0x01CD0E3C,param_2,param_1 + 0x118);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x114) < 1) {
      if (param_3 == 3) {
        FUN_004e6510(0x01CD0E3C,param_2,param_1 + 0x30,3,0x4000,0);
      }
      goto LAB_0040c98f;
    }
  }
  else {
    *(uint *)(param_1 + 0x114) = 0xffff;
  }
  FUN_004e6510(0x01CD0E3C,param_2,param_1 + 0x30,0xb,*(uint *)(param_1 + 0x114),
               *(uint *)(param_1 + 0x118));
  iVar1 = *(int *)(param_1 + 0x114) + -0x2000;
  *(int *)(param_1 + 0x114) = iVar1;
  if (iVar1 < 0) {
    *(uint *)(param_1 + 0x114) = 0;
  }
LAB_0040c98f:
  if (param_3 == 0xe) {
    iVar1 = FUN_0040cd00();
    if (iVar1 != 0) {
      FUN_0057d8a0(0x02C82A60,param_1,"twig?.wav",param_2);
    }
    iVar1 = FUN_0040c550(param_1,"CShadow");
    if (iVar1 == 0) {
      uVar2 = FUN_0040cc60(1,3);
      *(uint *)(param_1 + 0x11c) = uVar2;
    }
    else {
      *(uint *)(param_1 + 0x11c) = 1;
    }
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x11c)) {
      do {
        fStack_30 = (float)FUN_0040cc00(0x3f490fdb,0x3fc90fdb);
        fStack_14 = fStack_30;
        fStack_14 = (float)FUN_0040cc00(0);
        fVar3 = (float10)fcos((float10)fStack_30);
        fVar4 = (float10)fcos((float10)fStack_14);
        fVar5 = (float10)fsin((float10)fStack_14);
        afStack_60[1] = 0.0;
        uStack_18 = 0x41700000;
        afStack_60[0] = (float)(fVar4 * fVar3);
        afStack_60[2] = (float)(fVar5 * fVar3);
        if (&fStack_6c != param_2) {
          fStack_6c = *param_2;
          fStack_68 = param_2[1];
          fStack_64 = param_2[2];
        }
        iVar1 = iVar1 + 1;
        FUN_004b5f00(0x01C57074,param_2,afStack_60);
      } while (iVar1 < *(int *)(param_1 + 0x11c));
    }
  }
  uVar2 = FUN_004e7010(param_3,(double)param_4);
  FUN_005bfb40(auStack_d0,"footstep-%s-!-%s-?.wav @ %f",param_1 + 0x120,uVar2);
  uVar2 = FUN_0057d8a0(0x02C82A60,param_1,auStack_d0,param_2);
  return uVar2;
}
