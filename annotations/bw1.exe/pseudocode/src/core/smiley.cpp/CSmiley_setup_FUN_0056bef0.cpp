// Name: core_smiley.cpp_CSmiley_setup_FUN_0056bef0
// Address: 0056bef0
// Address Range: [[0056bef0, 0056c1ef]]
// Convention: __cdecl
// Signature: void __cdecl core_smiley_cpp_CSmiley_setup_FUN_0056bef0(CSmiley *this_ptr)

#include "nocturne.h"

void __cdecl core_smiley_cpp_CSmiley_setup_FUN_0056bef0(CSmiley *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  CDeformableModel *this_ptr_02;
  int iVar1;
  
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr_00);
  g_INT_ARRAY_02c5fcd8[0] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Head",1);
  g_INT_ARRAY_02c5fcd8[3] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L ForeArm",1);
  g_INT_ARRAY_02c5fcd8[4] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R ForeArm",1);
  g_INT_ARRAY_02c5fcd8[5] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L UpperArm",1);
  g_INT_ARRAY_02c5fcd8[6] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R UpperArm",1);
  g_INT_ARRAY_02c5fcd8[7] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Foot",1);
  g_INT_ARRAY_02c5fcd8[8] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Foot",1);
  g_INT_ARRAY_02c5fcd8[1] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Hand",1);
  g_INT_ARRAY_02c5fcd8[2] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Hand",1);
  g_INT_ARRAY_02c5fcd8[9] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine",1);
  g_INT_ARRAY_02c5fcd8[10] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine1",1);
  g_INT_ARRAY_02c5fcd8[0xb] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine2",1);
  g_INT_ARRAY_02c5fcd8[0] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Head",1);
  g_INT_ARRAY_02c5fcd8[5] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L UpperArm",1);
  g_INT_ARRAY_02c5fcd8[6] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R UpperArm",1);
  g_INT_ARRAY_02c5fcd8[9] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine",1);
  g_INT_ARRAY_02c5fcd8[0xb] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine2",1);
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"larm01",1);
  this_ptr->part_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"l4arm01",1);
  this_ptr->part_indices[1] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"rarm01",1);
  this_ptr->part_indices[2] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"r4arm01",1);
  this_ptr->part_indices[3] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"rthigh01",1);
  this_ptr->part_indices[4] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"rshin01",1);
  this_ptr->part_indices[5] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"lthigh01",1);
  this_ptr->part_indices[6] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"lshin01",1);
  this_ptr->part_indices[7] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"ass01",1);
  this_ptr->part_indices[8] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"torso01",1);
  this_ptr->part_indices[9] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"head01",1);
  this_ptr->attack_hit_count = 0;
  this_ptr->part_indices[10] = iVar1;
  this_ptr->dismember_hit_count = 0;
  this_ptr->model_variant = 1;
  iVar1 = _stricmp
                    ((this_ptr->base).base.model.model_name,"smiley2.dfm");
  if (iVar1 == 0) {
    this_ptr->model_variant = 2;
  }
  iVar1 = _stricmp
                    ((this_ptr->base).base.model.model_name,"smiley3.dfm");
  if (iVar1 != 0) {
    return;
  }
  this_ptr->model_variant = 3;
  (this_ptr->base).base.gun_flame_ignitable = 0;
  return;
}
