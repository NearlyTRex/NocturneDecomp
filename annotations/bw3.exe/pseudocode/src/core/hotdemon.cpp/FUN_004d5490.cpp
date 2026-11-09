// Name: core_hotdemon.cpp_FUN_004d5490
// Address: 004d5490
// Address Range: [[004d5490, 004d566e]]
// Convention: unknown
// Signature: void core_hotdemon_cpp_FUN_004d5490(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_hotdemon_cpp_FUN_004d5490(CEnemy *param_1)

{
  byte *this_ptr;
  CSkeleton *this_ptr_00;
  char *pcVar1;
  
  if (*(int *)&g_CGamePtr->field_0x18 == 0) {
    pcVar1 = "hotdemonx.dfm";
  }
  else {
    pcVar1 = "hotdemon.dfm";
  }
  core_skeleton_cpp_FUN_0054eae0(&param_1->field_0x158,pcVar1);
  core_enemy_cpp_CEnemy_setup_FUN_00489110(param_1);
  this_ptr = &param_1->field_0x158;
  core_skeleton_cpp_FUN_0054e6b0((CDeformableModelInstance *)this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                          ((CDeformableModelInstance *)this_ptr);
  _DAT_01d5baec = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Head",1);
  _DAT_01d5baf8 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_01d5bafc = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_01d5bb00 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01d5bb04 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01d5bb08 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L Foot",1);
  _DAT_01d5bb0c = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R Foot",1);
  _DAT_01d5baf0 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L Hand",1);
  _DAT_01d5baf4 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R Hand",1);
  _DAT_01d5bb10 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine",1);
  _DAT_01d5bb14 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine1",1);
  _DAT_01d5bb18 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine2",1);
  _DAT_01d5baec = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Head",1);
  _DAT_01d5bb00 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01d5bb04 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01d5bb10 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine",1);
  _DAT_01d5bb18 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine2",1);
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
            ((CDeformableModelInstance *)this_ptr);
  *(uint *)(param_1 + 1) = 0;
  *(uint *)&param_1[1].field_0x4 = 0;
  return;
}
