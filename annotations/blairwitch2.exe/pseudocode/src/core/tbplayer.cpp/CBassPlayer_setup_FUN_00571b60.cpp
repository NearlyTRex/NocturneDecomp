// Name: core_tbplayer.cpp_CBassPlayer_setup_FUN_00571b60
// Address: 00571b60
// Address Range: [[00571b60, 00571bc4]]
// Convention: __cdecl
// Signature: void __cdecl core_tbplayer_cpp_CBassPlayer_setup_FUN_00571b60(CBassPlayer *this_ptr)

#include "nocturne.h"

void __cdecl core_tbplayer_cpp_CBassPlayer_setup_FUN_00571b60(CBassPlayer *this_ptr)

{
  CSkeleton *this_ptr_00;
  int iVar1;
  
  core_npc_cpp_CNPC_setup_FUN_00510510(&this_ptr->base);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                          (&(this_ptr->base).base.model);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L Hand",1);
  this_ptr->bone_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R Hand",1);
  (this_ptr->base).base.carry_hands[0].secondary_bone_index = 0;
  this_ptr->bone_indices[1] = iVar1;
  (this_ptr->base).base.carry_hands[0].bone_index = this_ptr->bone_indices[0];
  return;
}
