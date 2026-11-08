// Name: FUN_0040cb60
// Address: 0040cb60
// Address Range: [[0040cb60, 0040ce3b]]
// Convention: unknown
// Signature: undefined4 FUN_0040cb60(int param_1,float *param_2,int param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0040cb60(int param_1,float *param_2,int param_3,float param_4)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  ulonglong uVar6;
  byte auStack_d0 [100];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float afStack_48 [11];
  uint uStack_1c;
  float fStack_18;
  float fStack_14;
  
  fStack_54 = _DAT_01fc783c;
  fStack_50 = _DAT_01fc7840;
  fStack_4c = _DAT_01fc7844;
  fStack_60 = _DAT_01fc783c;
  fStack_5c = _DAT_01fc7840;
  fStack_58 = _DAT_01fc7844;
  if (_DAT_005caf0e <
      (param_2[2] - _DAT_01fc7844) * (param_2[2] - _DAT_01fc7844) +
      (param_2[1] - _DAT_01fc7840) * (param_2[1] - _DAT_01fc7840) +
      (*param_2 - _DAT_01fc783c) * (*param_2 - _DAT_01fc783c)) {
    return 0;
  }
  iVar1 = FUN_00538180(0x01E661B8,param_2);
  if (iVar1 != 0) {
    param_3 = 6;
    iVar1 = FUN_0040c840(param_1,"CHero");
    if (iVar1 != 0) {
      FUN_004894f0(0x01C38BC0,"FeetAreWet");
    }
  }
  iVar1 = FUN_004c9d80(0x01CB8284,param_2,param_1 + 0x118);
  if ((iVar1 == 0) || (*(int *)(param_1 + 0x2ac) == 0)) {
    if (*(int *)(param_1 + 0x114) < 1) {
      if (param_3 == 3) {
        FUN_004c9d00(0x01CB8284,param_2,param_1 + 0x30,3,0x4000,0);
      }
      goto LAB_0040cc81;
    }
  }
  else {
    *(uint *)(param_1 + 0x114) = 0xffff;
  }
  FUN_004c9d00(0x01CB8284,param_2,param_1 + 0x30,0xb,*(uint *)(param_1 + 0x114),
               *(uint *)(param_1 + 0x118));
  iVar1 = *(int *)(param_1 + 0x114) + -0x2000;
  *(int *)(param_1 + 0x114) = iVar1;
  if (iVar1 < 0) {
    *(uint *)(param_1 + 0x114) = 0;
  }
LAB_0040cc81:
  if (param_3 == 0xe) {
    iVar1 = FUN_0040c840(param_1,"CShadow");
    if (iVar1 == 0) {
      uVar6 = 0x300000001;
    }
    else {
      uVar6 = 0x900000003;
    }
    uVar2 = FUN_0040cfc0(uVar6);
    *(uint *)(param_1 + 0x11c) = uVar2;
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x11c)) {
      do {
        fStack_18 = (float)FUN_0040cf60(0x3f490fdb,0x3fc90fdb);
        fStack_14 = fStack_18;
        fStack_14 = (float)FUN_0040cf60(0);
        fVar3 = (float10)fcos((float10)fStack_18);
        fVar4 = (float10)fcos((float10)fStack_14);
        fVar5 = (float10)fsin((float10)fStack_14);
        afStack_48[1] = 0.0;
        uStack_1c = 0x41700000;
        afStack_48[0] = (float)(fVar4 * fVar3);
        afStack_48[2] = (float)(fVar5 * fVar3);
        if (&fStack_6c != param_2) {
          fStack_6c = *param_2;
          fStack_68 = param_2[1];
          fStack_64 = param_2[2];
        }
        iVar1 = iVar1 + 1;
        FUN_0049d600(0x01C3DEB4,param_2,afStack_48);
      } while (iVar1 < *(int *)(param_1 + 0x11c));
    }
  }
  uVar2 = FUN_004ca7c0(param_3,(double)param_4);
  FUN_005b7790(auStack_d0,"footstep%s0?",uVar2);
  uVar2 = FUN_0055ae50(0x0264B290,param_1,auStack_d0,param_2);
  return uVar2;
}
