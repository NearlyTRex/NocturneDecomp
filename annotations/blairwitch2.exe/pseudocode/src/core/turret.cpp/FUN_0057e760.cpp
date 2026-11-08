// Name: FUN_0057e760
// Address: 0057e760
// Address Range: [[0057e760, 0057e791] [0057e80a, 0057e8b5] [0057eba4, 0057ec60]]
// Convention: unknown
// Signature: void FUN_0057e760(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057e760(int param_1,float param_2)

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
  *(uint *)(param_1 + 0x450) = 0xffffffff;
  switch(*(uint *)(param_1 + 0x85c)) {
  case 0:
    if ((uint *)(param_1 + 0x30) != (uint *)(param_1 + 0x6d4)) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x6d4);
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x6d8);
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x6dc);
    }
    iVar3 = FUN_0048e340(0x01C38BC0,param_1 + 0x860);
    if (iVar3 == 0) {
      *(uint *)(param_1 + 0x8d8) = 0;
      break;
    }
    *(uint *)(param_1 + 0x85c) = 1;
    *(uint *)(param_1 + 0x8d8) = *(uint *)(param_1 + 0x8c4);
    FUN_00551050();
    pcVar6 = "?turret-ani?.wav" + 1;
    goto LAB_0057e7f7;
  case 1:
    fVar1 = *(float *)(param_1 + 0x8d8) - param_2;
    *(float *)(param_1 + 0x8d8) = fVar1;
    if (fVar1 <= 0.0) {
      *(uint *)(param_1 + 0x8d8) = 0;
      *(uint *)(param_1 + 0x85c) = 2;
      *(uint *)(param_1 + 0x45c) = 0;
    }
    break;
  case 2:
    *(uint *)(param_1 + 0x450) = 0xff;
    uVar4 = 0x01C38BC0;
    *(uint *)(param_1 + 0x454) = 0;
    *(uint *)(param_1 + 0x458) = 0;
    iVar3 = FUN_0048e340(uVar4,param_1 + 0x860);
    if (iVar3 == 0) {
      *(uint *)(param_1 + 0x85c) = 3;
      *(uint *)(param_1 + 0x8d8) = *(uint *)(param_1 + 0x8c8);
    }
    else {
      FUN_0057f0b0(param_1,param_2);
      *(uint *)(param_1 + 0x8d8) = 0;
    }
    break;
  case 3:
    *(uint *)(param_1 + 0x450) = 0;
    uVar4 = 0x01C38BC0;
    *(uint *)(param_1 + 0x454) = 0xff;
    *(uint *)(param_1 + 0x458) = 0;
    iVar3 = FUN_0048e340(uVar4,param_1 + 0x860);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x8d8) = 0;
      *(uint *)(param_1 + 0x85c) = 2;
      *(uint *)(param_1 + 0x45c) = 0;
      break;
    }
    fVar1 = *(float *)(param_1 + 0x8d8) - param_2;
    *(float *)(param_1 + 0x8d8) = fVar1;
    if (0.0 < fVar1) {
      FUN_0057fa00(param_1,param_2);
      break;
    }
    *(uint *)(param_1 + 0x85c) = 4;
    *(uint *)(param_1 + 0x8d8) = *(uint *)(param_1 + 0x8cc);
    FUN_00551050();
    pcVar6 = "turret-ani?.wav";
LAB_0057e7f7:
    uVar4 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,pcVar6);
    *(uint *)(param_1 + 0xa14) = uVar4;
    break;
  case 4:
    puStack_20 = (uint *)(param_1 + 0x6d4);
    *(float *)(param_1 + 0x8d8) = *(float *)(param_1 + 0x8d8) - param_2;
    puStack_1c = (uint *)(param_1 + 0x30);
    if (0.0 < *(float *)(param_1 + 0x8d8)) {
      FUN_00594380();
      auStack_80[0] = uStack_a0;
      auStack_9c[(uint)bVar5 * -2 + 8] = auStack_9c[(uint)bVar5 * -2];
      auStack_9c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9] =
           auStack_9c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      (auStack_9c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1] =
           (auStack_9c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
      FUN_00594380();
      auStack_70[0] = auStack_9c[3];
      auStack_9c[(uint)bVar5 * -2 + 0xc] = auStack_9c[(uint)bVar5 * -2 + 4];
      auStack_9c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
           auStack_9c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
      (auStack_9c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd)[(uint)bVar5 * -2 + 1] =
           (auStack_9c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
      FUN_00593df0(auStack_9c + 7,auStack_9c + 0xb,
                   (param_2 / (*(float *)(param_1 + 0x8d8) + param_2)) * (float)_DAT_005ed70c);
      uStack_50 = uStack_60;
      auStack_9c[(uint)bVar5 * -2 + 0x14] = auStack_9c[(uint)bVar5 * -2 + 0x10];
      auStack_9c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x15] =
           auStack_9c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11];
      (auStack_9c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x15)[(uint)bVar5 * -2 + 1] =
           (auStack_9c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11)[(uint)bVar5 * -2 + 1];
      FUN_005940b0();
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
      FUN_00408ae0();
    }
    else {
      *(uint *)(param_1 + 0x85c) = 0;
      *(uint *)(param_1 + 0x8d8) = 0;
      if (puStack_1c != puStack_20) {
        *puStack_1c = *puStack_20;
        *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x6d8);
        *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x6dc);
      }
    }
    break;
  default:
    _DAT_01d046a0 = "..\\core\\turret.cpp";
    _DAT_01d046a4 = 0x15a;
    FUN_004e4500();
  }
  if (-1 < *(int *)(param_1 + 0x450)) {
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0xf8))();
  }
  *(float *)(param_1 + 0x9c8) = *(float *)(param_1 + 0x9c8) - param_2;
  *(float *)(param_1 + 0x45c) = *(float *)(param_1 + 0x45c) - param_2;
  if ((0 < *(int *)(param_1 + 0xa0c)) || (0.0 < *(float *)(param_1 + 0x9c8))) {
    *(int *)(param_1 + 0xa0c) = *(int *)(param_1 + 0xa0c) + -1;
    fStack_108 = (float)FUN_0040cf60(0x3f666666,0x3f8e38e4);
    fStack_18 = fStack_108;
    iVar3 = FUN_00550f50(*(uint *)(param_1 + 0xa10),fStack_108);
    if (iVar3 == 0) {
      FUN_005b7790(auStack_104,"turret-loop.wav * %f",(double)fStack_108);
      uVar4 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x38))(param_1,auStack_104);
      *(uint *)(param_1 + 0xa10) = uVar4;
      return;
    }
  }
  else {
    dStack_28 = (double)FUN_00550c30(*(uint *)(param_1 + 0xa10),2);
    if (0.0 <= dStack_28) {
      FUN_00551050();
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"turret-tail.wav");
      return;
    }
  }
  return;
}
