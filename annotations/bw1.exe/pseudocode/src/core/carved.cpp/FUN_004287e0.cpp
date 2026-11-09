// Name: core_carved.cpp_FUN_004287e0
// Address: 004287e0
// Address Range: [[004287e0, 00428a7e]]
// Convention: unknown
// Signature: void core_carved_cpp_FUN_004287e0(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_carved_cpp_FUN_004287e0(CEnemy *param_1)

{
  int iVar1;
  CSkeleton *this_ptr;
  CDeformableModel *this_ptr_00;
  
  core_skeleton_cpp_FUN_00569b20((CDeformableModelInstance *)&param_1->field_0x158);
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,"COMBATMODEHARD");
  if (iVar1 == 0) {
    *(uint *)&param_1[1].field_0x88 = 0x3f400000;
  }
  else {
    *(uint *)&param_1[1].field_0x88 = 0x3f800000;
  }
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                       ((CDeformableModelInstance *)&param_1->field_0x158);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Head",1);
  *(int *)&param_1[1].field_0x24 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Forearm",1);
  *(int *)&param_1[1].field_0x30 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R ForeArm",1);
  *(int *)&param_1[1].field_0x34 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L UpperArm",1);
  *(int *)&param_1[1].field_0x38 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R UpperArm",1);
  *(int *)&param_1[1].field_0x3c = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Foot",1);
  *(int *)&param_1[1].field_0x40 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Foot",1);
  *(int *)&param_1[1].field_0x44 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Hand",1);
  *(int *)&param_1[1].field_0x28 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Hand",1);
  *(int *)&param_1[1].field_0x2c = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Spine",1);
  *(int *)&param_1[1].field_0x48 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Spine2",1);
  *(int *)&param_1[1].field_0x4c = iVar1;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                          ((CDeformableModelInstance *)&param_1->field_0x158);
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"larm01",1);
  *(int *)&param_1[1].field_0x50 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"l4arm01",1);
  *(int *)&param_1[1].field_0x54 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"rarm01",1);
  *(int *)&param_1[1].field_0x58 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"r4arm01",0);
  *(int *)&param_1[1].field_0x5c = iVar1;
  if (iVar1 < 0) {
    *(uint *)&param_1[1].field_0x5c = 0x3b;
  }
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"waist01",0);
  *(int *)&param_1[1].field_0x60 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"torso01",1);
  *(int *)&param_1[1].field_0x64 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"head01",1);
  *(uint *)&param_1->field_0x2384 = 0;
  *(int *)&param_1[1].field_0x68 = iVar1;
  *(uint *)&param_1->field_0x25a8 = *(uint *)&param_1[1].field_0x28;
  *(uint *)&param_1->field_0x25ac = *(uint *)&param_1[1].field_0x54;
  *(uint *)&param_1->field_0x2620 = *(uint *)&param_1[1].field_0x2c;
  *(uint *)&param_1->field_0x2624 = *(uint *)&param_1[1].field_0x5c;
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(param_1);
  if ((-1 < *(int *)&param_1[1].field_0x60) && (*(float *)&param_1->field_0x3000 < 0.0)) {
    *(float *)&param_1->field_0x3000 = *(float *)&param_1->field_0x2490 + (float)_DAT_005d52d5;
  }
  *(uint *)&param_1[1].field_0x20 = 0;
  *(uint *)&param_1[1].field_0x74 = 0;
  *(uint *)&param_1[1].field_0x78 = 0;
  *(uint *)&param_1[1].field_0x70 = 0;
  return;
}
