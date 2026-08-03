// Name: core_smiley.cpp_CSmiley_setup_FUN_0051fd90
// Address: 0051fd90
// Address Range: [[0051fd90, 0052008f]]
// Convention: __cdecl
// Signature: void __cdecl core_smiley_cpp_CSmiley_setup_FUN_0051fd90(CSmiley *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_smiley_cpp_CSmiley_setup_FUN_0051fd90(CSmiley *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  CDeformableModel *this_ptr_02;
  int iVar1;
  
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr_00);
  _DAT_02da8a74 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 Head",1);
  _DAT_02da8a80 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L ForeArm",1);
  _DAT_02da8a84 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R ForeArm",1);
  _DAT_02da8a88 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_02da8a8c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_02da8a90 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L Foot",1);
  _DAT_02da8a94 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R Foot",1);
  _DAT_02da8a78 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L Hand",1);
  _DAT_02da8a7c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R Hand",1);
  _DAT_02da8a98 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 Spine",1);
  _DAT_02da8a9c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 Spine1",1);
  _DAT_02da8aa0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 Spine2",1);
  _DAT_02da8a74 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 Head",1);
  _DAT_02da8a88 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_02da8a8c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_02da8a98 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 Spine",1);
  _DAT_02da8aa0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 Spine2",1);
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"larm01",1);
  this_ptr->part_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"l4arm01",1);
  this_ptr->part_indices[1] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"rarm01",1);
  this_ptr->part_indices[2] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"r4arm01",1);
  this_ptr->part_indices[3] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"rthigh01",1);
  this_ptr->part_indices[4] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"rshin01",1);
  this_ptr->part_indices[5] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"lthigh01",1);
  this_ptr->part_indices[6] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"lshin01",1);
  this_ptr->part_indices[7] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"ass01",1);
  this_ptr->part_indices[8] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"torso01",1);
  this_ptr->part_indices[9] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
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
  (this_ptr->base).base.show_in_editor = 0;
  return;
}
