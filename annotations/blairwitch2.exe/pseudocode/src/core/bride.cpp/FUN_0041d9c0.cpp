// Name: core_bride.cpp_FUN_0041d9c0
// Address: 0041d9c0
// Address Range: [[0041d9c0, 0041dbdf]]
// Convention: unknown
// Signature: void core_bride_cpp_FUN_0041d9c0(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bride_cpp_FUN_0041d9c0(CEnemy *param_1)

{
  byte *this_ptr;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar1;
  uint uVar2;
  
  this_ptr = &param_1->field_0x2b4;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
            ((CDeformableModelInstance *)this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                          ((CDeformableModelInstance *)this_ptr);
  DAT_007bccdc = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Head",1);
  DAT_007bcce8 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L ForeArm",1);
  DAT_007bccec = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_007bccf8 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Foot",1);
  _DAT_007bccfc = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Foot",1);
  DAT_007bcce0 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Hand",1);
  DAT_007bcce4 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Hand",1);
  DAT_007bccf0 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L UpperArm",1);
  DAT_007bccf4 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R UpperArm",1);
  DAT_007bcd00 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine",1);
  _DAT_007bcd04 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine2",1);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                          ((CDeformableModelInstance *)this_ptr);
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"lshoulderpiece",1);
  *(int *)(param_1 + 1) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"l4armpiece",1);
  *(int *)&param_1[1].field_0x4 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"rshoulderpiece",1);
  *(int *)&param_1[1].field_0x8 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"r4armpiece",1);
  *(int *)&param_1[1].field_0xc = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"lshinpiece",1);
  *(int *)&param_1[1].field_0x10 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"rshinpiece",1);
  *(int *)&param_1[1].field_0x14 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"torsopiece",1);
  *(int *)&param_1[1].field_0x18 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"lowerbodypiece",1);
  *(int *)&param_1[1].field_0x1c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"headpiece",1);
  *(int *)&param_1[1].field_0x20 = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(param_1);
  uVar2 = core_actor_cpp_FUN_0040cf60(0x40000000,0x41a00000);
  *(uint *)&param_1[1].field_0x28 = 0;
  *(uint *)&param_1[1].field_0x2c = 0;
  *(uint *)&param_1[1].field_0x24 = uVar2;
  return;
}
