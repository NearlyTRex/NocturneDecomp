// Name: core_mobster.cpp_FUN_00525340
// Address: 00525340
// Address Range: [[00525340, 0052564f]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_FUN_00525340(void)

#include "nocturne.h"

void __cdecl core_mobster_cpp_FUN_00525340(void)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  CCharacter *pCVar2;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar3;
  CEnemy *in_stack_00000004;
  
  this_ptr = &(in_stack_00000004->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  INT_02f37ec8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Head");
  INT_02f37ed4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L ForeArm");
  INT_02f37ed8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R ForeArm");
  INT_02f37edc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L UpperArm");
  INT_02f37ee0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R UpperArm");
  INT_02f37ee4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Foot");
  INT_02f37ee8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Foot");
  INT_02f37ecc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Hand");
  INT_02f37ed0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Hand");
  INT_02f37eec = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine");
  INT_02f37ef0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine1");
  INT_02f37ef4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2");
  INT_02f37ec8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Head");
  INT_02f37edc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L UpperArm");
  INT_02f37ee0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R UpperArm");
  INT_02f37eec = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine");
  INT_02f37ef4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2");
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"larm01",1);
  *(int *)(in_stack_00000004[1].base.base.create_event + 0x34) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"l4arm01",1);
  *(int *)(in_stack_00000004[1].base.base.create_event + 0x38) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"rarm01",1);
  *(int *)(in_stack_00000004[1].base.base.create_event + 0x3c) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"r4arm01",1);
  *(int *)(in_stack_00000004[1].base.base.create_event + 0x40) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"rthigh01",1);
  *(int *)(in_stack_00000004[1].base.base.create_event + 0x44) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"rshin01",1);
  *(int *)(in_stack_00000004[1].base.base.create_event + 0x48) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"lthigh01",1);
  *(int *)(in_stack_00000004[1].base.base.create_event + 0x4c) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"lshin01",1);
  *(int *)(in_stack_00000004[1].base.base.create_event + 0x50) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"waist01",1);
  *(int *)(in_stack_00000004[1].base.base.create_event + 0x54) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"torso01",1);
  *(int *)(in_stack_00000004[1].base.base.create_event + 0x58) = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"head01",1);
  *(int *)(in_stack_00000004[1].base.base.create_event + 0x5c) = iVar3;
  *(int *)(in_stack_00000004->base).carry_hands[0].unk1 = INT_02f37ecc;
  *(uint *)((in_stack_00000004->base).carry_hands[0].unk1 + 4) =
       *(uint *)(in_stack_00000004[1].base.base.create_event + 0x38);
  *(int *)(in_stack_00000004->base).carry_hands[1].unk1 = INT_02f37ed0;
  *(uint *)((in_stack_00000004->base).carry_hands[1].unk1 + 4) =
       *(uint *)(in_stack_00000004[1].base.base.create_event + 0x40);
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(in_stack_00000004);
  pCVar2 = &in_stack_00000004[1].base;
  (pCVar2->base).create_event[0x60] = '\0';
  (pCVar2->base).create_event[0x61] = '\0';
  (pCVar2->base).create_event[0x62] = '\0';
  (pCVar2->base).create_event[99] = '\0';
  fVar1 = in_stack_00000004[1].base.base.location.position.z;
  in_stack_00000004[1].base.base.standing_platform = (CPlatform *)0x0;
  if (fVar1 != 0.0) {
    pCVar2 = &in_stack_00000004[1].base;
    (pCVar2->base).actor_name[4] = '\x01';
    (pCVar2->base).actor_name[5] = '\0';
    (pCVar2->base).actor_name[6] = '\0';
    (pCVar2->base).actor_name[7] = '\0';
  }
  pCVar2 = &in_stack_00000004[1].base;
  (pCVar2->base).create_event[0x28] = '\0';
  (pCVar2->base).create_event[0x29] = '\0';
  (pCVar2->base).create_event[0x2a] = '\0';
  (pCVar2->base).create_event[0x2b] = '\0';
  pCVar2 = &in_stack_00000004[1].base;
  (pCVar2->base).create_event[0x2c] = '\0';
  (pCVar2->base).create_event[0x2d] = '\0';
  (pCVar2->base).create_event[0x2e] = '\0';
  (pCVar2->base).create_event[0x2f] = '\0';
  pCVar2 = &in_stack_00000004[1].base;
  (pCVar2->base).create_event[0x30] = '\0';
  (pCVar2->base).create_event[0x31] = '\0';
  (pCVar2->base).create_event[0x32] = '\0';
  (pCVar2->base).create_event[0x33] = '\0';
  pCVar2 = &in_stack_00000004[1].base;
  (pCVar2->base).create_event[0x24] = '\0';
  (pCVar2->base).create_event[0x25] = '\0';
  (pCVar2->base).create_event[0x26] = '\0';
  (pCVar2->base).create_event[0x27] = '\0';
  return;
}
