// Name: core_actor.cpp_CDemonActor_rayIntersect_FUN_0040a740
// Address: 0040a740
// Address Range: [[0040a740, 0040ab0a]]
// Convention: unknown
// Signature: float core_actor_cpp_CDemonActor_rayIntersect_FUN_0040a740(CDemonActor *param_1,CBoundingBox3D *param_2,float *param_3,undefined4 *param_4,SCollisionInfo *param_5,uint param_6,CBoundingBox3D *param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_actor_cpp_CDemonActor_rayIntersect_FUN_0040a740(CDemonActor *param_1,CBoundingBox3D *param_2,float *param_3,uint *param_4,SCollisionInfo *param_5,uint param_6,CBoundingBox3D *param_7)

{
  int iVar1;
  uint *puVar2;
  CKeyFramedModel *pCVar3;
  uint uVar4;
  CDeformableModelInstance *pCVar5;
  float local_a0;
  CBoundingBox3D local_9c;
  CBoundingBox3D local_84;
  CBoundingBox3D local_6c;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30 [2];
  float local_14;
  
  if (param_6 == 0) {
    return 2.0;
  }
  core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_0040a540(param_1,&local_9c,param_5,param_6);
  if (param_7 == (CBoundingBox3D *)0x0) {
    if (&local_6c != param_2) {
      local_6c.min.x = (param_2->min).x;
      local_6c.min.y = (param_2->min).y;
      local_6c.min.z = (param_2->min).z;
    }
    if ((CBoundingBox3D *)&local_6c.max != param_2) {
      local_6c.max.x = (param_2->min).x;
      local_6c.max.y = (param_2->min).y;
      local_6c.max.z = (param_2->min).z;
    }
    local_48.x = (param_2->min).x + *param_3;
    local_48.y = (param_2->min).y + param_3[1];
    local_48.z = (param_2->min).z + param_3[2];
    core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(&local_6c,&local_48);
    iVar1 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_0041dc20(&local_6c,&local_9c);
  }
  else {
    iVar1 = core_box_cpp_CBoundingBox3D_doesBoxIntersect_FUN_0041dc20(param_7,&local_9c);
  }
  if (iVar1 == 0) {
    return 2.0;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(param_1,&local_3c,&param_2->min);
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220();
  if (param_6 < 2) {
    if (param_6 == 1) {
      (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_84);
      local_a0 = (float)core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550();
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
      local_a0 = (*((param_1->vtable)._ub)->customRayIntersect)
                           (param_1,&local_3c,&local_54,local_30);
      local_14 = local_a0;
      goto LAB_0040a899;
    }
  }
  PTR_01cc4800 = "..\\core\\actor.cpp";
  INT_01cc4804 = 0x45d;
  core_main_c_FUN_004c8440();
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
    pCVar5 = param_5->deformable_model;
    if (pCVar5 == (CDeformableModelInstance *)0x0) {
      if (param_5->keyframed_model != (CKeyFramedModelInstance *)0x0) {
        pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                           (param_5->keyframed_model);
        local_a0 = (float)core_dmodel_cpp_CKeyFramedModel_intersectRay_FUN_00453990(pCVar3,pCVar5);
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
      core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(param_5->deformable_model)
      ;
      uVar4 = core_skeleton_cpp_CDeformableModel_findMaxWeightBone_FUN_0051b540();
      param_4[6] = uVar4;
      if (&stack0x00000000 != (byte *)0x268cf0c) {
        local_30[0].x = _DAT_0268cedc;
        local_30[0].y = _DAT_0268cee0;
        local_30[0].z = _DAT_0268cee4;
      }
    }
  }
  puVar2 = (uint *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200();
  if (param_4 != puVar2) {
    *param_4 = *puVar2;
    param_4[1] = puVar2[1];
    param_4[2] = puVar2[2];
  }
  return local_a0;
}
