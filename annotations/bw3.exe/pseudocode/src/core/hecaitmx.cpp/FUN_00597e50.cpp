// Name: core_hecaitmx.cpp_FUN_00597e50
// Address: 00597e50
// Address Range: [[00597e50, 00597f1b]]
// Convention: unknown
// Signature: void core_hecaitmx_cpp_FUN_00597e50(CEnemy *param_1)

#include "nocturne.h"

void core_hecaitmx_cpp_FUN_00597e50(CEnemy *param_1)

{
  CSkeleton *this_ptr;
  int iVar1;
  
  core_skeleton_cpp_FUN_0054e6b0((CDeformableModelInstance *)&param_1->field_0x158);
  *(uint *)&param_1[1].field_0x14 = 0x3f800000;
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
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr,"Dummy05",1);
  *(uint *)&param_1[1].field_0x1c = 0;
  *(uint *)&param_1[1].field_0x20 = 0x10000;
  *(uint *)&param_1->field_0xfc = 1;
  *(uint *)&param_1->field_0xf8 = 0;
  *(int *)&param_1[1].field_0x10 = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_00489110(param_1);
  return;
}
