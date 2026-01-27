// Name: core_icepick.cpp_FUN_004f7e80
// Address: 004f7e80
// Address Range: [[004f7e80, 004f8094]]
// Convention: unknown
// Signature: undefined core_icepick.cpp_FUN_004f7e80()

#include "nocturne.h"

void core_icepick_cpp_FUN_004f7e80(void)

{
  CHero *pCVar1;
  CCharacter *pCVar2;
  SCarryHand *pSVar3;
  int iVar4;
  CSkeleton *this_ptr;
  CHero *in_stack_00000004;
  
  core_hero_cpp_CHero_FUN_004f2540(in_stack_00000004);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                       (&(in_stack_00000004->base).model);
  INT_02db8970 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 head");
  INT_02db8974 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 L Clavicle");
  INT_02db8978 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 R Clavicle");
  INT_02db897c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 L UpperArm");
  INT_02db8980 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 R UpperArm");
  INT_02db8984 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 L ForeArm");
  INT_02db8988 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 R ForeArm");
  INT_02db898c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Foot")
  ;
  INT_02db8990 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Foot")
  ;
  INT_02db8994 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 L Thigh");
  INT_02db8998 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr,"Bip01 R Thigh");
  INT_02db899c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Calf")
  ;
  INT_02db89a0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Calf")
  ;
  INT_02db89a4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Hand")
  ;
  INT_02db89a8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Hand")
  ;
  INT_02db89ac = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 Spine2")
  ;
  INT_02db89b0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 Spine1")
  ;
  INT_02db89b4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 Spine");
  pCVar2 = &in_stack_00000004->base;
  pCVar2->carry_hands[0].unk1[4] = '\0';
  pCVar2->carry_hands[0].unk1[5] = '\0';
  pCVar2->carry_hands[0].unk1[6] = '\0';
  pCVar2->carry_hands[0].unk1[7] = '\0';
  pSVar3 = (in_stack_00000004->base).carry_hands;
  pSVar3[1].unk1[4] = '\0';
  pSVar3[1].unk1[5] = '\0';
  pSVar3[1].unk1[6] = '\0';
  pSVar3[1].unk1[7] = '\0';
  pCVar1 = in_stack_00000004 + 1;
  (pCVar1->base).base.actor_name[0] = '\0';
  (pCVar1->base).base.actor_name[1] = '\0';
  (pCVar1->base).base.actor_name[2] = '\0';
  (pCVar1->base).base.actor_name[3] = '\0';
  *(int *)(in_stack_00000004->base).carry_hands[0].unk1 = INT_02db89a4;
  *(int *)(in_stack_00000004->base).carry_hands[1].unk1 = INT_02db89a8;
  iVar4 = g_LocalHeroIndex;
  in_stack_00000004[1].base.base.location.position.y = 0.0;
  pCVar1 = g_HeroActors[iVar4];
  if (in_stack_00000004 == pCVar1) {
    (pCVar1->base).cloth_data[0x348] = '\0';
    (pCVar1->base).cloth_data[0x349] = '\0';
    (pCVar1->base).cloth_data[0x34a] = -0x40;
    (pCVar1->base).cloth_data[0x34b] = '?';
  }
  pCVar2 = &in_stack_00000004[1].base;
  (pCVar2->base).actor_name[0xc] = '\0';
  (pCVar2->base).actor_name[0xd] = '\0';
  (pCVar2->base).actor_name[0xe] = '\0';
  (pCVar2->base).actor_name[0xf] = '\0';
  pCVar2 = &in_stack_00000004[1].base;
  (pCVar2->base).actor_name[8] = '\0';
  (pCVar2->base).actor_name[9] = '\0';
  (pCVar2->base).actor_name[10] = '\0';
  (pCVar2->base).actor_name[0xb] = '\0';
  in_stack_00000004[1].base.base.location.area_id = 0;
  return;
}
