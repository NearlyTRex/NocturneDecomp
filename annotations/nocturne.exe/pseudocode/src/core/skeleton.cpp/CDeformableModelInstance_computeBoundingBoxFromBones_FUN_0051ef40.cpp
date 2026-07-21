// Name: core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40
// Address: 0051ef40
// Address Range: [[0051ef40, 0051f020]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40(int param_1,undefined4 param_2)

#include "nocturne.h"

uint __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte local_3c [12];
  byte local_30 [12];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(param_1);
  iVar2 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00518130(iVar1);
  local_24 = *(int *)(iVar2 + 0x28558);
  core_box_cpp_CBoundingBox3D_reset_FUN_0041dbc0(param_2);
  local_1c = 0;
  if (0 < local_24) {
    local_20 = iVar1 + 0x1c0c;
    local_14 = param_1 + 0xe80;
    local_18 = iVar1;
    do {
      iVar2 = local_14;
      iVar1 = local_20;
      if (*(int *)(local_18 + 0x256c) == 2) {
        iVar4 = 0;
        do {
          uVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70(iVar1,local_3c,iVar4,iVar2);
          uVar3 = core_xform_cpp_transformVector3x4_FUN_0055a8b0(local_30,uVar3);
          iVar4 = iVar4 + 1;
          core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(param_2,uVar3);
        } while (iVar4 < 8);
      }
      local_18 = local_18 + 4;
      local_20 = local_20 + 0x18;
      local_14 = local_14 + 0x30;
      local_1c = local_1c + 1;
    } while (local_1c < local_24);
  }
  return param_2;
}
