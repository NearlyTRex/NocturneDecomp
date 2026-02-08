// Name: core_tbplayer.cpp_CBassPlayer_setup_FUN_005da090
// Address: 005da090
// Address Range: [[005da090, 005da0f4]]
// Convention: __cdecl
// Signature: void __cdecl core_tbplayer_cpp_CBassPlayer_setup_FUN_005da090(CBassPlayer *this_ptr)

#include "nocturne.h"

void __cdecl core_tbplayer_cpp_CBassPlayer_setup_FUN_005da090(CBassPlayer *this_ptr)

{
  CSkeleton *this_ptr_00;
  int iVar1;
  
  core_npc_cpp_CNPC_setup_FUN_00544870(&this_ptr->base);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                          (&(this_ptr->base).base.model);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Hand");
  this_ptr->unk1 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R Hand");
  (this_ptr->base).base.carry_hands[0].secondary_bone_index = 0;
  this_ptr->unk2 = iVar1;
  (this_ptr->base).base.carry_hands[0].bone_index = this_ptr->unk1;
  return;
}
