// Name: core_shadowsc.cpp_FUN_00560510
// Address: 00560510
// Address Range: [[00560510, 0056060c]]
// Convention: unknown
// Signature: void core_shadowsc_cpp_FUN_00560510(CEnemy *param_1)

#include "nocturne.h"

void core_shadowsc_cpp_FUN_00560510(CEnemy *param_1)

{
  int iVar1;
  CSkeleton *this_ptr;
  
  core_skeleton_cpp_FUN_00569b20((CDeformableModelInstance *)&param_1->field_0x158);
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,"COMBATMODEHARD");
  if (iVar1 == 0) {
    *(uint *)&param_1[1].field_0x20 = 0x3f400000;
  }
  else {
    *(uint *)&param_1[1].field_0x20 = 0x3f800000;
  }
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                       ((CDeformableModelInstance *)&param_1->field_0x158);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Spine1",1);
  *(int *)(param_1 + 1) = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Head",1);
  *(int *)&param_1[1].field_0x4 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Finger0",1);
  *(int *)&param_1[1].field_0x8 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Finger0",1);
  *(int *)&param_1[1].field_0xc = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Dummy05",1);
  *(uint *)&param_1[1].field_0x24 = 0;
  *(uint *)&param_1[1].field_0x28 = 0;
  *(uint *)&param_1[1].field_0x2c = 0;
  *(uint *)&param_1->field_0xfc = 1;
  *(int *)&param_1[1].field_0x10 = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(param_1);
  return;
}
