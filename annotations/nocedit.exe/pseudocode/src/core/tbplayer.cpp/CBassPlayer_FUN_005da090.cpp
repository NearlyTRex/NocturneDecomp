// Name: core_tbplayer.cpp_CBassPlayer_FUN_005da090
// Address: 005da090
// Address Range: [[005da090, 005da0f4]]
// Convention: __cdecl
// Signature: void core_tbplayer.cpp_CBassPlayer_FUN_005da090(CBassPlayer * this_ptr)

#include "nocturne.h"

void __cdecl core_tbplayer_cpp_CBassPlayer_FUN_005da090(CBassPlayer *this_ptr)

{
  CCharacter *pCVar1;
  CSkeleton *this_ptr_00;
  int iVar2;
  
  core_npc_cpp_CNPC_FUN_00544870(&this_ptr->base);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                          (&(this_ptr->base).base.model);
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Hand");
  this_ptr->unk1 = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R Hand");
  pCVar1 = &(this_ptr->base).base;
  pCVar1->carry_hands[0].unk1[4] = '\0';
  pCVar1->carry_hands[0].unk1[5] = '\0';
  pCVar1->carry_hands[0].unk1[6] = '\0';
  pCVar1->carry_hands[0].unk1[7] = '\0';
  this_ptr->unk2 = iVar2;
  *(int *)(this_ptr->base).base.carry_hands[0].unk1 = this_ptr->unk1;
  return;
}
