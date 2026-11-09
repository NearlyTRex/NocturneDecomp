// Name: core_xform.cpp_FUN_005b81d0
// Address: 005b81d0
// Address Range: [[005b81d0, 005b83d9]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_005b81d0(CEnemy *param_1)

#include "nocturne.h"

void core_xform_cpp_FUN_005b81d0(CEnemy *param_1)

{
  int iVar1;
  CSkeleton *this_ptr;
  CDeformableModel *this_ptr_00;
  
  core_skeleton_cpp_FUN_00569b20((CDeformableModelInstance *)&param_1->field_0x158);
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,"COMBATMODEHARD");
  if (iVar1 == 0) {
    *(uint *)&param_1[1].field_0x4c = 0x3f400000;
  }
  else {
    *(uint *)&param_1[1].field_0x4c = 0x3f800000;
  }
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                       ((CDeformableModelInstance *)&param_1->field_0x158);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Spine1",1);
  *(int *)(param_1 + 1) = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Head",1);
  *(int *)&param_1[1].field_0x4 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Pelvis",1);
  *(int *)&param_1[1].field_0x8 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Spine",1);
  *(int *)&param_1[1].field_0xc = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Spine1",1);
  *(int *)&param_1[1].field_0x10 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Spine2",1);
  *(int *)&param_1[1].field_0x14 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Head",1);
  *(int *)&param_1[1].field_0x18 = iVar1;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                          ((CDeformableModelInstance *)&param_1->field_0x158);
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,&DAT_005fa23b,1);
  *(int *)&param_1[1].field_0x1c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,&DAT_005fa240,1);
  *(int *)&param_1[1].field_0x20 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"l4arm",1);
  *(int *)&param_1[1].field_0x24 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"r4arm",1);
  *(int *)&param_1[1].field_0x28 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"waist",1);
  *(int *)&param_1[1].field_0x2c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"torso",1);
  *(int *)&param_1[1].field_0x30 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,&DAT_005fa25d,1);
  *(int *)&param_1[1].field_0x34 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"rshin",1);
  *(int *)&param_1[1].field_0x38 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"lshin",1);
  *(int *)&param_1[1].field_0x3c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"rthigh",1);
  *(int *)&param_1[1].field_0x40 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"lthigh",1);
  *(uint *)&param_1->field_0x2384 = 0;
  *(int *)&param_1[1].field_0x44 = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(param_1);
  return;
}
