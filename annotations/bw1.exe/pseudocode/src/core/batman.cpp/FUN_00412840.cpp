// Name: core_batman.cpp_FUN_00412840
// Address: 00412840
// Address Range: [[00412840, 00412b1b]]
// Convention: unknown
// Signature: void core_batman_cpp_FUN_00412840(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_batman_cpp_FUN_00412840(CEnemy *param_1)

{
  byte *this_ptr;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar1;
  
  *(uint *)(param_1 + 1) = 0;
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(param_1);
  this_ptr = &param_1->field_0x158;
  core_skeleton_cpp_FUN_00569b20((CDeformableModelInstance *)this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                          ((CDeformableModelInstance *)this_ptr);
  DAT_007c37b8 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 Head",1);
  _DAT_007c37c4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_007c37c8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_007c37cc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_007c37d0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_007c37d4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Foot",1);
  _DAT_007c37d8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Foot",1);
  _DAT_007c37bc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Hand",1);
  DAT_007c37c0 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 R Hand",1);
  DAT_007c37dc = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 Spine",1);
  _DAT_007c37e0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine1",1);
  DAT_007c37e4 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 Spine2",1);
  DAT_007c37b8 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 Head",1);
  _DAT_007c37cc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_007c37d0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R UpperArm",1);
  DAT_007c37dc = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 Spine",1);
  DAT_007c37e4 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 Spine2",1);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                          ((CDeformableModelInstance *)this_ptr);
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"head01",1);
  *(int *)&param_1[1].field_0x68 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"torso01",1);
  *(int *)&param_1[1].field_0x6c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"larm01",1);
  *(int *)&param_1[1].field_0x70 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"l4arm01",1);
  *(int *)&param_1[1].field_0x74 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"rarm01",1);
  *(int *)&param_1[1].field_0x78 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"r4arm01",1);
  *(int *)&param_1[1].field_0x7c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"ass01",1);
  *(int *)&param_1[1].field_0x80 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"tail01",1);
  *(int *)&param_1[1].field_0x84 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"lthigh01",1);
  *(int *)&param_1[1].field_0x88 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"lshin01",1);
  *(int *)&param_1[1].field_0x8c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"rthigh01",1);
  *(int *)&param_1[1].field_0x90 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"rshin01",1);
  *(int *)&param_1[1].field_0x94 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"lfoot01",1);
  *(int *)&param_1[1].field_0x98 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"rfoot01",1);
  *(int *)&param_1[1].field_0x9c = iVar1;
  return;
}
