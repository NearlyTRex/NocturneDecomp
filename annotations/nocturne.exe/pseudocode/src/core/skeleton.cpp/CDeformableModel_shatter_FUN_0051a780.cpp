// Name: core_skeleton.cpp_CDeformableModel_shatter_FUN_0051a780
// Address: 0051a780
// Address Range: [[0051a780, 0051ad14]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_shatter_FUN_0051a780(int param_1,float *param_2,undefined4 param_3,int param_4,int *param_5,byte *param_6 ,int *param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_shatter_FUN_0051a780(int param_1,float *param_2,uint param_3,int param_4,int *param_5,byte *param_6 ,int *param_7)

{
  ushort *puVar1;
  float *pfVar2;
  uint *puVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  byte local_e0 [40];
  uint local_b8 [9];
  uint local_94 [6];
  float local_7c;
  float local_78;
  float local_74;
  byte local_70 [12];
  int local_64;
  int local_60;
  int local_5c;
  int *local_58;
  int local_54;
  int local_50;
  byte *local_4c;
  byte *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  local_1c = 0xffff;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(local_e0,param_3);
  if ((DAT_0268ced4 & 1) == 0) {
    DAT_0268ced4 = DAT_0268ced4 | 1;
    __arrinit(&DAT_02684234,3000,&DAT_005993b0);
  }
  if (3000 < *(int *)(param_4 * 4 + param_1 + 0x2c)) {
    _DAT_01cc4800 = "..\\core\\skeleton.cpp";
    _DAT_01cc4804 = 0x748;
    FUN_004c8440("CDeformableModel::shatter - too many vertices!");
  }
  pfVar7 = (float *)&DAT_02684234;
  local_5c = param_1 + param_4 * 4;
  iVar6 = 0;
  if (0 < *(int *)(local_5c + 0x2c)) {
    do {
      *pfVar7 = (float)*param_5 * _DAT_005a1eb0;
      pfVar7[1] = (float)param_5[1] * _DAT_005a1eb0;
      pfVar7[2] = (float)param_5[2] * _DAT_005a1eb0;
      pfVar2 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                  (local_e0,local_70,pfVar7);
      local_7c = *param_2 + *pfVar2;
      local_78 = param_2[1] + pfVar2[1];
      local_74 = param_2[2] + pfVar2[2];
      if (pfVar7 != &local_7c) {
        *pfVar7 = local_7c;
        pfVar7[1] = local_78;
        pfVar7[2] = local_74;
      }
      pfVar7 = pfVar7 + 3;
      iVar6 = iVar6 + 1;
      param_5 = param_5 + 3;
    } while (iVar6 < *(int *)(local_5c + 0x2c));
  }
  __arrinit(local_b8,3,&DAT_005993b0);
  local_24 = 0;
  local_44 = 0;
  if (0 < *(int *)(param_1 + 0xc00)) {
    local_38 = param_1 + param_4 * 4;
    local_60 = param_1 + 0xc0;
    local_54 = param_4 * 4 + param_1;
    local_4c = param_6;
    local_58 = param_7;
    local_34 = local_38;
    do {
      local_40 = *(int *)(local_54 + 0xc24) + local_24;
      local_2c = local_60 + *local_58 * 0x240;
      if (((*local_4c & 1) != 0) && (local_24 < local_40)) {
        iVar8 = local_24 * 0x12;
        iVar6 = local_24 * 4;
        local_20 = local_40 * 4;
        do {
          puVar4 = (ushort *)(*(int *)(local_38 + 0x7c) + iVar8);
          puVar3 = local_b8;
          iVar9 = 0;
          do {
            iVar5 = (uint)*puVar4 * 0xc;
            if (puVar3 != (uint *)(&DAT_02684234 + iVar5)) {
              *puVar3 = *(uint *)(&DAT_02684234 + iVar5);
              puVar3[1] = *(uint *)(&DAT_02684238 + iVar5);
              puVar3[2] = *(uint *)(&DAT_0268423c + iVar5);
            }
            puVar3 = puVar3 + 3;
            *(uint *)((int)local_94 + iVar9) = (uint)puVar4[3];
            iVar5 = iVar9 + 4;
            puVar1 = puVar4 + 6;
            puVar4 = puVar4 + 1;
            *(uint *)((int)local_94 + iVar9 + 0xc) = (uint)*puVar1;
            iVar9 = iVar5;
          } while (iVar5 != 0xc);
          core_fire_cpp_CFireEffect_createGlassParticle_FUN_0048b1c0
                    (0x01C08D04,local_b8,local_94,local_94 + 3,
                     *(int *)(iVar6 + *(int *)(local_34 + 0x90)) * 0x48 + local_2c,local_1c);
          iVar6 = iVar6 + 4;
          iVar8 = iVar8 + 0x12;
        } while (iVar6 < local_20);
      }
      local_4c = local_4c + 4;
      local_54 = local_54 + 0x60;
      local_44 = local_44 + 1;
      local_58 = local_58 + 1;
      local_24 = local_40;
    } while (local_44 < *(int *)(param_1 + 0xc00));
  }
  local_3c = 0;
  if (0 < *(int *)(param_1 + 0xc00)) {
    local_30 = param_1 + param_4 * 4;
    local_64 = param_1 + 0xc0;
    local_50 = param_4 * 4 + param_1;
    local_48 = param_6;
    local_18 = local_30;
    do {
      iVar6 = *(int *)(local_50 + 0xc38) + local_24;
      if (((*local_48 & 1) != 0) &&
         (local_28 = local_64 + param_7[local_3c] * 0x240, local_24 < iVar6)) {
        iVar9 = local_24 * 0x12;
        local_14 = local_24 << 2;
        iVar8 = local_24;
        local_24 = iVar6;
        do {
          puVar4 = (ushort *)(*(int *)(local_18 + 0x7c) + iVar9);
          if ((param_6[*(int *)(*(int *)(local_18 + 0xa4) + (iVar8 - *(int *)(local_18 + 0x54)) * 4)
                       * 4] & 1) == 0) {
            puVar3 = local_b8;
            iVar6 = 0;
            do {
              iVar5 = (uint)*puVar4 * 0xc;
              if (puVar3 != (uint *)(&DAT_02684234 + iVar5)) {
                *puVar3 = *(uint *)(&DAT_02684234 + iVar5);
                puVar3[1] = *(uint *)(&DAT_02684238 + iVar5);
                puVar3[2] = *(uint *)(&DAT_0268423c + iVar5);
              }
              *(uint *)((int)local_94 + iVar6) = (uint)puVar4[3] << 8;
              puVar3 = puVar3 + 3;
              puVar1 = puVar4 + 6;
              iVar5 = iVar6 + 4;
              puVar4 = puVar4 + 1;
              *(uint *)((int)local_94 + iVar6 + 0xc) = (uint)*puVar1 << 8;
              iVar6 = iVar5;
            } while (iVar5 != 0xc);
            core_fire_cpp_CFireEffect_createGlassParticle_FUN_0048b1c0
                      (0x01C08D04,local_b8,local_94,local_94 + 3,
                       *(int *)(*(int *)(local_30 + 0x90) + local_14) * 0x48 + local_28,local_1c);
          }
          iVar9 = iVar9 + 0x12;
          local_14 = local_14 + 4;
          iVar8 = iVar8 + 1;
          iVar6 = local_24;
        } while (iVar8 < local_24);
      }
      local_24 = iVar6;
      local_50 = local_50 + 0x60;
      local_48 = local_48 + 4;
      local_3c = local_3c + 1;
    } while (local_3c < *(int *)(param_1 + 0xc00));
  }
  return;
}
