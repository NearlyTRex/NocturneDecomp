// Name: core_tawiscar.cpp_FUN_00593e80
// Address: 00593e80
// Address Range: [[00593e80, 00593ff2]]
// Convention: unknown
// Signature: void core_tawiscar_cpp_FUN_00593e80(CEnemy *param_1)

#include "nocturne.h"

void core_tawiscar_cpp_FUN_00593e80(CEnemy *param_1)

{
  CSkeleton *this_ptr;
  int iVar1;
  uint uVar2;
  SMotion *pSVar3;
  
  if (*(int *)&param_1->field_0x3268 == 0) {
    *(uint *)&param_1->field_0xce5c = 0x41700000;
    *(uint *)&param_1->field_0xce60 = 0x41200000;
    *(uint *)&param_1->field_0x2538 = 0x42c80000;
  }
  core_skeleton_cpp_FUN_0054e6b0((CDeformableModelInstance *)&param_1->field_0x158);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                       ((CDeformableModelInstance *)&param_1->field_0x158);
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 Spine3",1);
  *(int *)&param_1[1].field_0x4 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 L Finger1",1);
  *(int *)&param_1[1].field_0x8 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 R Finger1",1);
  *(int *)&param_1[1].field_0xc = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01jaw2",1);
  *(int *)&param_1[1].field_0x10 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 Head",1);
  *(int *)&param_1[1].field_0x14 = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_00489110(param_1);
  *(uint *)&param_1->field_0xfc = *(uint *)&param_1[1].field_0x18;
  uVar2 = core_actor_cpp_FUN_0040ce40(0,0x3f800000);
  iVar1 = *(int *)(param_1 + 1);
  *(uint *)&param_1[1].field_0x44 = uVar2;
  if (iVar1 == 0) {
    *(uint *)&param_1->field_0x3270 = 0x3fc00000;
  }
  *(uint *)&param_1[1].field_0x1c = 0;
  uVar2 = core_actor_cpp_FUN_0040ce40(0x41200000,0x41f00000);
  *(uint *)&param_1[1].field_0x24 = 0;
  *(uint *)&param_1[1].field_0x28 = 0;
  *(uint *)&param_1[1].field_0x20 = uVar2;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)&param_1->field_0x158);
  if (*(int *)(pSVar3 + 0x24) == 0xd) {
    *(uint *)&param_1->field_0x2540 = 0;
    return;
  }
  *(uint *)&param_1->field_0x2540 = 2;
  return;
}
