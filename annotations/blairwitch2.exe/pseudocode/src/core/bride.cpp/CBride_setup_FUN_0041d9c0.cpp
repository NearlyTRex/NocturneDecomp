// Name: core_bride.cpp_CBride_setup_FUN_0041d9c0
// Address: 0041d9c0
// Address Range: [[0041d9c0, 0041dbdf]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_CBride_setup_FUN_0041d9c0(CBride *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bride_cpp_CBride_setup_FUN_0041d9c0(CBride *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  CDeformableModel *this_ptr_02;
  int iVar1;
  float fVar2;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr_00);
  DAT_007bccdc = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 Head",1);
  DAT_007bcce8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 L ForeArm",1);
  DAT_007bccec = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 R ForeArm",1);
  _DAT_007bccf8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Foot",1);
  _DAT_007bccfc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Foot",1);
  DAT_007bcce0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 L Hand",1);
  DAT_007bcce4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 R Hand",1);
  DAT_007bccf0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 L UpperArm",1);
  DAT_007bccf4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 R UpperArm",1);
  DAT_007bcd00 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 Spine",1);
  _DAT_007bcd04 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine2",1);
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"lshoulderpiece",1);
  this_ptr->part_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"l4armpiece",1);
  this_ptr->part_indices[1] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"rshoulderpiece",1);
  this_ptr->part_indices[2] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"r4armpiece",1);
  this_ptr->part_indices[3] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"lshinpiece",1);
  this_ptr->part_indices[4] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"rshinpiece",1);
  this_ptr->part_indices[5] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"torsopiece",1);
  this_ptr->part_indices[6] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"lowerbodypiece",1);
  this_ptr->part_indices[7] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"headpiece",1);
  this_ptr->part_indices[8] = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(&this_ptr->base);
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(2.0,20.0);
  this_ptr->sfx_handles[0] = 0;
  this_ptr->sfx_handles[1] = 0;
  this_ptr->action_timer = fVar2;
  return;
}
