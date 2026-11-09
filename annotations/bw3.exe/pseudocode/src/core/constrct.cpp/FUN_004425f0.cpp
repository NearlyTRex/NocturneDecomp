// Name: core_constrct.cpp_FUN_004425f0
// Address: 004425f0
// Address Range: [[004425f0, 004429d2]]
// Convention: unknown
// Signature: void core_constrct_cpp_FUN_004425f0(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004428a4) */
/* WARNING: Removing unreachable block (ram,0x0044296f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_constrct_cpp_FUN_004425f0(CEnemy *param_1)

{
  byte *this_ptr;
  uint uVar1;
  int iVar2;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar3;
  float10 fVar4;
  
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (0x01C6E360,"COMBATMODEHARD");
  if (iVar2 == 0) {
    *(uint *)&param_1[1].field_0x804 = 0x3f400000;
  }
  else {
    *(uint *)&param_1[1].field_0x804 = 0x3f800000;
  }
  core_enemy_cpp_CEnemy_setup_FUN_00489110(param_1);
  this_ptr = &param_1->field_0x158;
  core_skeleton_cpp_FUN_0054e6b0((CDeformableModelInstance *)this_ptr);
  fVar4 = (float10)*(float *)&param_1->field_0x2538;
  round();
  *(int *)&param_1[1].field_0x128 = (int)ROUND(fVar4);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                          ((CDeformableModelInstance *)this_ptr);
  DAT_007f8e64 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Head",1);
  DAT_007f8e68 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Dummy05",1);
  _DAT_007f8e7c = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L Forearm",1);
  _DAT_007f8e80 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_007f8e84 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_007f8e88 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_007f8e8c = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L Foot",1);
  _DAT_007f8e90 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R Foot",1);
  DAT_007f8e6c = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L Hand",1);
  _DAT_007f8e70 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R Hand",1);
  DAT_007f8e74 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R Finger0",1);
  _DAT_007f8e78 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L Finger0",1);
  DAT_007f8e94 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine",1);
  _DAT_007f8e98 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine1",1);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                          ((CDeformableModelInstance *)this_ptr);
  iVar2 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,&DAT_005b9506,1);
  *(int *)&param_1[1].field_0x64 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"torso",1);
  *(int *)&param_1[1].field_0x68 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"lforearm",1);
  *(int *)&param_1[1].field_0x6c = iVar2;
  iVar2 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,&DAT_005b951a,1);
  *(int *)&param_1[1].field_0x70 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"rforearm",1);
  *(int *)&param_1[1].field_0x74 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,&DAT_005b9528,1);
  *(int *)&param_1[1].field_0x78 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"waist",1);
  *(int *)&param_1[1].field_0x7c = iVar2;
  iVar2 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"lthigh",1);
  *(int *)&param_1[1].field_0x84 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"lshin",1);
  *(int *)&param_1[1].field_0x88 = iVar2;
  iVar2 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"rthigh",1);
  *(int *)&param_1[1].field_0x8c = iVar2;
  iVar3 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"rshin",1);
  *(uint *)&param_1[1].field_0x9c = 0;
  iVar2 = *(int *)&param_1->field_0x3268;
  *(int *)&param_1[1].field_0x90 = iVar3;
  if (iVar2 == 0) {
    uVar1 = *(uint *)&param_1[1].field_0x7f8;
    if (uVar1 == 0) {
      *(uint *)&param_1->field_0xce5c = 0x41200000;
      *(uint *)&param_1->field_0xce60 = 0x41200000;
      *(uint *)&param_1->field_0x2538 = 0x42340000;
      fVar4 = (float10)*(float *)&param_1->field_0x2538;
      round();
      *(int *)&param_1[1].field_0x128 = (int)ROUND(fVar4);
      return;
    }
    if (1 < uVar1) {
      if (uVar1 == 2) {
        *(uint *)&param_1->field_0xce5c = 0x41a00000;
        *(uint *)&param_1->field_0xce60 = 0x41200000;
        *(uint *)&param_1->field_0x2538 = 0x42820000;
        *(uint *)&param_1[1].field_0x808 = 2;
        fVar4 = (float10)*(float *)&param_1->field_0x2538;
        round();
        *(int *)&param_1[1].field_0x128 = (int)ROUND(fVar4);
        return;
      }
      fVar4 = (float10)*(float *)&param_1->field_0x2538;
      round();
      *(int *)&param_1[1].field_0x128 = (int)ROUND(fVar4);
      return;
    }
    *(uint *)&param_1->field_0xce5c = 0x41700000;
    *(uint *)&param_1->field_0xce60 = 0x41200000;
    *(uint *)&param_1[1].field_0x808 = 3;
    *(uint *)&param_1->field_0x2538 = 0x425c0000;
    fVar4 = (float10)*(float *)&param_1->field_0x2538;
    round();
    *(int *)&param_1[1].field_0x128 = (int)ROUND(fVar4);
    return;
  }
  uVar1 = *(uint *)&param_1[1].field_0x7f8;
  if (uVar1 == 0) {
    *(uint *)&param_1[1].field_0x128 = 0x2d;
    return;
  }
  if (1 < uVar1) {
    if (uVar1 == 2) {
      *(uint *)&param_1[1].field_0x128 = 0x41;
      return;
    }
    return;
  }
  *(uint *)&param_1[1].field_0x128 = 0x37;
  return;
}
