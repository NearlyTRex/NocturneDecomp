// Name: core_icepick.cpp_FUN_004f7e80
// Address: 004f7e80
// Address Range: [[004f7e80, 004f8094]]
// Convention: unknown
// Signature: undefined core_icepick.cpp_FUN_004f7e80()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_hero_icepick.cpp_FUN_004f7e80(uint param_1) */

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
                       (&(in_stack_00000004->base_character).model);
  DAT_02db8970 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 head");
  _DAT_02db8974 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Clavicle");
  _DAT_02db8978 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Clavicle");
  _DAT_02db897c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L UpperArm");
  _DAT_02db8980 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R UpperArm");
  _DAT_02db8984 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L ForeArm");
  _DAT_02db8988 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R ForeArm");
  _DAT_02db898c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Foot");
  _DAT_02db8990 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Foot");
  _DAT_02db8994 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Thigh");
  _DAT_02db8998 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Thigh");
  _DAT_02db899c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Calf");
  _DAT_02db89a0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Calf");
  DAT_02db89a4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 L Hand")
  ;
  DAT_02db89a8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 R Hand")
  ;
  _DAT_02db89ac =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 Spine2");
  DAT_02db89b0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 Spine1")
  ;
  _DAT_02db89b4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr,"Bip01 Spine")
  ;
  pCVar2 = &in_stack_00000004->base_character;
  pCVar2->carry_hands[0].field0_0x0[4] = '\0';
  pCVar2->carry_hands[0].field0_0x0[5] = '\0';
  pCVar2->carry_hands[0].field0_0x0[6] = '\0';
  pCVar2->carry_hands[0].field0_0x0[7] = '\0';
  pSVar3 = (in_stack_00000004->base_character).carry_hands;
  pSVar3[1].field0_0x0[4] = '\0';
  pSVar3[1].field0_0x0[5] = '\0';
  pSVar3[1].field0_0x0[6] = '\0';
  pSVar3[1].field0_0x0[7] = '\0';
  pCVar1 = in_stack_00000004 + 1;
  (pCVar1->base_character).base_actor.actor_name[0] = '\0';
  (pCVar1->base_character).base_actor.actor_name[1] = '\0';
  (pCVar1->base_character).base_actor.actor_name[2] = '\0';
  (pCVar1->base_character).base_actor.actor_name[3] = '\0';
  *(int *)(in_stack_00000004->base_character).carry_hands[0].field0_0x0 = DAT_02db89a4;
  *(int *)(in_stack_00000004->base_character).carry_hands[1].field0_0x0 = DAT_02db89a8;
  iVar4 = g_LocalHeroIndex;
  in_stack_00000004[1].base_character.base_actor.location.position.y = 0.0;
  pCVar1 = g_HeroActors[iVar4];
  if (in_stack_00000004 == pCVar1) {
    (pCVar1->base_character).cloth_data[0x348] = '\0';
    (pCVar1->base_character).cloth_data[0x349] = '\0';
    (pCVar1->base_character).cloth_data[0x34a] = -0x40;
    (pCVar1->base_character).cloth_data[0x34b] = '?';
  }
  pCVar2 = &in_stack_00000004[1].base_character;
  (pCVar2->base_actor).actor_name[0xc] = '\0';
  (pCVar2->base_actor).actor_name[0xd] = '\0';
  (pCVar2->base_actor).actor_name[0xe] = '\0';
  (pCVar2->base_actor).actor_name[0xf] = '\0';
  pCVar2 = &in_stack_00000004[1].base_character;
  (pCVar2->base_actor).actor_name[8] = '\0';
  (pCVar2->base_actor).actor_name[9] = '\0';
  (pCVar2->base_actor).actor_name[10] = '\0';
  (pCVar2->base_actor).actor_name[0xb] = '\0';
  in_stack_00000004[1].base_character.base_actor.location.area_id = 0;
  return;
}
