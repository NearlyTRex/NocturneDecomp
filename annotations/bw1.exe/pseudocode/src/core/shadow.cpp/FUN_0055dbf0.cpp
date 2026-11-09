// Name: core_shadow.cpp_FUN_0055dbf0
// Address: 0055dbf0
// Address Range: [[0055dbf0, 0055ddf1]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_0055dbf0(CEnemy *param_1)

#include "nocturne.h"

void core_shadow_cpp_FUN_0055dbf0(CEnemy *param_1)

{
  int iVar1;
  CSkeleton *this_ptr;
  uint uVar2;
  
  core_skeleton_cpp_FUN_00569b20((CDeformableModelInstance *)&param_1->field_0x158);
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,"COMBATMODEHARD");
  if (iVar1 == 0) {
    *(uint *)&param_1[1].field_0xa8 = 0x3f400000;
  }
  else {
    *(uint *)&param_1[1].field_0xa8 = 0x3f800000;
  }
  *(uint *)&param_1[1].field_0x6c = 0;
  *(uint *)&param_1[1].field_0x94 = 0;
  iVar1 = _stricmp(&param_1->field_0x24a8,"SHADOWBEAST.DFM");
  if ((iVar1 == 0) ||
     (iVar1 = _stricmp
                        (&param_1->field_0x24a8,"WERE_HEADLESS.DFM"), iVar1 == 0)) {
    *(uint *)&param_1[1].field_0x6c = 1;
  }
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                       ((CDeformableModelInstance *)&param_1->field_0x158);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Pelvis",1);
  *(int *)&param_1[1].field_0x1c = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Spine2",1);
  *(int *)&param_1[1].field_0x20 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Head",1);
  *(int *)&param_1[1].field_0x24 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Spine2",1);
  *(int *)&param_1[1].field_0x4 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Finger1",1);
  *(int *)&param_1[1].field_0x8 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Finger1",1);
  *(int *)&param_1[1].field_0xc = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Head",1);
  *(int *)&param_1[1].field_0x10 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Foot",1);
  *(int *)&param_1[1].field_0x18 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Foot",1);
  *(int *)&param_1[1].field_0x14 = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(param_1);
  *(uint *)&param_1->field_0xfc = 1;
  *(uint *)&param_1->field_0xf8 = 0;
  if (*(int *)(param_1 + 1) == 0) {
    *(uint *)&param_1->field_0x2ff0 = 0x3fc00000;
  }
  *(uint *)&param_1[1].field_0x34 = 0;
  *(uint *)&param_1[1].field_0x38 = 0;
  *(uint *)&param_1[1].field_0x3c = 0;
  *(uint *)&param_1[1].field_0x40 = 0;
  *(uint *)&param_1[1].field_0x4c = 0;
  uVar2 = core_actor_cpp_FUN_0040cc00(0x41200000,0x41f00000);
  *(uint *)&param_1[1].field_0x30 = uVar2;
  return;
}
