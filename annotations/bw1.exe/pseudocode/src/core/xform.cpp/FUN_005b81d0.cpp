// Name: core_xform.cpp_FUN_005b81d0
// Address: 005b81d0
// Address Range: [[005b81d0, 005b83d9]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_005b81d0(CEnemy *param_1)

#include "nocturne.h"

void core_xform_cpp_FUN_005b81d0(CEnemy *param_1)

{
  CDeformableModelInstance *this_ptr;
  int iVar1;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  float fVar2;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20(&(param_1->base).model);
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,"COMBATMODEHARD");
  if (iVar1 == 0) {
    param_1[1].base.base.orient_matrix.m[1].y = 0.75;
  }
  else {
    param_1[1].base.base.orient_matrix.m[1].y = 1.0;
  }
  this_ptr = &(param_1->base).model;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine1",1);
  *(int *)param_1[1].base.base.actor_name = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Head",1);
  *(int *)(param_1[1].base.base.actor_name + 4) = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Pelvis",1);
  *(int *)(param_1[1].base.base.actor_name + 8) = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine",1);
  *(int *)(param_1[1].base.base.actor_name + 0xc) = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine1",1);
  *(int *)(param_1[1].base.base.actor_name + 0x10) = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine2",1);
  *(int *)(param_1[1].base.base.actor_name + 0x14) = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Head",1);
  *(int *)(param_1[1].base.base.actor_name + 0x18) = iVar1;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(this_ptr);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_01,&DAT_005fa23b,1);
  *(int *)(param_1[1].base.base.actor_name + 0x1c) = iVar1;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                           (this_ptr_01,&DAT_005fa240,1);
  param_1[1].base.base.location.position.x = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                           (this_ptr_01,"l4arm",1);
  param_1[1].base.base.location.position.y = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                           (this_ptr_01,"r4arm",1);
  param_1[1].base.base.location.position.z = fVar2;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_01,"waist",1);
  param_1[1].base.base.location.area_id = iVar1;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                           (this_ptr_01,"torso",1);
  param_1[1].base.base.orient.vec.x = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                           (this_ptr_01,&DAT_005fa25d,1);
  param_1[1].base.base.orient.vec.y = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                           (this_ptr_01,"rshin",1);
  param_1[1].base.base.orient.vec.z = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                           (this_ptr_01,"lshin",1);
  param_1[1].base.base.orient_matrix.m[0].x = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                           (this_ptr_01,"rthigh",1);
  param_1[1].base.base.orient_matrix.m[0].y = fVar2;
  fVar2 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                           (this_ptr_01,"lthigh",1);
  (param_1->base).model.part_data.visibility_flags[0x3b] = 0;
  param_1[1].base.base.orient_matrix.m[0].z = fVar2;
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(param_1);
  return;
}
