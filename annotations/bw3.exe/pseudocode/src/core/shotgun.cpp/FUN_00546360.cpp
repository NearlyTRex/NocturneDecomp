// Name: core_shotgun.cpp_FUN_00546360
// Address: 00546360
// Address Range: [[00546360, 005463e3]]
// Convention: unknown
// Signature: void core_shotgun_cpp_FUN_00546360(CEnemy *param_1)

#include "nocturne.h"

void core_shotgun_cpp_FUN_00546360(CEnemy *param_1)

{
  CSkeleton *this_ptr;
  int iVar1;
  
  core_skeleton_cpp_FUN_0054e6b0((CDeformableModelInstance *)&param_1->field_0x158);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                       ((CDeformableModelInstance *)&param_1->field_0x158);
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 Spine1",1);
  *(int *)(param_1 + 1) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 Head",1);
  *(int *)&param_1[1].field_0x4 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 R Finger0",1);
  *(int *)&param_1[1].field_0x8 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 L Finger0",1);
  *(int *)&param_1[1].field_0xc = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_00489110(param_1);
  return;
}
