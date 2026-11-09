// Name: core_boneguy.cpp_FUN_00417630
// Address: 00417630
// Address Range: [[00417630, 00417991]]
// Convention: unknown
// Signature: void core_boneguy_cpp_FUN_00417630(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_boneguy_cpp_FUN_00417630(CEnemy *param_1)

{
  byte *this_ptr;
  int iVar1;
  CSkeleton *this_ptr_00;
  CDeformableModel *pCVar2;
  uint uVar3;
  
  this_ptr = &param_1->field_0x158;
  core_skeleton_cpp_FUN_0054e6b0((CDeformableModelInstance *)this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                          ((CDeformableModelInstance *)this_ptr);
  DAT_007e1620 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"CBip01 Head" + 1,1);
  _DAT_007e162c = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_007e1630 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R ForeArm",1);
  DAT_007e1634 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L UpperArm",1);
  DAT_007e1638 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_007e163c = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L Foot",1);
  _DAT_007e1640 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R Foot",1);
  DAT_007e1624 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L Hand",1);
  DAT_007e1628 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R Hand",1);
  DAT_007e1644 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine",1);
  DAT_007e1648 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine2",1);
  DAT_007e1620 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Head",1);
  DAT_007e1634 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L UpperArm",1);
  DAT_007e1638 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R UpperArm",1);
  DAT_007e1644 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine",1);
  DAT_007e1648 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine2",1);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                     ((CDeformableModelInstance *)this_ptr);
  iVar1 = *(int *)&pCVar2->field_0xc00;
  *(int *)&param_1[1].field_0x94 = iVar1;
  if (0x14 < iVar1) {
    _DAT_01d71de0 = "..\\core\\boneguy.cpp";
    _DAT_01d71de4 = 0x136;
    core_main_c_FUN_004e4330("CBoneGuy::explode - Not enough containers");
  }
  *(int *)&param_1->field_0x25a8 = DAT_007e1624;
  *(int *)&param_1->field_0x2620 = DAT_007e1628;
  core_enemy_cpp_CEnemy_setup_FUN_00489110(param_1);
  *(uint *)&param_1[1].field_0x24 = 0;
  *(uint *)&param_1[1].field_0x63c = 0;
  uVar3 = core_actor_cpp_FUN_0040ce40(0x3fa66666,0x3fe66666);
  *(uint *)&param_1->field_0xcdcc = uVar3;
  if (*(int *)&param_1->field_0x3268 == 0) {
    switch(*(uint *)&param_1[1].field_0x20) {
    case 0:
    case 1:
      *(uint *)&param_1->field_0xce5c = 0x41000000;
      *(uint *)&param_1->field_0xce60 = 0x40a00000;
      *(uint *)&param_1->field_0x2538 = 0x41c80000;
      break;
    case 2:
      *(uint *)&param_1->field_0xce5c = 0x41400000;
      *(uint *)&param_1->field_0xce60 = 0x41000000;
      *(uint *)&param_1->field_0x2538 = 0x41f00000;
      *(uint *)&param_1[1].field_0x4 = *(uint *)&param_1->field_0x2538;
      return;
    case 3:
      *(uint *)&param_1->field_0xce5c = 0x41a00000;
      *(uint *)&param_1->field_0xce60 = 0x41200000;
      *(uint *)&param_1->field_0x2538 = 0x42200000;
      *(uint *)&param_1[1].field_0x4 = *(uint *)&param_1->field_0x2538;
      return;
    case 4:
      *(uint *)&param_1->field_0x2538 = 0x41200000;
      *(uint *)&param_1->field_0xce5c = 0x40a00000;
      *(uint *)&param_1->field_0xce60 = 0x40a00000;
      uVar3 = core_actor_cpp_FUN_0040ce40(0x40000000,0x40200000);
      *(uint *)&param_1->field_0xcdcc = uVar3;
      *(uint *)&param_1[1].field_0x4 = *(uint *)&param_1->field_0x2538;
      return;
    }
    *(uint *)&param_1[1].field_0x4 = *(uint *)&param_1->field_0x2538;
    return;
  }
  switch(*(uint *)&param_1[1].field_0x20) {
  case 0:
  case 1:
    *(uint *)&param_1[1].field_0x4 = 0x41c80000;
    break;
  case 2:
    *(uint *)&param_1[1].field_0x4 = 0x41f00000;
    return;
  case 3:
    *(uint *)&param_1[1].field_0x4 = 0x42200000;
    return;
  case 4:
    *(uint *)&param_1[1].field_0x4 = 0x41200000;
    return;
  }
  return;
}
