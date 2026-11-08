// Name: FUN_004941c0
// Address: 004941c0
// Address Range: [[004941c0, 004944b4]]
// Convention: unknown
// Signature: void FUN_004941c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004941c0(uint *param_1,uint param_2,uint param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  float afStackY_109c [997];
  byte local_f4 [40];
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0 [4];
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
  float local_78;
  uint local_74;
  uint local_70;
  float local_6c;
  float local_68 [4];
  float local_58;
  float local_54;
  float local_48;
  float local_44;
  uint local_40;
  float local_3c;
  float local_38 [6];
  float local_20 [4];
  
  bVar5 = 0;
  FUN_00449280(local_f4,param_3);
  local_38[2] = 0.0;
  local_38[3] = 0.0;
  local_38[4] = 10.0;
  FUN_00449530(local_f4,local_38 + 2);
  local_84 = local_54;
  local_b0[(uint)bVar5 * -2 + 0xc] = local_68[(uint)bVar5 * -2 + 6];
  local_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
       local_68[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  local_20[2] = (param_4[2] * local_7c + *param_4 * local_84 + param_4[1] * local_80) *
                _DAT_005d5396;
  local_90 = *param_4 * local_20[2];
  local_8c = param_4[1] * local_20[2];
  local_88 = param_4[2] * local_20[2];
  local_b4 = *param_4 * local_20[2];
  local_b0[(uint)bVar5 * -2] = local_b0[(uint)bVar5 * -2 + 9];
  local_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       local_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
  local_9c = local_b4 - local_84;
  local_98 = local_b0[0] - local_80;
  local_94 = local_b0[1] - local_7c;
  local_68[2] = local_b4 - local_84;
  local_68[(uint)bVar5 * -2 + 3] = local_b0[(uint)bVar5 * -2 + 6];
  local_68[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       local_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  if (local_b0 + 0xb != local_68 + 2) {
    local_84 = local_68[2];
    local_80 = local_68[3];
    local_7c = local_58;
  }
  local_68[0] = -local_80;
  local_68[1] = -local_7c;
  local_6c = -local_84;
  local_b0[2] = -local_84;
  local_b0[(uint)bVar5 * -2 + 3] = local_68[(uint)bVar5 * -2];
  local_b0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       local_68[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  if (local_b0 + 0xb != local_b0 + 2) {
    local_84 = local_b0[2];
    local_80 = local_b0[3];
    local_7c = local_a0;
  }
  *param_1 = 0;
  iVar1 = FUN_0044fd20(0x1c3def8);
  pfVar3 = (float *)(iVar1 + 0x338);
  pfVar4 = &local_cc;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
  }
  local_38[5] = local_c0 - local_cc;
  local_20[0] = local_bc - local_c8;
  local_20[1] = local_b8 - local_c4;
  local_3c = local_c0 - local_cc;
  local_38[(uint)bVar5 * -2] = local_20[(uint)bVar5 * -2];
  local_38[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       local_20[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  if (local_68 + 8 != &local_3c) {
    local_48 = local_3c;
    local_44 = local_38[0];
    local_40 = local_38[1];
  }
  FUN_005b1c80(param_1 + 1,param_2,param_3,local_68 + 8,0x40000000);
  local_78 = (float)FUN_0040cf60(0xc116cbe4,0x4116cbe4);
  local_70 = 0;
  local_20[3] = local_78;
  local_74 = FUN_0040cf60(0xc116cbe4,0x4116cbe4);
  local_20[3] = (float)local_74;
  FUN_005b4610(param_1 + 1,local_b0 + 0xb,local_b0 + 0xe);
  return;
}
