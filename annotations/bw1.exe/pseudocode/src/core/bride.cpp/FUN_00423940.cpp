// Name: core_bride.cpp_FUN_00423940
// Address: 00423940
// Address Range: [[00423940, 00423b69]]
// Convention: unknown
// Signature: void core_bride_cpp_FUN_00423940(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bride_cpp_FUN_00423940(CEnemy *param_1)

{
  byte *this_ptr;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar1;
  uint uVar2;
  
  this_ptr = &param_1->field_0x158;
  core_skeleton_cpp_FUN_00569b20((CDeformableModelInstance *)this_ptr);
  *(uint *)&param_1[1].field_0x24 = 0;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                          ((CDeformableModelInstance *)this_ptr);
  DAT_007c5388 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 Head",1);
  DAT_007c5394 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 L ForeArm",1);
  DAT_007c5398 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_007c53a4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Foot",1);
  _DAT_007c53a8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Foot",1);
  DAT_007c538c = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 L Hand",1);
  DAT_007c5390 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 R Hand",1);
  DAT_007c539c = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 L UpperArm",1);
  DAT_007c53a0 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 R UpperArm",1);
  DAT_007c53ac = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 Spine",1);
  _DAT_007c53b0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine2",1);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                          ((CDeformableModelInstance *)this_ptr);
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"lshoulderpiece",1);
  *(int *)(param_1 + 1) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"l4armpiece",1);
  *(int *)&param_1[1].field_0x4 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"rshoulderpiece",1);
  *(int *)&param_1[1].field_0x8 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"r4armpiece",1);
  *(int *)&param_1[1].field_0xc = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"lshinpiece",1);
  *(int *)&param_1[1].field_0x10 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"rshinpiece",1);
  *(int *)&param_1[1].field_0x14 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"torsopiece",1);
  *(int *)&param_1[1].field_0x18 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"lowerbodypiece",1);
  *(int *)&param_1[1].field_0x1c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"headpiece",1);
  *(int *)&param_1[1].field_0x20 = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(param_1);
  uVar2 = core_actor_cpp_FUN_0040cc00(0x40000000,0x41a00000);
  *(uint *)&param_1[1].field_0x2c = 0;
  *(uint *)&param_1[1].field_0x30 = 0;
  *(uint *)&param_1[1].field_0x28 = uVar2;
  return;
}
