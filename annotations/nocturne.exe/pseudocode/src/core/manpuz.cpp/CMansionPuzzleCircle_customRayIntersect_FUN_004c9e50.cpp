// Name: core_manpuz.cpp_CMansionPuzzleCircle_customRayIntersect_FUN_004c9e50
// Address: 004c9e50
// Address Range: [[004c9e50, 004ca23c]]
// Convention: unknown
// Signature: float core_manpuz_cpp_CMansionPuzzleCircle_customRayIntersect_FUN_004c9e50(int param_1,float *param_2,undefined4 param_3,float *param_4)

#include "nocturne.h"

float core_manpuz_cpp_CMansionPuzzleCircle_customRayIntersect_FUN_004c9e50(int param_1,float *param_2,uint param_3,float *param_4)

{
  char *pcVar1;
  CKeyFramedModel *pCVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  int local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  byte local_a8 [12];
  float local_9c;
  float local_98;
  float local_94;
  byte local_90 [12];
  byte local_84 [12];
  byte local_78 [12];
  byte local_6c [12];
  byte local_60 [12];
  byte local_54 [12];
  float local_48;
  float local_44;
  float local_40;
  byte local_3c [12];
  int local_30;
  int *local_2c;
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)(param_1 + 0x150));
  local_cc = pCVar2->texture_list[7].textures[1].base.count;
  local_c8 = *(uint *)pCVar2->texture_list[7].textures[1].texture_name;
  local_c4 = *(uint *)(pCVar2->texture_list[7].textures[1].texture_name + 4);
  local_c0 = *(uint *)(pCVar2->texture_list[7].textures[1].texture_name + 8);
  local_bc = *(uint *)(pCVar2->texture_list[7].textures[1].texture_name + 0xc);
  local_b8 = pCVar2->texture_list[7].textures[2].base.type;
  local_28 = param_1 + 0xa98;
  local_1c = 1.01;
  local_2c = (int *)(param_1 + 0x5e8);
  local_20 = 0;
  do {
    if (*local_2c != 0) {
      local_b4 = *param_2 - (float)local_2c[3];
      local_b0 = param_2[1] - (float)local_2c[4];
      local_ac = param_2[2] - (float)local_2c[5];
      piVar5 = local_2c + 9;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(piVar5,local_6c,&local_b4);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(piVar5,local_3c,param_3);
      local_18 = (float)core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550
                                  (&local_cc,local_6c,local_3c,local_a8);
      if ((0.0 <= local_18) && (local_18 < local_1c)) {
        local_1c = local_18;
        pfVar3 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                    (piVar5,local_90,local_a8);
        if (param_4 != pfVar3) {
          *param_4 = *pfVar3;
          param_4[1] = pfVar3[1];
          param_4[2] = pfVar3[2];
        }
      }
    }
    local_30 = local_28 + local_20;
    iVar4 = 0;
    do {
      iVar6 = local_30 + 0x3c + iVar4;
      local_18 = (float)core_dtri_cpp_rayTriangleIntersection_FUN_0046c620(iVar6,param_2,param_3);
      if ((0.0 <= local_18) && (local_18 < local_1c)) {
        local_48 = -*(float *)(iVar6 + 0x24);
        local_44 = -*(float *)(iVar6 + 0x28);
        local_40 = -*(float *)(iVar6 + 0x2c);
        local_1c = local_18;
        if (param_4 != &local_48) {
          *param_4 = local_48;
          param_4[1] = local_44;
          param_4[2] = local_40;
        }
      }
      iVar4 = iVar4 + 0x38;
    } while (iVar4 != 0x70);
    local_20 = local_20 + 0xb8;
    local_2c = local_2c + 0x19;
  } while (local_20 != 0x8a0);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)(param_1 + 0x448));
  piVar5 = &pCVar2->texture_list[7].textures[1].base.count;
  if (&local_cc != piVar5) {
    local_cc = *piVar5;
    local_c8 = *(uint *)pCVar2->texture_list[7].textures[1].texture_name;
    local_c4 = *(uint *)(pCVar2->texture_list[7].textures[1].texture_name + 4);
  }
  pcVar1 = pCVar2->texture_list[7].textures[1].texture_name + 8;
  if ((char *)&local_c0 != pcVar1) {
    local_c0 = *(uint *)pcVar1;
    local_bc = *(uint *)(pCVar2->texture_list[7].textures[1].texture_name + 0xc);
    local_b8 = pCVar2->texture_list[7].textures[2].base.type;
  }
  iVar4 = param_1 + 0x1338;
  local_24 = param_1 + 0x13f8;
  do {
    if (0.0 < *(float *)(iVar4 + 0x18)) {
      local_9c = *param_2 - *(float *)(iVar4 + 0x1c);
      local_98 = param_2[1] - *(float *)(iVar4 + 0x20);
      local_94 = param_2[2] - *(float *)(iVar4 + 0x24);
      iVar6 = iVar4 + 0x34;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(iVar6,local_60,&local_9c);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(iVar6,local_78,param_3);
      local_18 = (float)core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550
                                  (&local_cc,local_60,local_78,local_54);
      if ((0.0 <= local_18) && (local_18 < local_1c)) {
        local_1c = local_18;
        pfVar3 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                    (iVar6,local_84,local_54);
        if (param_4 != pfVar3) {
          *param_4 = *pfVar3;
          param_4[1] = pfVar3[1];
          param_4[2] = pfVar3[2];
        }
      }
    }
    iVar4 = iVar4 + 0x60;
  } while (iVar4 != local_24);
  return local_1c;
}
