// Name: core_morph.cpp_CMorph_getReady_FUN_004e03c0
// Address: 004e03c0
// Address Range: [[004e03c0, 004e0817]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorph_getReady_FUN_004e03c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_morph_cpp_CMorph_getReady_FUN_004e03c0(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float local_c8 [9];
  float local_a4 [3];
  float local_98;
  float local_94;
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
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint *local_24;
  float *local_20;
  float *local_1c;
  int local_18;
  int local_14;
  
  if ((*(int *)(param_1 + 0x54) < 3) || (*(int *)(param_1 + 0x65c) < 3)) {
    _DAT_01cc4800 = "..\\core\\morph.cpp";
    _DAT_01cc4804 = 799;
    FUN_004c8440("CMorph::getReady - can't do this unless we have setup both models!");
  }
  __arrinit(local_c8,2,&DAT_005993f0);
  local_38 = param_1;
  local_2c = 0;
  local_24 = local_c8;
  do {
    puVar2 = local_24;
    iVar1 = *(int *)(local_38 + 0x58);
    puVar3 = (uint *)(iVar1 + 4);
    if (puVar3 != local_24) {
      *local_24 = *puVar3;
      puVar2[1] = *(uint *)(iVar1 + 8);
      puVar2[2] = *(uint *)(iVar1 + 0xc);
    }
    if (puVar2 + 3 != puVar3) {
      puVar2[3] = *puVar3;
      puVar2[4] = *(uint *)(iVar1 + 8);
      puVar2[5] = *(uint *)(iVar1 + 0xc);
    }
    puVar2 = local_24;
    iVar1 = local_2c;
    iVar8 = 0x10;
    for (iVar9 = 1; iVar9 < *(int *)(param_1 + iVar1 + 0x54); iVar9 = iVar9 + 1) {
      iVar4 = *(int *)(param_1 + iVar1 + 0x58) + iVar8;
      iVar8 = iVar8 + 0x10;
      core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(puVar2,iVar4 + 4);
    }
    local_2c = local_2c + 0x608;
    local_24 = local_24 + 6;
    local_38 = local_38 + 0x608;
  } while (local_2c != 0xc10);
  local_20 = local_c8 + 3;
  local_1c = local_a4;
  local_34 = param_1 + 0x608;
  local_28 = 0;
  local_30 = param_1;
  do {
    iVar1 = local_28;
    local_14 = local_30;
    iVar8 = 1 - local_28;
    local_18 = local_34;
    pfVar10 = local_c8 + iVar8 * 6;
    local_8c = *local_1c - *pfVar10;
    local_88 = local_1c[1] - local_c8[iVar8 * 6 + 1];
    pfVar5 = local_c8 + local_28 * 6;
    local_84 = local_1c[2] - local_c8[iVar8 * 6 + 2];
    local_5c = *local_20 - *pfVar5;
    local_58 = local_20[1] - local_c8[local_28 * 6 + 1];
    local_54 = local_20[2] - local_c8[local_28 * 6 + 2];
    local_68 = (*local_1c - *pfVar10) / (*local_20 - *pfVar5);
    local_44 = *local_1c - *pfVar10;
    local_40 = local_1c[1] - local_c8[iVar8 * 6 + 1];
    local_3c = local_1c[2] - local_c8[iVar8 * 6 + 2];
    local_74 = *local_20 - *pfVar5;
    local_70 = local_20[1] - local_c8[local_28 * 6 + 1];
    local_6c = local_20[2] - local_c8[local_28 * 6 + 2];
    local_64 = (local_1c[1] - local_c8[iVar8 * 6 + 1]) / (local_20[1] - local_c8[local_28 * 6 + 1]);
    local_98 = *local_1c - *pfVar10;
    local_94 = local_1c[1] - local_c8[iVar8 * 6 + 1];
    local_90 = local_1c[2] - local_c8[iVar8 * 6 + 2];
    local_80 = *local_20 - *pfVar5;
    local_7c = local_20[1] - local_c8[local_28 * 6 + 1];
    local_78 = local_20[2] - local_c8[local_28 * 6 + 2];
    local_60 = (local_1c[2] - local_c8[iVar8 * 6 + 2]) / (local_20[2] - local_c8[local_28 * 6 + 2]);
    iVar9 = 0;
    if (0 < *(int *)(local_30 + 0x54)) {
      iVar4 = 0;
      do {
        iVar7 = *(int *)(local_14 + 0x58) + iVar4;
        local_50 = *(float *)(iVar7 + 4);
        local_4c = *(float *)(iVar7 + 8);
        local_48 = *(float *)(iVar7 + 0xc);
        if (*(int *)(param_1 + 0xc28) != 0) {
          local_50 = *(float *)(iVar7 + 4) - *pfVar5;
          local_50 = local_50 * local_68;
          local_4c = *(float *)(iVar7 + 8) - local_c8[iVar1 * 6 + 1];
          local_4c = local_4c * local_64;
          local_48 = (*(float *)(iVar7 + 0xc) - local_c8[iVar1 * 6 + 2]) * local_60;
          local_50 = local_50 + *pfVar10;
          local_4c = local_4c + local_c8[iVar8 * 6 + 1];
          local_48 = local_48 + local_c8[iVar8 * 6 + 2];
        }
        uVar6 = core_morph_cpp_CMorphModel_findNearestPoint_FUN_004dffc0(local_18,&local_50);
        *(uint *)(*(int *)(local_14 + 0x58) + iVar4) = uVar6;
        iVar9 = iVar9 + 1;
        iVar4 = iVar4 + 0x10;
      } while (iVar9 < *(int *)(local_14 + 0x54));
    }
    local_28 = local_28 + 1;
    local_1c = local_1c + -6;
    local_34 = local_34 + -0x608;
    local_30 = local_30 + 0x608;
    local_20 = local_20 + 6;
  } while (local_28 < 2);
  return;
}
