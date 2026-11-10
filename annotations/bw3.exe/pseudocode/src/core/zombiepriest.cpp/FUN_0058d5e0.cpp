// Name: core_zombiepriest.cpp_FUN_0058d5e0
// Address: 0058d5e0
// Address Range: [[0058d5e0, 0058d937]]
// Convention: unknown
// Signature: void core_zombiepriest_cpp_FUN_0058d5e0(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_zombiepriest_cpp_FUN_0058d5e0(CEnemy *param_1)

{
  CDeformableModelInstance *this_ptr;
  CCharacter *pCVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  byte uVar5;
  ushort uVar6;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar7;
  SMotion *pSVar8;
  
  if (*(int *)&(param_1->base).field_0x3268 == 0) {
    *(uint *)&param_1->field_0xce5c = 0x41200000;
    *(uint *)&param_1->field_0xce60 = 0x41700000;
    (param_1->base).hit_points = 125.0;
  }
  this_ptr = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr);
  _DAT_02d24970 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Head",1);
  _DAT_02d2497c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_02d24980 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_02d24984 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_02d24988 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_02d2498c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 L Foot",1);
  _DAT_02d24990 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 R Foot",1);
  _DAT_02d24974 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 L Hand",1);
  _DAT_02d24978 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 R Hand",1);
  _DAT_02d24994 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Spine",1);
  _DAT_02d24998 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Spine1",1);
  _DAT_02d2499c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Spine2",1);
  _DAT_02d24970 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Head",1);
  _DAT_02d24984 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_02d24988 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_02d24994 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Spine",1);
  _DAT_02d2499c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Spine2",1);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(this_ptr);
  iVar7 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_01,"larm01",1);
  *(int *)(param_1[1].base.base.create_event + 0x14) = iVar7;
  iVar7 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_01,"l4arm01",1);
  *(int *)(param_1[1].base.base.create_event + 0x18) = iVar7;
  iVar7 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_01,"rarm01",1);
  *(int *)(param_1[1].base.base.create_event + 0x1c) = iVar7;
  iVar7 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_01,"r4arm01",1);
  *(int *)(param_1[1].base.base.create_event + 0x20) = iVar7;
  iVar7 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_01,"rthigh01",1);
  *(int *)(param_1[1].base.base.create_event + 0x24) = iVar7;
  iVar7 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_01,"rshin01",1);
  *(int *)(param_1[1].base.base.create_event + 0x28) = iVar7;
  iVar7 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_01,"lthigh01",1);
  *(int *)(param_1[1].base.base.create_event + 0x2c) = iVar7;
  iVar7 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_01,"lshin01",1);
  *(int *)(param_1[1].base.base.create_event + 0x30) = iVar7;
  iVar7 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_01,"waist01",1);
  *(int *)(param_1[1].base.base.create_event + 0x34) = iVar7;
  iVar7 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_01,"torso01",1);
  *(int *)(param_1[1].base.base.create_event + 0x38) = iVar7;
  iVar7 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_01,"head01",1);
  *(int *)(param_1[1].base.base.create_event + 0x3c) = iVar7;
  uVar5 = DAT_02d24974_1;
  uVar6 = uRam02d24976;
  (param_1->base).carry_hands[0] = (SCarryHand)DAT_02d24974;
  (param_1->base).carry_hands[1] = (SCarryHand)uVar5;
  *(ushort *)&(param_1->base).field_0x25aa = uVar6;
  pCVar1 = &param_1[1].base;
  cVar2 = (pCVar1->base).create_event[0x19];
  cVar3 = (pCVar1->base).create_event[0x1a];
  cVar4 = (pCVar1->base).create_event[0x1b];
  (param_1->base).field_0x25ac = (pCVar1->base).create_event[0x18];
  (param_1->base).field_0x25ad = cVar2;
  (param_1->base).field_0x25ae = cVar3;
  (param_1->base).field_0x25af = cVar4;
  *(int *)&(param_1->base).field_0x2620 = _DAT_02d24978;
  pCVar1 = &param_1[1].base;
  cVar2 = (pCVar1->base).create_event[0x21];
  cVar3 = (pCVar1->base).create_event[0x22];
  cVar4 = (pCVar1->base).create_event[0x23];
  (param_1->base).field_0x2624 = (pCVar1->base).create_event[0x20];
  (param_1->base).field_0x2625 = cVar2;
  (param_1->base).field_0x2626 = cVar3;
  (param_1->base).field_0x2627 = cVar4;
  core_enemy_cpp_CEnemy_setup_FUN_00489110(param_1);
  pCVar1 = &param_1[1].base;
  (pCVar1->base).create_event[0x40] = '\0';
  (pCVar1->base).create_event[0x41] = '\0';
  (pCVar1->base).create_event[0x42] = '\0';
  (pCVar1->base).create_event[0x43] = '\0';
  iVar7 = *(int *)(param_1[1].base.base.actor_name + 0x14);
  pCVar1 = &param_1[1].base;
  (pCVar1->base).create_event[0x44] = '\0';
  (pCVar1->base).create_event[0x45] = '\0';
  (pCVar1->base).create_event[0x46] = '\0';
  (pCVar1->base).create_event[0x47] = '\0';
  if (iVar7 != 0) {
    *(uint *)&param_1->field_0xd050 = 1;
  }
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     (&(param_1->base).model.base);
  if (*(int *)(pSVar8 + 0x24) == 5) {
    (param_1->base).health_bar_mode = HEALTH_BAR_NONE;
  }
  else {
    (param_1->base).health_bar_mode = HEALTH_BAR_ALWAYS;
  }
  pCVar1 = &param_1[1].base;
  (pCVar1->base).create_event[0xc] = '\0';
  (pCVar1->base).create_event[0xd] = '\0';
  (pCVar1->base).create_event[0xe] = '\0';
  (pCVar1->base).create_event[0xf] = '\0';
  pCVar1 = &param_1[1].base;
  (pCVar1->base).create_event[0x10] = '\0';
  (pCVar1->base).create_event[0x11] = '\0';
  (pCVar1->base).create_event[0x12] = '\0';
  (pCVar1->base).create_event[0x13] = '\0';
  pCVar1 = &param_1[1].base;
  (pCVar1->base).create_event[8] = '\0';
  (pCVar1->base).create_event[9] = '\0';
  (pCVar1->base).create_event[10] = '\0';
  (pCVar1->base).create_event[0xb] = '\0';
  return;
}
