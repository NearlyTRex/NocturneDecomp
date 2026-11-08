// Name: FUN_004e98b0
// Address: 004e98b0
// Address Range: [[004e98b0, 004e9ef6]]
// Convention: unknown
// Signature: void FUN_004e98b0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e98b0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  float afStackY_10b4 [1007];
  float local_dc;
  byte local_d8 [4];
  float local_d4;
  float local_cc;
  float afStack_c8 [5];
  uint local_b4;
  float afStack_b0 [4];
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  uint local_78;
  float local_74;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_30;
  int local_2c;
  float local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar4 = 0;
  local_2c = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  local_24 = 0;
  local_20 = 0.25;
  local_30 = 0.7853982;
  FUN_005bfb70(param_1 + 0xc1d8,0,0x30);
  if (*(int *)(param_1 + 0x1ffa8) != 0) {
    iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    local_60 = *(float *)(param_1 + 0x20) - *(float *)(iVar3 + 0x20);
    local_5c = *(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24);
    local_58 = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
    local_9c = local_60;
    afStack_b0[(uint)bVar4 * -2 + 6] = afStack_b0[(uint)bVar4 * -2 + 0x15];
    afStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
         afStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16];
    local_48 = SQRT(local_94 * local_94 + local_9c * local_9c + local_98 * local_98);
    if (((*(int *)(param_1 + 0x1ffa8) == 3) || (local_48 < _DAT_005e4543)) &&
       ((*(int *)(param_1 + 0x1ffa8) == 2 || (*(int *)(param_1 + 0x1ffa8) == 3)))) {
      local_dc = 9999.9;
      iVar3 = FUN_004ec350(param_1,&local_dc);
      if ((iVar3 == 0) || ((float)_DAT_005e4547 <= local_dc)) {
        if (*(int *)(param_1 + 0x1ffac) != 0) {
          *(uint *)(param_1 + 0xc1f0) = 1;
        }
      }
      else {
        local_2c = iVar3;
        local_24 = 1;
      }
    }
    local_84 = *(float *)(local_2c + 0x20) - *(float *)(param_1 + 0x20);
    local_80 = *(float *)(local_2c + 0x24) - *(float *)(param_1 + 0x24);
    local_7c = *(float *)(local_2c + 0x28) - *(float *)(param_1 + 0x28);
    local_54 = local_84;
    afStack_b0[(uint)bVar4 * -2 + 0x18] = afStack_b0[(uint)bVar4 * -2 + 0xc];
    afStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19] =
         afStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
    if (afStack_b0 + 5 != afStack_b0 + 0x17) {
      local_9c = local_54;
      local_98 = local_50;
      local_94 = local_4c;
    }
    fVar1 = SQRT(local_94 * local_94 + local_9c * local_9c + local_98 * local_98);
    local_1c = fVar1;
    if ((float)_DAT_005e454f <= fVar1) {
      iVar3 = 0;
      if (local_24 == 0) {
        iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0xc4))(iVar3);
      }
      if (iVar3 == 0) {
        iVar3 = FUN_005351f0(local_2c + 0x20);
      }
      iVar3 = FUN_005349a0(iVar3,param_1 + 0x20,local_d8,*(uint *)(param_1 + 0x6c));
      if (iVar3 != 0) {
        local_18 = (float)FUN_0040cd60(local_d4 - *(float *)(param_1 + 0x34));
        fVar2 = local_18 * _DAT_005e4557 * (float)_DAT_005e455f;
        local_3c = -local_20;
        *(float *)(param_1 + 0xc200) = fVar2;
        if (fVar2 < local_3c) {
          *(float *)(param_1 + 0xc200) = local_3c;
        }
        if (local_20 < *(float *)(param_1 + 0xc200)) {
          *(float *)(param_1 + 0xc200) = local_20;
        }
        if (((float)_DAT_005e4567 <= fVar1) || (local_24 == 1)) {
          *(uint *)(param_1 + 0xc1e0) = 1;
          *(uint *)(param_1 + 0xc1d8) = 1;
        }
        else {
          *(uint *)(param_1 + 0xc1d8) = 1;
        }
      }
    }
    else {
      if (local_24 == 1) {
        if (*(int *)(param_1 + 0x1ffac) == 0) {
          *(uint *)(param_1 + 0xc1f0) = 1;
        }
        else {
          iVar3 = FUN_00524770(param_1 + 0x158);
          if ((*(int *)(iVar3 + 0x24) != 2) && (*(int *)(iVar3 + 0x24) != 1)) {
            *(uint *)(param_1 + 0xc1e4) = 1;
          }
        }
      }
      else {
        iVar3 = FUN_00524770(param_1 + 0x158);
        if ((*(int *)(iVar3 + 0x24) == 10) && (*(int *)(param_1 + 0x1ffac) != 0)) {
          *(uint *)(param_1 + 0xc1f0) = 1;
        }
      }
      if (local_24 == 1) {
        FUN_005a7520(afStack_b0 + 5);
        local_78 = local_b4;
        afStack_b0[(uint)bVar4 * -2 + 0xf] = afStack_b0[(uint)bVar4 * -2];
        afStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
             afStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
        local_18 = (float)FUN_0040cd60(local_74 - *(float *)(param_1 + 0x34));
        fVar1 = local_18 * _DAT_005e4557 * (float)_DAT_005e455f;
        local_40 = -local_20;
        *(float *)(param_1 + 0xc200) = fVar1;
        if (fVar1 < local_40) {
          *(float *)(param_1 + 0xc200) = local_40;
        }
        if (local_20 < *(float *)(param_1 + 0xc200)) {
          *(float *)(param_1 + 0xc200) = local_20;
        }
        if ((((float)_DAT_005e456f < *(float *)(param_1 + 0xc200)) &&
            ((double)*(float *)(param_1 + 0xc200) < _DAT_005e4577)) &&
           (*(int *)(param_1 + 0xc1e4) != 0)) {
          *(uint *)(param_1 + 0xc200) = 0;
        }
      }
    }
    local_90 = *(float *)(local_2c + 0x20) - *(float *)(param_1 + 0x20);
    local_8c = *(float *)(local_2c + 0x24) - *(float *)(param_1 + 0x24);
    local_88 = *(float *)(local_2c + 0x28) - *(float *)(param_1 + 0x28);
    afStack_b0[2] = local_90;
    afStack_b0[(uint)bVar4 * -2 + 3] = afStack_b0[(uint)bVar4 * -2 + 9];
    afStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
    if (afStack_b0 + 5 != afStack_b0 + 2) {
      local_9c = afStack_b0[2];
      local_98 = afStack_b0[3];
      local_94 = local_a0;
    }
    FUN_005a7520(afStack_b0 + 5);
    local_6c = local_cc;
    afStack_b0[(uint)bVar4 * -2 + 0x12] = afStack_c8[(uint)bVar4 * -2];
    afStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13] =
         afStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (afStack_b0 + 5 != afStack_b0 + 0x11) {
      local_9c = local_6c;
      local_98 = local_68;
      local_94 = local_64;
    }
    afStack_c8[3] = (float)FUN_0040cd60(local_98 - *(float *)(param_1 + 0x34));
    if (local_30 < afStack_c8[3]) {
      afStack_c8[3] = local_30;
    }
    if (afStack_c8[3] < -local_30) {
      afStack_c8[3] = -local_30;
    }
    local_28 = afStack_c8[3] - *(float *)(param_1 + 0x1ffb8);
    if (param_2 * _DAT_005e457f < local_28) {
      local_28 = param_2 * _DAT_005e457f;
    }
    if (local_28 < param_2 * _DAT_005e4583) {
      local_28 = param_2 * _DAT_005e4583;
    }
    *(float *)(param_1 + 0x1ffb8) = *(float *)(param_1 + 0x1ffb8) + local_28;
  }
  return;
}
