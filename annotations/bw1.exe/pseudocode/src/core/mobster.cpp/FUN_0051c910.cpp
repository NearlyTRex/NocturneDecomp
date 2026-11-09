// Name: core_mobster.cpp_FUN_0051c910
// Address: 0051c910
// Address Range: [[0051c910, 0051cc1f]]
// Convention: unknown
// Signature: void core_mobster_cpp_FUN_0051c910(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mobster_cpp_FUN_0051c910(CEnemy *param_1)

{
  byte *this_ptr;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar1;
  
  this_ptr = &param_1->field_0x158;
  core_skeleton_cpp_FUN_00569b20((CDeformableModelInstance *)this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                          ((CDeformableModelInstance *)this_ptr);
  _DAT_01d33c00 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Head",1);
  _DAT_01d33c0c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_01d33c10 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_01d33c14 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01d33c18 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01d33c1c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Foot",1);
  _DAT_01d33c20 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Foot",1);
  _DAT_01d33c04 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Hand",1);
  _DAT_01d33c08 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Hand",1);
  _DAT_01d33c24 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine",1);
  _DAT_01d33c28 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine1",1);
  _DAT_01d33c2c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine2",1);
  _DAT_01d33c00 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Head",1);
  _DAT_01d33c14 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01d33c18 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01d33c24 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine",1);
  _DAT_01d33c2c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine2",1);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                          ((CDeformableModelInstance *)this_ptr);
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"larm01",1);
  *(int *)&param_1[1].field_0xa4 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"l4arm01",1);
  *(int *)&param_1[1].field_0xa8 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"rarm01",1);
  *(int *)&param_1[1].field_0xac = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"r4arm01",1);
  *(int *)&param_1[1].field_0xb0 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"rthigh01",1);
  *(int *)&param_1[1].field_0xb4 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"rshin01",1);
  *(int *)&param_1[1].field_0xb8 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"lthigh01",1);
  *(int *)&param_1[1].field_0xbc = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"lshin01",1);
  *(int *)&param_1[1].field_0xc0 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"waist01",1);
  *(int *)&param_1[1].field_0xc4 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"torso01",1);
  *(int *)&param_1[1].field_0xc8 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_01,"head01",1);
  *(int *)&param_1[1].field_0xcc = iVar1;
  *(int *)&param_1->field_0x25a8 = _DAT_01d33c04;
  *(uint *)&param_1->field_0x25ac = *(uint *)&param_1[1].field_0xa8;
  *(int *)&param_1->field_0x2620 = _DAT_01d33c08;
  *(uint *)&param_1->field_0x2624 = *(uint *)&param_1[1].field_0xb0;
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(param_1);
  *(uint *)&param_1[1].field_0xd0 = 0;
  *(uint *)&param_1[1].field_0xd4 = 0;
  if (*(int *)&param_1[1].field_0x20 != 0) {
    *(uint *)&param_1->field_0xc264 = 1;
  }
  *(uint *)&param_1[1].field_0x98 = 0;
  *(uint *)&param_1[1].field_0x9c = 0;
  *(uint *)&param_1[1].field_0xa0 = 0;
  *(uint *)&param_1[1].field_0x94 = 0;
  return;
}
