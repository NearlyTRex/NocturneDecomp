// Name: FUN_00435e30
// Address: 00435e30
// Address Range: [[00435e30, 00436417]]
// Convention: unknown
// Signature: void FUN_00435e30(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00435e30(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  float afStackY_10b4 [1007];
  float local_e0;
  float local_dc;
  byte local_d8 [4];
  float local_d4;
  float local_cc;
  float local_c8 [6];
  float local_b0;
  float local_a8;
  float local_a4 [5];
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar3 = 0;
  local_28 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  local_24 = 0;
  local_1c = 0.25;
  local_2c = 0.7853982;
  FUN_005b77c0(param_1 + 0x10a68,0,0x34);
  if (*(int *)(param_1 + 0x25638) != 0) {
    iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    local_a8 = *(float *)(param_1 + 0x20) - *(float *)(iVar2 + 0x20);
    local_a4[0] = *(float *)(param_1 + 0x24) - *(float *)(iVar2 + 0x24);
    local_a4[1] = *(float *)(param_1 + 0x28) - *(float *)(iVar2 + 0x28);
    local_84 = local_a8;
    local_a4[(uint)bVar3 * -2 + 9] = local_a4[(uint)bVar3 * -2];
    local_a4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10] =
         local_a4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    local_44 = SQRT(local_7c * local_7c + local_84 * local_84 + local_80 * local_80);
    if ((((*(int *)(param_1 + 0x25638) == 3) || (local_44 < _DAT_005cdbf1)) &&
        ((*(int *)(param_1 + 0x25638) == 2 || (*(int *)(param_1 + 0x25638) == 3)))) &&
       ((iVar2 = FUN_004d00c0(param_1,&local_e0), iVar2 != 0 && (local_e0 < (float)_DAT_005cdbf5))))
    {
      local_28 = iVar2;
      local_24 = 1;
    }
    local_cc = *(float *)(local_28 + 0x20) - *(float *)(param_1 + 0x20);
    local_c8[0] = *(float *)(local_28 + 0x24) - *(float *)(param_1 + 0x24);
    local_c8[1] = *(float *)(local_28 + 0x28) - *(float *)(param_1 + 0x28);
    local_6c = local_cc;
    local_a4[(uint)bVar3 * -2 + 0xf] = local_c8[(uint)bVar3 * -2];
    local_a4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x10] =
         local_c8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    if (local_a4 + 8 != local_a4 + 0xe) {
      local_84 = local_6c;
      local_80 = local_68;
      local_7c = local_64;
    }
    local_48 = SQRT(local_7c * local_7c + local_84 * local_84 + local_80 * local_80);
    local_dc = local_48;
    if ((float)_DAT_005cdbfd <= local_48) {
      iVar2 = 0;
      if (local_24 == 0) {
        iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        iVar2 = (**(code **)(*(int *)(iVar2 + 0x2b0) + 0xcc))(iVar2);
      }
      if (iVar2 == 0) {
        iVar2 = FUN_00513ea0(local_28 + 0x20);
      }
      iVar2 = FUN_00513650(iVar2,param_1 + 0x20,local_d8,*(uint *)(param_1 + 0x6c));
      if (iVar2 != 0) {
        local_18 = (float)FUN_0040d0c0(local_d4 - *(float *)(param_1 + 0x34));
        fVar1 = local_18 * _DAT_005cdc05 * (float)_DAT_005cdc0d;
        local_38 = -local_1c;
        *(float *)(param_1 + 0x10a90) = fVar1;
        if (fVar1 < local_38) {
          *(float *)(param_1 + 0x10a90) = local_38;
        }
        if (local_1c < *(float *)(param_1 + 0x10a90)) {
          *(float *)(param_1 + 0x10a90) = local_1c;
        }
        if (((float)_DAT_005cdc15 <= local_dc) || (local_24 == 1)) {
          *(uint *)(param_1 + 0x10a70) = 1;
          *(uint *)(param_1 + 0x10a68) = 1;
        }
        else {
          *(uint *)(param_1 + 0x10a68) = 1;
        }
      }
    }
    else {
      if (local_24 == 1) {
        if (*(int *)(param_1 + 0x25640) == 0) {
          *(uint *)(param_1 + 0x10a80) = 1;
        }
        else {
          iVar2 = FUN_005035c0(param_1 + 0x2b4);
          if ((*(int *)(iVar2 + 0x24) != 2) && (*(int *)(iVar2 + 0x24) != 1)) {
            *(uint *)(param_1 + 0x10a74) = 1;
          }
        }
      }
      else {
        FUN_005035c0(param_1 + 0x2b4);
      }
      if (local_24 == 1) {
        FUN_005838f0(local_a4 + 8);
        local_a4[2] = local_c8[2];
        local_a4[(uint)bVar3 * -2 + 3] = local_c8[(uint)bVar3 * -2 + 3];
        local_a4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
             local_c8[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
        local_18 = (float)FUN_0040d0c0(local_a4[3] - *(float *)(param_1 + 0x34));
        fVar1 = local_18 * _DAT_005cdc05 * (float)_DAT_005cdc0d;
        local_40 = -local_1c;
        *(float *)(param_1 + 0x10a90) = fVar1;
        if (fVar1 < local_40) {
          *(float *)(param_1 + 0x10a90) = local_40;
        }
        if (local_1c < *(float *)(param_1 + 0x10a90)) {
          *(float *)(param_1 + 0x10a90) = local_1c;
        }
        if ((((float)_DAT_005cdc1d < *(float *)(param_1 + 0x10a90)) &&
            ((double)*(float *)(param_1 + 0x10a90) < _DAT_005cdc25)) &&
           (*(int *)(param_1 + 0x10a74) != 0)) {
          *(uint *)(param_1 + 0x10a90) = 0;
        }
      }
    }
    local_60 = *(float *)(local_28 + 0x20) - *(float *)(param_1 + 0x20);
    local_5c = *(float *)(local_28 + 0x24) - *(float *)(param_1 + 0x24);
    local_58 = *(float *)(local_28 + 0x28) - *(float *)(param_1 + 0x28);
    local_90 = local_60;
    local_a4[(uint)bVar3 * -2 + 6] = local_a4[(uint)bVar3 * -2 + 0x12];
    local_a4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
         local_a4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x13];
    if (local_a4 + 8 != local_a4 + 5) {
      local_84 = local_90;
      local_80 = local_8c;
      local_7c = local_88;
    }
    FUN_005838f0(local_a4 + 8);
    local_78 = local_54;
    local_a4[(uint)bVar3 * -2 + 0xc] = local_a4[(uint)bVar3 * -2 + 0x15];
    local_a4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd] =
         local_a4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x16];
    if (local_a4 + 8 != local_a4 + 0xb) {
      local_84 = local_78;
      local_80 = local_74;
      local_7c = local_70;
    }
    local_b0 = (float)FUN_0040d0c0(local_80 - *(float *)(param_1 + 0x34));
    if (local_2c < local_b0) {
      local_b0 = local_2c;
    }
    if (local_b0 < -local_2c) {
      local_b0 = -local_2c;
    }
    local_20 = local_b0 - *(float *)(param_1 + 0x2564c);
    if (param_2 * _DAT_005cdc2d < local_20) {
      local_20 = param_2 * _DAT_005cdc2d;
    }
    if (local_20 < param_2 * _DAT_005cdc31) {
      local_20 = param_2 * _DAT_005cdc31;
    }
    *(float *)(param_1 + 0x2564c) = *(float *)(param_1 + 0x2564c) + local_20;
  }
  return;
}
