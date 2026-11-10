// Name: core_demnfolk.cpp_FUN_00454d20
// Address: 00454d20
// Address Range: [[00454d20, 00454fbc]]
// Convention: unknown
// Signature: void core_demnfolk_cpp_FUN_00454d20(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_demnfolk_cpp_FUN_00454d20(CEnemy *param_1)

{
  CDeformableModelInstance *this_ptr;
  CCharacter *pCVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  CSkeleton *this_ptr_00;
  int iVar5;
  CDeformableModel *this_ptr_01;
  float fVar6;
  
  this_ptr = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr);
  iVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Head",1);
  *(int *)(param_1[1].base.base.create_event + 0x1c) = iVar5;
  iVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                    (this_ptr_00,"Bip01 L ForeArm",1);
  *(int *)(param_1[1].base.base.create_event + 0x28) = iVar5;
  iVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                    (this_ptr_00,"Bip01 R ForeArm",1);
  *(int *)(param_1[1].base.base.create_event + 0x2c) = iVar5;
  iVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                    (this_ptr_00,"Bip01 L UpperArm",1);
  *(int *)(param_1[1].base.base.create_event + 0x30) = iVar5;
  iVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                    (this_ptr_00,"Bip01 R UpperArm",1);
  *(int *)(param_1[1].base.base.create_event + 0x34) = iVar5;
  iVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 L Foot",1);
  *(int *)(param_1[1].base.base.create_event + 0x38) = iVar5;
  iVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 R Foot",1);
  *(int *)(param_1[1].base.base.create_event + 0x3c) = iVar5;
  iVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 L Hand",1);
  *(int *)(param_1[1].base.base.create_event + 0x20) = iVar5;
  iVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 R Hand",1);
  *(int *)(param_1[1].base.base.create_event + 0x24) = iVar5;
  iVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Spine",1);
  *(int *)(param_1[1].base.base.create_event + 0x40) = iVar5;
  iVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 Spine2",1);
  *(int *)(param_1[1].base.base.create_event + 0x44) = iVar5;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(this_ptr);
  iVar5 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_01,&DAT_005ba475,1);
  *(int *)(param_1[1].base.base.create_event + 0x48) = iVar5;
  iVar5 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_01,"l4arm",1);
  *(int *)(param_1[1].base.base.create_event + 0x4c) = iVar5;
  iVar5 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_01,&DAT_005ba480,1);
  *(int *)(param_1[1].base.base.create_event + 0x50) = iVar5;
  iVar5 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_01,"r4arm",0);
  *(int *)(param_1[1].base.base.create_event + 0x54) = iVar5;
  if (iVar5 < 0) {
    pCVar1 = &param_1[1].base;
    (pCVar1->base).create_event[0x54] = ';';
    (pCVar1->base).create_event[0x55] = '\0';
    (pCVar1->base).create_event[0x56] = '\0';
    (pCVar1->base).create_event[0x57] = '\0';
  }
  iVar5 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_01,"waist",0);
  *(int *)(param_1[1].base.base.create_event + 0x58) = iVar5;
  iVar5 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_01,"torso",1);
  *(int *)(param_1[1].base.base.create_event + 0x5c) = iVar5;
  iVar5 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_01,&DAT_005ba497,1);
  *(uint *)&(param_1->base).model.field_0x222c = 0;
  *(int *)(param_1[1].base.base.create_event + 0x60) = iVar5;
  pCVar1 = &param_1[1].base;
  cVar2 = (pCVar1->base).create_event[0x21];
  cVar3 = (pCVar1->base).create_event[0x22];
  cVar4 = (pCVar1->base).create_event[0x23];
  (param_1->base).carry_hands[0] = (SCarryHand)(pCVar1->base).create_event[0x20];
  (param_1->base).carry_hands[1] = (SCarryHand)cVar2;
  (param_1->base).field_0x25aa = cVar3;
  (param_1->base).field_0x25ab = cVar4;
  pCVar1 = &param_1[1].base;
  cVar2 = (pCVar1->base).create_event[0x4d];
  cVar3 = (pCVar1->base).create_event[0x4e];
  cVar4 = (pCVar1->base).create_event[0x4f];
  (param_1->base).field_0x25ac = (pCVar1->base).create_event[0x4c];
  (param_1->base).field_0x25ad = cVar2;
  (param_1->base).field_0x25ae = cVar3;
  (param_1->base).field_0x25af = cVar4;
  pCVar1 = &param_1[1].base;
  cVar2 = (pCVar1->base).create_event[0x25];
  cVar3 = (pCVar1->base).create_event[0x26];
  cVar4 = (pCVar1->base).create_event[0x27];
  (param_1->base).field_0x2620 = (pCVar1->base).create_event[0x24];
  (param_1->base).field_0x2621 = cVar2;
  (param_1->base).field_0x2622 = cVar3;
  (param_1->base).field_0x2623 = cVar4;
  pCVar1 = &param_1[1].base;
  cVar2 = (pCVar1->base).create_event[0x55];
  cVar3 = (pCVar1->base).create_event[0x56];
  cVar4 = (pCVar1->base).create_event[0x57];
  (param_1->base).field_0x2624 = (pCVar1->base).create_event[0x54];
  (param_1->base).field_0x2625 = cVar2;
  (param_1->base).field_0x2626 = cVar3;
  (param_1->base).field_0x2627 = cVar4;
  core_enemy_cpp_CEnemy_setup_FUN_00489110(param_1);
  (param_1->base).base.is_transparent =
       (uint)(*(int *)(param_1[1].base.base.create_event + 0xc) != 0);
  fVar6 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,1.0);
  iVar5 = *(int *)(param_1[1].base.base.create_event + 0x58);
  param_1[1].base.base.platform_orientation_delta.x = fVar6;
  if ((-1 < iVar5) && (*(float *)&(param_1->base).field_0x3280 < 0.0)) {
    *(float *)&(param_1->base).field_0x3280 =
         (param_1->base).model.bounding_box.max.y + (float)_DAT_005ba4a2;
  }
  pCVar1 = &param_1[1].base;
  (pCVar1->base).create_event[0x18] = '\0';
  (pCVar1->base).create_event[0x19] = '\0';
  (pCVar1->base).create_event[0x1a] = '\0';
  (pCVar1->base).create_event[0x1b] = '\0';
  param_1[1].base.base.platform_position_delta.y = 0.0;
  param_1[1].base.base.platform_position_delta.z = 0.0;
  param_1[1].base.base.platform_position_delta.x = 0.0;
  return;
}
