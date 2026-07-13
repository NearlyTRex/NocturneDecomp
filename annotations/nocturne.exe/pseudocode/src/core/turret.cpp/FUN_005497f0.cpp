// Name: FUN_005497f0
// Address: 005497f0
// Address Range: [[005497f0, 00549ccc]]
// Convention: unknown
// Signature: void FUN_005497f0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005497f0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  byte bVar5;
  float afStackY_186c [1497];
  char *pcVar7;
  ulonglong uVar6;
  float local_f8;
  byte local_f4 [100];
  uint local_90;
  uint auStack_8c [7];
  uint local_70;
  uint local_60;
  uint local_50 [4];
  uint local_40;
  byte local_30 [12];
  double local_24;
  uint *local_1c;
  uint *local_18;
  float local_14;
  
  bVar5 = 0;
  *(uint *)(param_1 + 0x2ec) = 0xffffffff;
  switch(*(uint *)(param_1 + 0x6f8)) {
  case 0:
    if ((uint *)(param_1 + 0x30) != (uint *)(param_1 + 0x570)) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x570);
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x574);
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x578);
    }
    iVar2 = FUN_0047dc30(0x01C03A10,param_1 + 0x6fc);
    if (iVar2 == 0) {
      *(uint *)(param_1 + 0x774) = 0;
      break;
    }
    *(uint *)(param_1 + 0x6f8) = 1;
    *(uint *)(param_1 + 0x774) = *(uint *)(param_1 + 0x760);
    FUN_00527230();
    pcVar7 = "?turret-ani?.wav" + 1;
    goto LAB_00549887;
  case 1:
    fVar1 = *(float *)(param_1 + 0x774) - param_2;
    *(float *)(param_1 + 0x774) = fVar1;
    if (fVar1 <= 0.0) {
      *(uint *)(param_1 + 0x774) = 0;
      *(uint *)(param_1 + 0x6f8) = 2;
      *(uint *)(param_1 + 0x2f8) = 0;
    }
    break;
  case 2:
    *(uint *)(param_1 + 0x2ec) = 0xff;
    uVar4 = 0x01C03A10;
    *(uint *)(param_1 + 0x2f0) = 0;
    *(uint *)(param_1 + 0x2f4) = 0;
    iVar2 = FUN_0047dc30(uVar4,param_1 + 0x6fc);
    if (iVar2 == 0) {
      *(uint *)(param_1 + 0x6f8) = 3;
      *(uint *)(param_1 + 0x774) = *(uint *)(param_1 + 0x764);
    }
    else {
      FUN_0054a110(param_1,param_2);
      *(uint *)(param_1 + 0x774) = 0;
    }
    break;
  case 3:
    *(uint *)(param_1 + 0x2ec) = 0;
    uVar4 = 0x01C03A10;
    *(uint *)(param_1 + 0x2f0) = 0xff;
    *(uint *)(param_1 + 0x2f4) = 0;
    iVar2 = FUN_0047dc30(uVar4,param_1 + 0x6fc);
    if (iVar2 != 0) {
      *(uint *)(param_1 + 0x774) = 0;
      *(uint *)(param_1 + 0x6f8) = 2;
      *(uint *)(param_1 + 0x2f8) = 0;
      break;
    }
    fVar1 = *(float *)(param_1 + 0x774) - param_2;
    *(float *)(param_1 + 0x774) = fVar1;
    if (0.0 < fVar1) {
      FUN_0054a920(param_1,param_2);
      break;
    }
    *(uint *)(param_1 + 0x6f8) = 4;
    *(uint *)(param_1 + 0x774) = *(uint *)(param_1 + 0x768);
    FUN_00527230();
    pcVar7 = "turret-ani?.wav";
LAB_00549887:
    uVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,pcVar7);
    *(uint *)(param_1 + 0x8b0) = uVar4;
    break;
  case 4:
    local_1c = (uint *)(param_1 + 0x570);
    *(float *)(param_1 + 0x774) = *(float *)(param_1 + 0x774) - param_2;
    local_18 = (uint *)(param_1 + 0x30);
    if (0.0 < *(float *)(param_1 + 0x774)) {
      FUN_0055d610();
      local_90 = local_40;
      auStack_8c[(uint)bVar5 * -2] = auStack_8c[(uint)bVar5 * -2 + 0x14];
      auStack_8c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           auStack_8c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x15];
      (auStack_8c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
           (auStack_8c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x15)[(uint)bVar5 * -2 + 1];
      FUN_0055d610();
      local_50[0] = local_70;
      auStack_8c[(uint)bVar5 * -2 + 0x10] = auStack_8c[(uint)bVar5 * -2 + 8];
      auStack_8c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11] =
           auStack_8c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9];
      (auStack_8c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x11)[(uint)bVar5 * -2 + 1] =
           (auStack_8c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1];
      FUN_0055d2d0(&local_90,auStack_8c + 0xf,
                   (param_2 / (*(float *)(param_1 + 0x774) + param_2)) * (float)_DAT_00596d9d);
      uVar6 = CONCAT44(auStack_8c + 3,local_30);
      auStack_8c[3] = local_60;
      auStack_8c[(uint)bVar5 * -2 + 4] = auStack_8c[(uint)bVar5 * -2 + 0xc];
      auStack_8c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5] =
           auStack_8c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
      (auStack_8c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1] =
           (auStack_8c + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd)[(uint)bVar5 * -2 + 1];
      puVar3 = (uint *)FUN_0055d5b0(uVar6);
      if (puVar3 != local_18) {
        *local_18 = *puVar3;
        local_18[1] = puVar3[1];
        local_18[2] = puVar3[2];
      }
      FUN_0040a000();
    }
    else {
      *(uint *)(param_1 + 0x6f8) = 0;
      *(uint *)(param_1 + 0x774) = 0;
      if (local_18 != local_1c) {
        *local_18 = *local_1c;
        *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x574);
        *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x578);
      }
    }
    break;
  default:
    _DAT_01cc4800 = "..\\core\\turret.cpp";
    _DAT_01cc4804 = 0x15a;
    FUN_004c8440();
  }
  if (-1 < *(int *)(param_1 + 0x2ec)) {
    (**(code **)(*(int *)(param_1 + 0x14c) + 0xe8))();
  }
  *(float *)(param_1 + 0x864) = *(float *)(param_1 + 0x864) - param_2;
  *(float *)(param_1 + 0x2f8) = *(float *)(param_1 + 0x2f8) - param_2;
  if ((0 < *(int *)(param_1 + 0x8a8)) || (0.0 < *(float *)(param_1 + 0x864))) {
    *(int *)(param_1 + 0x8a8) = *(int *)(param_1 + 0x8a8) + -1;
    local_f8 = (float)FUN_0040dda0(0x3f666666,0x3f8e38e4);
    local_14 = local_f8;
    iVar2 = FUN_00527130(*(uint *)(param_1 + 0x8ac),local_f8);
    if (iVar2 == 0) {
      FUN_00563c90(local_f4,"turret-loop.wav * %f",(double)local_f8);
      uVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x28))(param_1,local_f4);
      *(uint *)(param_1 + 0x8ac) = uVar4;
      return;
    }
  }
  else {
    local_24 = (double)FUN_00526d10(*(uint *)(param_1 + 0x8ac),2);
    if (0.0 <= local_24) {
      FUN_00527230();
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"turret-tail.wav");
      return;
    }
  }
  return;
}
