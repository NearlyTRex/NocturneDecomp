// Name: core_tbplayer.cpp_CDrummer_FUN_005da2f0
// Address: 005da2f0
// Address Range: [[005da2f0, 005da36a]]
// Convention: __cdecl
// Signature: void __cdecl core_tbplayer_cpp_CDrummer_FUN_005da2f0(CDrummer *this_ptr)

#include "nocturne.h"

void __cdecl core_tbplayer_cpp_CDrummer_FUN_005da2f0(CDrummer *this_ptr)

{
  CCharacter *pCVar1;
  SCarryHand *pSVar2;
  CSkeleton *this_ptr_00;
  int iVar3;
  
  core_npc_cpp_CNPC_FUN_00544870(&this_ptr->base);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                          (&(this_ptr->base).base.model);
  iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Hand");
  this_ptr->unk1 = iVar3;
  iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R Hand");
  pCVar1 = &(this_ptr->base).base;
  pCVar1->carry_hands[0].unk1[4] = '\0';
  pCVar1->carry_hands[0].unk1[5] = '\0';
  pCVar1->carry_hands[0].unk1[6] = '\0';
  pCVar1->carry_hands[0].unk1[7] = '\0';
  pSVar2 = (this_ptr->base).base.carry_hands;
  pSVar2[1].unk1[4] = '\0';
  pSVar2[1].unk1[5] = '\0';
  pSVar2[1].unk1[6] = '\0';
  pSVar2[1].unk1[7] = '\0';
  this_ptr->unk2 = iVar3;
  *(int *)(this_ptr->base).base.carry_hands[0].unk1 = this_ptr->unk1;
  *(int *)(this_ptr->base).base.carry_hands[1].unk1 = this_ptr->unk2;
  return;
}
