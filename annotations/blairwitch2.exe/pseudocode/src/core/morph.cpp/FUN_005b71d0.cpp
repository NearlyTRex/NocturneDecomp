// Name: FUN_005b71d0
// Address: 005b71d0
// Address Range: [[005b71d0, 005b7694]]
// Convention: unknown
// Signature: void FUN_005b71d0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b71d0(int param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  byte bVar13;
  float afStackY_10d0 [1003];
  float local_118 [3];
  float local_10c [6];
  float local_f4 [3];
  float local_e8;
  float local_e4 [5];
  float local_d0;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4 [4];
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float local_64;
  float local_60 [5];
  float local_4c;
  float local_48;
  float local_44;
  int local_40;
  int local_3c;
  int local_38;
  float *local_34;
  float *local_30;
  int local_2c;
  uint *local_28;
  int local_24;
  float *local_20;
  float *local_1c;
  int local_18;
  int local_14;
  
  bVar13 = 0;
  if ((*(int *)(param_1 + 0x54) < 3) || (*(int *)(param_1 + 0x65c) < 3)) {
    _DAT_01d046a0 = "..\\core\\morph.cpp";
    _DAT_01d046a4 = 799;
    FUN_004e4500("CMorph::getReady - can't do this unless we have setup both models!");
  }
  FUN_005b7f5f(local_118,2,&DAT_005fb390);
  local_40 = param_1;
  local_38 = 0;
  local_28 = local_118;
  do {
    puVar6 = local_28;
    iVar2 = *(int *)(local_40 + 0x58);
    puVar7 = (uint *)(iVar2 + 4);
    if (puVar7 != local_28) {
      *local_28 = *puVar7;
      puVar6[1] = *(uint *)(iVar2 + 8);
      puVar6[2] = *(uint *)(iVar2 + 0xc);
    }
    if (puVar6 + 3 != puVar7) {
      puVar6[3] = *puVar7;
      puVar6[4] = *(uint *)(iVar2 + 8);
      puVar6[5] = *(uint *)(iVar2 + 0xc);
    }
    puVar6 = local_28;
    iVar2 = local_38;
    iVar11 = 0x10;
    for (iVar10 = 1; iVar10 < *(int *)(param_1 + iVar2 + 0x54); iVar10 = iVar10 + 1) {
      iVar8 = *(int *)(param_1 + iVar2 + 0x58) + iVar11;
      iVar11 = iVar11 + 0x10;
      FUN_0041a590(puVar6,iVar8 + 4);
    }
    local_38 = local_38 + 0x608;
    local_28 = local_28 + 6;
    local_40 = local_40 + 0x608;
  } while (local_38 != 0xc10);
  local_34 = local_10c;
  local_30 = local_f4;
  local_3c = param_1 + 0x608;
  local_2c = 0;
  local_14 = param_1;
  do {
    iVar2 = local_2c;
    iVar11 = 1 - local_2c;
    local_24 = local_3c;
    local_b8 = *local_30 - *(float *)((int)local_118 + iVar11 * 0x18);
    local_b4[0] = local_30[1] - local_118[iVar11 * 6U + 1];
    local_b4[1] = local_30[2] - local_118[iVar11 * 6U + 2];
    local_d0 = local_b8;
    local_e4[(uint)bVar13 * 0xfffffffe + 6] =
         (float)*(uint *)((int)local_b4 + (uint)bVar13 * 0xfffffff8);
    local_e4[(uint)bVar13 * 0xfffffffe + (uint)bVar13 * 0xfffffffe + 7] =
         local_b4[(uint)bVar13 * 0xfffffffe + (uint)bVar13 * 0xfffffffe + 1];
    local_e8 = *local_34 - *(float *)((int)local_118 + iVar2 * 0x18);
    local_e4[0] = local_34[1] - local_118[iVar2 * 6U + 1];
    local_e4[1] = local_34[2] - local_118[iVar2 * 6U + 2];
    local_e4[2] = local_e8;
    local_e4[(uint)bVar13 * 0xfffffffe + 3] =
         (float)*(uint *)((int)local_e4 + (uint)bVar13 * 0xfffffff8);
    local_e4[(uint)bVar13 * 0xfffffffe + (uint)bVar13 * 0xfffffffe + 4] =
         local_e4[(uint)bVar13 * 0xfffffffe + (uint)bVar13 * 0xfffffffe + 1];
    fVar4 = local_e8;
    fVar3 = local_d0 / local_e4[2];
    local_88 = local_b8;
    local_84 = local_b4[0];
    local_80 = local_b4[1];
    local_94 = local_b8;
    local_b4[(uint)bVar13 * 0xfffffffe + 9] = local_b4[(uint)bVar13 * 0xfffffffe + 0xc];
    local_b4[(uint)bVar13 * 0xfffffffe + (uint)bVar13 * 0xfffffffe + 10] =
         (float)*(uint *)((int)local_60 + ((uint)bVar13 * -2 + (uint)bVar13 * -2 + -8) * 4);
    local_4c = fVar4;
    local_48 = local_e4[0];
    local_44 = local_e4[1];
    local_60[2] = fVar4;
    *(uint *)((int)local_60 + ((uint)bVar13 * -2 + 3) * 4) =
         *(uint *)((int)local_60 + ((uint)bVar13 * -2 + 6) * 4);
    *(uint *)((int)local_60 + ((uint)bVar13 * -2 + (uint)bVar13 * -2 + 4) * 4) =
         *(uint *)((int)local_60 + ((uint)bVar13 * -2 + (uint)bVar13 * -2 + 7) * 4);
    fVar5 = local_e8;
    fVar4 = local_90 / local_60[3];
    local_7c = local_b8;
    local_78 = local_b4[0];
    local_74 = local_b4[1];
    local_b4[2] = local_b8;
    local_b4[(uint)bVar13 * 0xfffffffe + 3] =
         (float)*(uint *)((int)local_60 + ((uint)bVar13 * -2 + -6) * 4);
    local_b4[(uint)bVar13 * 0xfffffffe + (uint)bVar13 * 0xfffffffe + 4] =
         (float)*(uint *)((int)local_60 + ((uint)bVar13 * -2 + (uint)bVar13 * -2 + -5) * 4);
    local_a0 = fVar5;
    local_9c = local_e4[0];
    local_98 = local_e4[1];
    local_70 = fVar5;
    *(float *)((int)local_60 + ((uint)bVar13 * -2 + -3) * 4) =
         local_b4[(uint)bVar13 * 0xfffffffe + 6];
    iVar10 = local_14;
    *(float *)((int)local_60 + ((uint)bVar13 * -2 + (uint)bVar13 * -2 + -2) * 4) =
         local_b4[(uint)bVar13 * 0xfffffffe + (uint)bVar13 * 0xfffffffe + 7];
    local_c4 = fVar3;
    local_18 = 0;
    local_c0 = fVar4;
    local_bc = local_a4 / local_68;
    if (0 < *(int *)(local_14 + 0x54)) {
      iVar8 = 0;
      local_20 = (float *)((int)local_118 + iVar11 * 0x18);
      local_1c = (float *)((int)local_118 + iVar2 * 0x18);
      do {
        pfVar1 = (float *)(*(int *)(iVar10 + 0x58) + 4 + iVar8);
        pfVar12 = pfVar1 + (uint)bVar13 * -2 + 1;
        local_64 = *pfVar1;
        *(float *)((int)local_60 + (uint)bVar13 * 0xfffffff8) = *pfVar12;
        *(float *)((int)local_60 + ((uint)bVar13 * -2 + (uint)bVar13 * -2 + 1) * 4) =
             pfVar12[(uint)bVar13 * -2 + 1];
        if (*(int *)(param_1 + 0xc28) != 0) {
          local_64 = (local_64 - *local_1c) * local_c4 + *local_20;
          local_60[0] = (local_60[0] - local_1c[1]) * local_c0 + local_20[1];
          local_60[1] = (local_60[1] - local_1c[2]) * local_bc + local_20[2];
        }
        iVar8 = iVar8 + 0x10;
        uVar9 = FUN_005b6db0(local_24,&local_64);
        *(uint *)(*(int *)(iVar10 + 0x58) + -0x10 + iVar8) = uVar9;
        local_18 = local_18 + 1;
      } while (local_18 < *(int *)(iVar10 + 0x54));
    }
    local_2c = local_2c + 1;
    local_30 = local_30 + -6;
    local_3c = local_3c + -0x608;
    local_14 = local_14 + 0x608;
    local_34 = local_34 + 6;
  } while (local_2c < 2);
  return;
}
