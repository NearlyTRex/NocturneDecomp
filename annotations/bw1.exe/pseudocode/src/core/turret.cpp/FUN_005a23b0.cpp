// Name: FUN_005a23b0
// Address: 005a23b0
// Address Range: [[005a23b0, 005a23e1] [005a245a, 005a2505] [005a27f4, 005a28b0]]
// Convention: unknown
// Signature: void FUN_005a23b0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a23b0(int param_1,float param_2)

{
  float fVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  float afStackY_187c [1497];
  char *pcVar6;
  float fStack_108;
  byte auStack_104 [100];
  uint uStack_a0;
  uint auStack_9c [7];
  uint auStack_80 [4];
  uint auStack_70 [4];
  uint uStack_60;
  uint uStack_50;
  uint uStack_40;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  double dStack_28;
  uint *puStack_20;
  uint *puStack_1c;
  float fStack_18;
  
  bVar5 = 0;
  *(uint *)(param_1 + 0x2f4) = 0xffffffff;
  switch(*(uint *)(param_1 + 0x700)) {
  case 0:
    if ((uint *)(param_1 + 0x30) != (uint *)(param_1 + 0x578)) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x578);
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x57c);
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x580);
    }
    iVar3 = FUN_004a6c30(0x01C51D80,param_1 + 0x704);
    if (iVar3 == 0) {
      *(uint *)(param_1 + 0x77c) = 0;
      break;
    }
    *(uint *)(param_1 + 0x700) = 1;
    *(uint *)(param_1 + 0x77c) = *(uint *)(param_1 + 0x768);
    FUN_00573a80();
    pcVar6 = "?turret-ani?.wav" + 1;
    goto LAB_005a2447;
  case 1:
    fVar1 = *(float *)(param_1 + 0x77c) - param_2;
    *(float *)(param_1 + 0x77c) = fVar1;
    if (fVar1 <= 0.0) {
      *(uint *)(param_1 + 0x77c) = 0;
      *(uint *)(param_1 + 0x700) = 2;
      *(uint *)(param_1 + 0x300) = 0;
    }
    break;
  case 2:
    *(uint *)(param_1 + 0x2f4) = 0xff;
    uVar4 = 0x01C51D80;
    *(uint *)(param_1 + 0x2f8) = 0;
    *(uint *)(param_1 + 0x2fc) = 0;
    iVar3 = FUN_004a6c30(uVar4,param_1 + 0x704);
    if (iVar3 == 0) {
      *(uint *)(param_1 + 0x700) = 3;
      *(uint *)(param_1 + 0x77c) = *(uint *)(param_1 + 0x76c);
    }
    else {
      FUN_005a2d00(param_1,param_2);
      *(uint *)(param_1 + 0x77c) = 0;
    }
    break;
  case 3:
    *(uint *)(param_1 + 0x2f4) = 0;
    uVar4 = 0x01C51D80;
    *(uint *)(param_1 + 0x2f8) = 0xff;
    *(uint *)(param_1 + 0x2fc) = 0;
    iVar3 = FUN_004a6c30(uVar4,param_1 + 0x704);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x77c) = 0;
      *(uint *)(param_1 + 0x700) = 2;
      *(uint *)(param_1 + 0x300) = 0;
      break;
    }
    fVar1 = *(float *)(param_1 + 0x77c) - param_2;
    *(float *)(param_1 + 0x77c) = fVar1;
    if (0.0 < fVar1) {
      FUN_005a3650(param_1,param_2);
      break;
    }
    *(uint *)(param_1 + 0x700) = 4;
    *(uint *)(param_1 + 0x77c) = *(uint *)(param_1 + 0x770);
    FUN_00573a80();
    pcVar6 = "turret-ani?.wav";
LAB_005a2447:
    uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,pcVar6);
    *(uint *)(param_1 + 0x8b8) = uVar4;
    break;
  case 4:
    puStack_20 = (uint *)(param_1 + 0x578);
    *(float *)(param_1 + 0x77c) = *(float *)(param_1 + 0x77c) - param_2;
    puStack_1c = (uint *)(param_1 + 0x30);
    if (0.0 < *(float *)(param_1 + 0x77c)) {
      FUN_005b7ed0();
      auStack_80[0] = uStack_a0;
      auStack_9c[(uint)bVar5 * -2 + 8] = auStack_9c[(uint)bVar5 * -2];
      auStack_9c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9] =
           auStack_9c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      (auStack_9c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1] =
           (auStack_9c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
      FUN_005b7ed0();
      auStack_70[0] = auStack_9c[3];
      auStack_9c[(uint)bVar5 * -2 + 0xc] = auStack_9c[(uint)bVar5 * -2 + 4];
      auStack_9c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
           auStack_9c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
      (auStack_9c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd)[(uint)bVar5 * -2 + 1] =
           (auStack_9c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
      FUN_005b7940(auStack_9c + 7,auStack_9c + 0xb,
                   (param_2 / (*(float *)(param_1 + 0x77c) + param_2)) * (float)_DAT_005f8a68);
      uStack_50 = uStack_60;
      auStack_9c[(uint)bVar5 * -2 + 0x14] = auStack_9c[(uint)bVar5 * -2 + 0x10];
      auStack_9c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x15] =
           auStack_9c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11];
      (auStack_9c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x15)[(uint)bVar5 * -2 + 1] =
           (auStack_9c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11)[(uint)bVar5 * -2 + 1];
      FUN_005b7c00();
      puVar2 = puStack_1c;
      uStack_34 = uStack_40;
      auStack_9c[(uint)bVar5 * -2 + 0x1b] = auStack_9c[(uint)bVar5 * -2 + 0x18];
      auStack_9c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x1c] =
           auStack_9c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x19];
      if (auStack_9c + 0x1a != puVar2) {
        *puVar2 = uStack_34;
        puVar2[1] = uStack_30;
        puVar2[2] = uStack_2c;
      }
      FUN_004088b0();
    }
    else {
      *(uint *)(param_1 + 0x700) = 0;
      *(uint *)(param_1 + 0x77c) = 0;
      if (puStack_1c != puStack_20) {
        *puStack_1c = *puStack_20;
        *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x57c);
        *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x580);
      }
    }
    break;
  default:
    _DAT_01d1d400 = "..\\core\\turret.cpp";
    _DAT_01d1d404 = 0x15a;
    FUN_005030e0();
  }
  if (-1 < *(int *)(param_1 + 0x2f4)) {
    (**(code **)(*(int *)(param_1 + 0x154) + 0xf0))();
  }
  *(float *)(param_1 + 0x86c) = *(float *)(param_1 + 0x86c) - param_2;
  *(float *)(param_1 + 0x300) = *(float *)(param_1 + 0x300) - param_2;
  if ((0 < *(int *)(param_1 + 0x8b0)) || (0.0 < *(float *)(param_1 + 0x86c))) {
    *(int *)(param_1 + 0x8b0) = *(int *)(param_1 + 0x8b0) + -1;
    fStack_108 = (float)FUN_0040cc00(0x3f666666,0x3f8e38e4);
    fStack_18 = fStack_108;
    iVar3 = FUN_00573980(*(uint *)(param_1 + 0x8b4),fStack_108);
    if (iVar3 == 0) {
      FUN_005bfb40(auStack_104,"turret-loop.wav * %f",(double)fStack_108);
      uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x30))(param_1,auStack_104);
      *(uint *)(param_1 + 0x8b4) = uVar4;
      return;
    }
  }
  else {
    dStack_28 = (double)FUN_00573660(*(uint *)(param_1 + 0x8b4),2);
    if (0.0 <= dStack_28) {
      FUN_00573a80();
      (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"turret-tail.wav");
      return;
    }
  }
  return;
}
