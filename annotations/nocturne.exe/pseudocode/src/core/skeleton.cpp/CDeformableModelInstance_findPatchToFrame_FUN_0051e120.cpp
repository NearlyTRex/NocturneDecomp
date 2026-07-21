// Name: core_skeleton.cpp_CDeformableModelInstance_findPatchToFrame_FUN_0051e120
// Address: 0051e120
// Address Range: [[0051e120, 0051e343]]
// Convention: unknown
// Signature: int core_skeleton_cpp_CDeformableModelInstance_findPatchToFrame_FUN_0051e120(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

int core_skeleton_cpp_CDeformableModelInstance_findPatchToFrame_FUN_0051e120(uint param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  byte *puVar2;
  int iVar3;
  byte *puVar4;
  int iVar5;
  byte local_3598 [2012];
  byte local_2dbc [4800];
  byte local_1afc [2012];
  byte local_1320 [4800];
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
  float local_38;
  float local_34;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  iVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890(param_1);
  local_20 = *(int *)(param_4 * 0x54c + 0x9cc + iVar1);
  iVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(param_1);
  iVar1 = *(int *)(iVar1 + 0x28558);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_0051e350
            (param_1,param_2,param_3,local_1afc);
  iVar5 = 0;
  core_skeleton_cpp_computeBoneWorldMatrices_FUN_0051f1d0(local_1afc,param_1);
  local_24 = -1;
  local_1c = 1e+30;
  if (0 < local_20) {
    do {
      local_14 = iVar5;
      core_skeleton_cpp_CDeformableModelInstance_computeBoneTransformsForFrame_FUN_0051e350
                (param_1,param_4,(float)iVar5,local_3598);
      core_skeleton_cpp_computeBoneWorldMatrices_FUN_0051f1d0(local_3598,param_1);
      iVar3 = 0;
      local_18 = 0.0;
      if (0 < iVar1) {
        local_18 = 0.0;
        puVar2 = local_2dbc;
        puVar4 = local_1320;
        do {
          local_54 = *(float *)(puVar2 + 0xc);
          local_50 = *(float *)(puVar2 + 0x1c);
          local_4c = *(float *)(puVar2 + 0x2c);
          local_60 = *(float *)(puVar4 + 0xc);
          local_5c = *(float *)(puVar4 + 0x1c);
          local_58 = *(float *)(puVar4 + 0x2c);
          puVar4 = puVar4 + 0x30;
          puVar2 = puVar2 + 0x30;
          iVar3 = iVar3 + 1;
          local_18 = (local_58 - local_4c) * (local_58 - local_4c) +
                     (local_5c - local_50) * (local_5c - local_50) +
                     (local_60 - local_54) * (local_60 - local_54) + local_18;
          local_48 = local_54;
          local_44 = local_50;
          local_40 = local_4c;
          local_3c = local_60;
          local_38 = local_5c;
          local_34 = local_58;
        } while (iVar3 < iVar1);
      }
      if (local_18 < local_1c) {
        local_1c = local_18;
        local_24 = iVar5;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_20);
  }
  return local_24;
}
