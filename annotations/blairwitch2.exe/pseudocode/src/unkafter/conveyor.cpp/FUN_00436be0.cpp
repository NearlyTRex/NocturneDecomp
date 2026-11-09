// Name: unkafter_conveyor.cpp_FUN_00436be0
// Address: 00436be0
// Address Range: [[00436be0, 00436e36]]
// Convention: unknown
// Signature: void unkafter_conveyor_cpp_FUN_00436be0(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_conveyor_cpp_FUN_00436be0(CEnemy *param_1)

{
  byte *this_ptr;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar1;
  float10 fVar2;
  
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(param_1);
  this_ptr = &param_1->field_0x2b4;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
            ((CDeformableModelInstance *)this_ptr);
  fVar2 = (float10)*(float *)&param_1->field_0x25a8;
  round();
  *(int *)&param_1[1].field_0x118 = (int)ROUND(fVar2);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                          ((CDeformableModelInstance *)this_ptr);
  DAT_007c254c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Head",1);
  DAT_007c2560 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Forearm",1);
  _DAT_007c2564 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R ForeArm",1);
  DAT_007c2568 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L UpperArm",1);
  DAT_007c256c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_007c2570 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Foot",1);
  _DAT_007c2574 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Foot",1);
  _DAT_007c2550 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Hand",1);
  DAT_007c2554 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Hand",1);
  _DAT_007c2558 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Finger0",1);
  _DAT_007c255c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Finger0",1);
  DAT_007c2578 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine",1);
  _DAT_007c257c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine1",1);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                          ((CDeformableModelInstance *)this_ptr);
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,&DAT_005cdd19,1);
  *(int *)&param_1[1].field_0x68 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"torso",1);
  *(int *)&param_1[1].field_0x6c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"lforearm",1);
  *(int *)&param_1[1].field_0x70 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,&DAT_005cdd2d,1);
  *(int *)&param_1[1].field_0x74 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"rforearm",1);
  *(int *)&param_1[1].field_0x78 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,&DAT_005cdd3b,1);
  *(int *)&param_1[1].field_0x7c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"waist",1);
  *(int *)&param_1[1].field_0x80 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"lthigh",1);
  *(int *)&param_1[1].field_0x88 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"lshin",1);
  *(int *)&param_1[1].field_0x8c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"rthigh",1);
  *(int *)&param_1[1].field_0x90 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"rshin",1);
  *(uint *)&param_1[1].field_0x64 = 0;
  *(int *)&param_1[1].field_0x94 = iVar1;
  return;
}
