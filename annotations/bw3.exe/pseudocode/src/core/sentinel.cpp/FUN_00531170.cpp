// Name: core_sentinel.cpp_FUN_00531170
// Address: 00531170
// Address Range: [[00531170, 0053131f]]
// Convention: unknown
// Signature: void core_sentinel_cpp_FUN_00531170(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_sentinel_cpp_FUN_00531170(CEnemy *param_1)

{
  byte *this_ptr;
  CSkeleton *this_ptr_00;
  
  core_enemy_cpp_CEnemy_setup_FUN_00489110(param_1);
  this_ptr = &param_1->field_0x158;
  core_skeleton_cpp_FUN_0054e6b0((CDeformableModelInstance *)this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                          ((CDeformableModelInstance *)this_ptr);
  _DAT_01ed785c = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Head",1);
  _DAT_01ed7868 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_01ed786c = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_01ed7870 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01ed7874 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01ed7878 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L Foot",1);
  _DAT_01ed787c = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R Foot",1);
  _DAT_01ed7860 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L Hand",1);
  _DAT_01ed7864 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R Hand",1);
  _DAT_01ed7880 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine",1);
  _DAT_01ed7884 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine1",1);
  _DAT_01ed7888 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine2",1);
  _DAT_01ed785c = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Head",1);
  _DAT_01ed7870 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01ed7874 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01ed7880 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine",1);
  _DAT_01ed7888 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine2",1);
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
            ((CDeformableModelInstance *)this_ptr);
  *(uint *)&param_1[1].field_0x4 = 0;
  *(uint *)(param_1 + 1) = 0;
  return;
}
