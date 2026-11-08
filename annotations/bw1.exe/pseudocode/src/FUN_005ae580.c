// Name: FUN_005ae580
// Address: 005ae580
// Address Range: [[005ae580, 005ae832]]
// Convention: unknown
// Signature: void FUN_005ae580(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ae580(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  float afStackY_107c [1002];
  float local_c0;
  byte local_bc [40];
  float local_94;
  float local_90 [4];
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float afStack_54 [5];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  uint local_18;
  
  bVar3 = 0;
  local_18 = FUN_0040cc00(0x41200000,0x41a00000);
  *(uint *)(param_1 + 0x20) = local_18;
  local_18 = FUN_0040cc00(0x40000000,*(uint *)(param_1 + 0x34));
  *(uint *)(param_1 + 0x24) = 1;
  *(uint *)(param_1 + 0x28) = param_2;
  *(uint *)(param_1 + 0x2c) = local_18;
  FUN_0048f210(&DAT_01fe5c1c);
  local_7c = afStack_54[2];
  local_90[(uint)bVar3 * -2 + 6] = afStack_54[(uint)bVar3 * -2 + 3];
  local_90[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
       afStack_54[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
  FUN_0048f230(&DAT_01fe5c1c);
  local_90[2] = local_70;
  local_90[(uint)bVar3 * -2 + 3] = local_90[(uint)bVar3 * -2 + 9];
  local_90[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
       local_90[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10];
  local_24 = (local_90[2] - local_7c) * (float)_DAT_005f9992;
  local_1c = 0.0;
  if (0.0 < local_24) {
    local_1c = local_24;
  }
  local_28 = local_90[3] - local_78;
  if (local_1c < local_28) {
    local_1c = local_28;
  }
  local_20 = (local_80 - local_74) * (float)_DAT_005f9992;
  if (local_1c < local_20) {
    local_1c = local_20;
  }
  FUN_0045f3e0(local_bc,param_1 + 0x14);
  local_5c = local_1c;
  local_64 = 0.0;
  local_60 = 0.0;
  FUN_0045f690(local_bc,local_90 + 0xb);
  local_34 = local_58;
  afStack_54[(uint)bVar3 * -2 + 9] = afStack_54[(uint)bVar3 * -2];
  afStack_54[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10] =
       afStack_54[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  local_40 = local_34 + *(float *)(param_1 + 8);
  local_3c = local_30 + *(float *)(param_1 + 0xc);
  local_38 = local_2c + *(float *)(param_1 + 0x10);
  local_94 = local_40;
  local_90[(uint)bVar3 * -2] = afStack_54[(uint)bVar3 * -2 + 6];
  local_90[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       afStack_54[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7];
  if (local_90 + 0xb != &local_94) {
    local_64 = local_94;
    local_60 = local_90[0];
    local_5c = local_90[1];
  }
  if (param_3 != 0) {
    FUN_004b6fe0(0x01C57074,local_90 + 0xb,local_1c,0,0);
  }
  local_18 = FUN_005ae560();
  uVar1 = 0x01C51D80;
  *(uint *)(param_1 + 0x30) = local_18;
  local_c0 = *(float *)(param_1 + 0x30);
  iVar2 = FUN_004a6c30(uVar1,"BnoLightningFlash" + 1);
  if (iVar2 == 0) {
    local_c0 = local_c0 + _DAT_005f999a;
    if (1.0 < local_c0) {
      local_c0 = 1.0;
    }
    FUN_00453540(0x1fe37ec,local_c0);
    if (param_3 == 0) {
      return;
    }
  }
  else if (param_3 == 0) {
    return;
  }
  FUN_0057d8a0(0x02C82A60,param_1,"light?.wav @ 0.6",local_90 + 0xb);
  return;
}
