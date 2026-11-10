// Name: core_tbplayer.cpp_CDrummer_setup_FUN_00571de0
// Address: 00571de0
// Address Range: [[00571de0, 00571e5a]]
// Convention: __cdecl
// Signature: void __cdecl core_tbplayer_cpp_CDrummer_setup_FUN_00571de0(CDrummer *this_ptr)

#include "nocturne.h"

void __cdecl core_tbplayer_cpp_CDrummer_setup_FUN_00571de0(CDrummer *this_ptr)

{
  byte uVar1;
  ushort uVar2;
  CSkeleton *this_ptr_00;
  int iVar3;
  
  core_npc_cpp_CNPC_setup_FUN_00510510(&this_ptr->base);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                          (&(this_ptr->base).base.model);
  iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 L Hand",1);
  this_ptr->bone_indices[0] = iVar3;
  iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 R Hand",1);
  *(uint *)&(this_ptr->base).base.field_0x261c = 0;
  *(uint *)&(this_ptr->base).base.field_0x2694 = 0;
  this_ptr->bone_indices[1] = iVar3;
  uVar1 = *(byte *)((int)(this_ptr->bone_indices + 0) + 1);
  uVar2 = *(ushort *)((int)(this_ptr->bone_indices + 0) + 2);
  (this_ptr->base).base.carry_hands[0] = (SCarryHand)*(byte *)(this_ptr->bone_indices + 0);
  (this_ptr->base).base.carry_hands[1] = (SCarryHand)uVar1;
  *(ushort *)&(this_ptr->base).base.field_0x261a = uVar2;
  *(int *)&(this_ptr->base).base.field_0x2690 = this_ptr->bone_indices[1];
  return;
}
