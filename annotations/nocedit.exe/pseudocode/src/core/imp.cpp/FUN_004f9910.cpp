// Name: core_imp.cpp_FUN_004f9910
// Address: 004f9910
// Address Range: [[004f9910, 004f9bf0]]
// Convention: __cdecl
// Signature: void __cdecl core_imp_cpp_FUN_004f9910(void)

#include "nocturne.h"

void __cdecl core_imp_cpp_FUN_004f9910(void)

{
  CDeformableModelInstance *this_ptr;
  CCharacter *pCVar1;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar2;
  float fVar3;
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_FUN_004a9650(in_stack_00000004);
  this_ptr = &(in_stack_00000004->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr);
  INT_02db89f4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Head");
  INT_02db8a00 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L ForeArm");
  INT_02db8a04 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R ForeArm");
  INT_02db8a08 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L UpperArm");
  INT_02db8a0c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R UpperArm");
  INT_02db8a10 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Foot");
  INT_02db8a14 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Foot");
  INT_02db89f8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Hand");
  INT_02db89fc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Hand");
  INT_02db8a18 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine");
  INT_02db8a1c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine1");
  INT_02db8a20 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2");
  INT_02db89f4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Head");
  INT_02db8a08 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L UpperArm");
  INT_02db8a0c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R UpperArm");
  INT_02db8a18 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine");
  INT_02db8a20 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 Spine2");
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"larm01",1);
  *(int *)(in_stack_00000004[1].base.base.actor_name + 0x14) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"l4arm01",1);
  *(int *)(in_stack_00000004[1].base.base.actor_name + 0x18) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"rarm01",1);
  *(int *)(in_stack_00000004[1].base.base.actor_name + 0x1c) = iVar2;
  fVar3 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"r4arm01",1);
  in_stack_00000004[1].base.base.location.position.x = fVar3;
  fVar3 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"rthigh01",1);
  in_stack_00000004[1].base.base.location.position.y = fVar3;
  fVar3 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"rshin01",1);
  in_stack_00000004[1].base.base.location.position.z = fVar3;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_01,"lthigh01",1);
  in_stack_00000004[1].base.base.location.area_id = iVar2;
  fVar3 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"lshin01",1);
  in_stack_00000004[1].base.base.orient.pitch = fVar3;
  fVar3 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"ass01",1);
  in_stack_00000004[1].base.base.orient.bank = fVar3;
  fVar3 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"torso01",1);
  in_stack_00000004[1].base.base.orient.heading = fVar3;
  fVar3 = (float)core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_01,"head01",1);
  pCVar1 = &in_stack_00000004[1].base;
  (pCVar1->base).actor_name[8] = '\0';
  (pCVar1->base).actor_name[9] = '\0';
  (pCVar1->base).actor_name[10] = '\0';
  (pCVar1->base).actor_name[0xb] = '\0';
  pCVar1 = &in_stack_00000004[1].base;
  (pCVar1->base).actor_name[0xc] = '\0';
  (pCVar1->base).actor_name[0xd] = '\0';
  (pCVar1->base).actor_name[0xe] = '\0';
  (pCVar1->base).actor_name[0xf] = '\0';
  in_stack_00000004[1].base.base.orient_matrix.m[0].x = fVar3;
  *(int *)(in_stack_00000004->base).carry_hands[0].unk1 = INT_02db89f8;
  *(uint *)((in_stack_00000004->base).carry_hands[0].unk1 + 4) =
       *(uint *)(in_stack_00000004[1].base.base.actor_name + 0x18);
  *(int *)(in_stack_00000004->base).carry_hands[1].unk1 = INT_02db89fc;
  *(float *)((in_stack_00000004->base).carry_hands[1].unk1 + 4) =
       in_stack_00000004[1].base.base.location.position.x;
  fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
  *(float *)(in_stack_00000004[1].base.base.actor_name + 0x10) = fVar3;
  return;
}
