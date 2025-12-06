// Name: core_tbplayer.cpp_CDrummer_FUN_005da2f0
// Address: 005da2f0
// Address Range: [[005da2f0, 005da36a]]
// Convention: __cdecl
// Signature: void core_tbplayer.cpp_CDrummer_FUN_005da2f0(CDrummer * this_ptr)

#include "nocturne.h"

void __cdecl core_tbplayer_cpp_CDrummer_FUN_005da2f0(CDrummer *this_ptr)

{
  CCharacter *pCVar1;
  SCarryHand *pSVar2;
  CSkeleton *this_ptr_00;
  int iVar3;
  
  core_npc_cpp_CNPC_FUN_00544870(&this_ptr->base_npc);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                          (&(this_ptr->base_npc).base_character.model);
  iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Hand");
  this_ptr->field1_0x1f708 = iVar3;
  iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R Hand");
  pCVar1 = &(this_ptr->base_npc).base_character;
  pCVar1->carry_hands[0].field0_0x0[4] = '\0';
  pCVar1->carry_hands[0].field0_0x0[5] = '\0';
  pCVar1->carry_hands[0].field0_0x0[6] = '\0';
  pCVar1->carry_hands[0].field0_0x0[7] = '\0';
  pSVar2 = (this_ptr->base_npc).base_character.carry_hands;
  pSVar2[1].field0_0x0[4] = '\0';
  pSVar2[1].field0_0x0[5] = '\0';
  pSVar2[1].field0_0x0[6] = '\0';
  pSVar2[1].field0_0x0[7] = '\0';
  this_ptr->field2_0x1f70c = iVar3;
  *(int *)(this_ptr->base_npc).base_character.carry_hands[0].field0_0x0 = this_ptr->field1_0x1f708;
  *(int *)(this_ptr->base_npc).base_character.carry_hands[1].field0_0x0 = this_ptr->field2_0x1f70c;
  return;
}
