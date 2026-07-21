// Name: core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00454100
// Address: 00454100
// Address Range: [[00454100, 004543a9]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_populateCollisionList_FUN_00454100(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_CKeyFramedModel_populateCollisionList_FUN_00454100(int param_1,uint *param_2)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte local_78 [12];
  byte local_6c [12];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  byte local_3c [12];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if ((uint *)(param_1 + 0x364) != param_2) {
    *(uint *)(param_1 + 0x364) = *param_2;
    *(uint *)(param_1 + 0x368) = param_2[1];
    *(uint *)(param_1 + 0x36c) = param_2[2];
  }
  iVar3 = param_1 + 0x370;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(iVar3,param_1 + 0x364);
  local_30 = 0;
  iVar4 = *(int *)(param_1 + 0x358);
  local_2c = iVar3;
  local_28 = iVar3;
  local_1c = iVar3;
  if (0 < *(int *)(param_1 + 0x100)) {
    do {
      local_18 = *(int *)(param_1 + 0x10c) + *(int *)(param_1 + 0x104) * local_30 * 0xc;
      local_20 = 0;
      if (0 < *(int *)(param_1 + 0x110)) {
        local_24 = 0;
        do {
          local_14 = local_24 + *(int *)(param_1 + 0x114);
          piVar1 = (int *)(*(int *)(local_14 + 0x18) * 0xc + local_18);
          local_48 = (float)*piVar1 * _DAT_0059c064;
          local_44 = (float)piVar1[1] * _DAT_0059c064;
          local_40 = (float)piVar1[2] * _DAT_0059c064;
          piVar1 = (int *)(*(int *)(local_14 + 0x24) * 0xc + local_18);
          local_54 = (float)*piVar1 * _DAT_0059c064;
          local_50 = (float)piVar1[1] * _DAT_0059c064;
          local_4c = (float)piVar1[2] * _DAT_0059c064;
          pfVar2 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                      (local_28,local_3c,&local_48);
          if (&local_48 != pfVar2) {
            local_48 = *pfVar2;
            local_44 = pfVar2[1];
            local_40 = pfVar2[2];
          }
          pfVar2 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                      (local_2c,local_78,&local_54);
          if (&local_54 != pfVar2) {
            local_54 = *pfVar2;
            local_50 = pfVar2[1];
            local_4c = pfVar2[2];
          }
          iVar3 = 2;
          if (2 < *(int *)(local_14 + 4)) {
            iVar5 = local_14 + 0x18;
            do {
              piVar1 = (int *)(*(int *)(iVar5 + 0x18) * 0xc + local_18);
              local_60 = (float)*piVar1 * _DAT_0059c064;
              local_5c = (float)piVar1[1] * _DAT_0059c064;
              local_58 = (float)piVar1[2] * _DAT_0059c064;
              pfVar2 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                          (local_1c,local_6c,&local_60);
              if (&local_60 != pfVar2) {
                local_60 = *pfVar2;
                local_5c = pfVar2[1];
                local_58 = pfVar2[2];
              }
              core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                        (iVar4,&local_48,&local_54,&local_60);
              iVar4 = iVar4 + 0x38;
              if (&local_54 != &local_60) {
                local_54 = local_60;
                local_50 = local_5c;
                local_4c = local_58;
              }
              iVar3 = iVar3 + 1;
              iVar5 = iVar5 + 0xc;
            } while (iVar3 < *(int *)(local_14 + 4));
          }
          local_24 = local_24 + 0x48;
          local_20 = local_20 + 1;
        } while (local_20 < *(int *)(param_1 + 0x110));
      }
      local_30 = local_30 + 1;
    } while (local_30 < *(int *)(param_1 + 0x100));
  }
  return;
}
