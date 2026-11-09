// Name: core_sentinel.cpp_FUN_0052a790
// Address: 0052a790
// Address Range: [[0052a790, 0052a93f]]
// Convention: unknown
// Signature: void core_sentinel_cpp_FUN_0052a790(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_sentinel_cpp_FUN_0052a790(CEnemy *param_1)

{
  byte *this_ptr;
  CSkeleton *this_ptr_00;
  
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(param_1);
  this_ptr = &param_1->field_0x2b4;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
            ((CDeformableModelInstance *)this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                          ((CDeformableModelInstance *)this_ptr);
  _DAT_01e6614c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Head",1);
  _DAT_01e66158 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_01e6615c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_01e66160 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01e66164 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01e66168 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Foot",1);
  _DAT_01e6616c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Foot",1);
  _DAT_01e66150 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Hand",1);
  _DAT_01e66154 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Hand",1);
  _DAT_01e66170 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine",1);
  _DAT_01e66174 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine1",1);
  _DAT_01e66178 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine2",1);
  _DAT_01e6614c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Head",1);
  _DAT_01e66160 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01e66164 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01e66170 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine",1);
  _DAT_01e66178 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine2",1);
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
            ((CDeformableModelInstance *)this_ptr);
  *(uint *)&param_1[1].field_0x4 = 0;
  *(uint *)(param_1 + 1) = 0;
  return;
}
