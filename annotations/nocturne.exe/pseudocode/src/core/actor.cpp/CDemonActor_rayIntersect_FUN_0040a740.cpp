// Name: core_actor.cpp_CDemonActor_rayIntersect_FUN_0040a740
// Address: 0040a740
// Address Range: [[0040a740, 0040ab0a]]
// Convention: unknown
// Signature: float core_actor_cpp_CDemonActor_rayIntersect_FUN_0040a740(int param_1,float *param_2,float *param_3,undefined4 *param_4,int param_5,uint param_6,int param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_actor_cpp_CDemonActor_rayIntersect_FUN_0040a740(int param_1,float *param_2,float *param_3,uint *param_4,int param_5,uint param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  float local_a0;
  byte local_84 [24];
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_48;
  float local_44;
  float local_40;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  float local_14;
  
  if (param_6 == 0) {
    return 2.0;
  }
  core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_0040a540(param_1);
  if (param_7 == 0) {
    if (&local_6c != param_2) {
      local_6c = *param_2;
      local_68 = param_2[1];
      local_64 = param_2[2];
    }
    if (&local_60 != param_2) {
      local_60 = *param_2;
      local_5c = param_2[1];
      local_58 = param_2[2];
    }
    local_48 = *param_2 + *param_3;
    local_44 = param_2[1] + param_3[1];
    local_40 = param_2[2] + param_3[2];
    core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00();
    iVar1 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_0041dc20();
  }
  else {
    iVar1 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_0041dc20();
  }
  if (iVar1 == 0) {
    return 2.0;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290();
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220();
  if (param_6 < 2) {
    if (param_6 == 1) {
      uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_84);
      local_a0 = (float)core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550(uVar2);
      local_14 = local_a0;
      goto LAB_0040a899;
    }
  }
  else {
    if (param_6 < 3) {
      local_a0 = (float)core_actor_cpp_rayCylinderIntersect_FUN_00409860(param_5);
      local_14 = local_a0;
      goto LAB_0040a899;
    }
    if (param_6 == 3) {
      local_a0 = (float)(**(code **)(*(int *)(param_1 + 0x14c) + 0xb0))(param_1);
      local_14 = local_a0;
      goto LAB_0040a899;
    }
  }
  _DAT_01cc4800 = "..\\core\\actor.cpp";
  _DAT_01cc4804 = 0x45d;
  FUN_004c8440();
LAB_0040a899:
  if ((local_a0 < 0.0) || (1.0 < local_a0)) {
    return 2.0;
  }
  param_4[4] = 0xffffffff;
  param_4[5] = 0xffffffff;
  param_4[6] = 0xffffffff;
  iVar1 = 0x01E57284;
  param_4[3] = 0xffffffff;
  if (*(int *)(iVar1 + 0x15f2f4) == 0) {
    if (*(int *)(param_5 + 0x20) == 0) {
      if (*(int *)(param_5 + 0x24) != 0) {
        uVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                          (*(uint *)(param_5 + 0x24),0);
        local_a0 = (float)core_dmodel_cpp_CKeyFramedModel_intersectRay_FUN_00453990(uVar2);
        if (local_a0 < 0.0) {
          return 2.0;
        }
        local_14 = local_a0;
        if (1.0 < local_a0) {
          return 2.0;
        }
      }
    }
    else {
      local_a0 = (float)core_skeleton_cpp_CDeformableModelInstance_rayIntersect_FUN_0051e960();
      if (local_a0 < 0.0) {
        return 2.0;
      }
      if (1.0 < local_a0) {
        return 2.0;
      }
      param_4[3] = _DAT_0268ced8;
      param_4[4] = _DAT_0268cee8;
      param_4[5] = _DAT_0268ceec;
      local_14 = local_a0;
      core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020();
      uVar2 = core_skeleton_cpp_CDeformableModel_findMaxWeightBone_FUN_0051b540();
      param_4[6] = uVar2;
      if (&stack0x00000000 != (byte *)0x268cf0c) {
        local_30 = _DAT_0268cedc;
        uStack_2c = _DAT_0268cee0;
        uStack_28 = _DAT_0268cee4;
      }
    }
  }
  puVar3 = (uint *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200();
  if (param_4 != puVar3) {
    *param_4 = *puVar3;
    param_4[1] = puVar3[1];
    param_4[2] = puVar3[2];
  }
  return local_a0;
}
