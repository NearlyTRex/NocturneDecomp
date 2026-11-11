// Name: core_bird.cpp_CBird_setup_FUN_004152c0
// Address: 004152c0
// Address Range: [[004152c0, 00415335]]
// Convention: __cdecl
// Signature: void __cdecl core_bird_cpp_CBird_setup_FUN_004152c0(CBird *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bird_cpp_CBird_setup_FUN_004152c0(CBird *this_ptr)

{
  int iVar1;
  int iVar2;
  CSkeleton *this_ptr_00;
  
  core_charactr_cpp_CCharacter_setup_FUN_0042c510(&this_ptr->base);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                          (&(this_ptr->base).model);
  DAT_007c3908 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 L Foot",0);
  _DAT_007c390c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Foot",0);
  iVar2 = DAT_007c3908;
  (this_ptr->base).carry_hands[1].bone_index = _DAT_007c390c;
  iVar1 = (this_ptr->base).is_spectral;
  (this_ptr->base).carry_hands[0].bone_index = iVar2;
  if (iVar1 == 0) {
    return;
  }
  (this_ptr->base).base.is_transparent = 1;
  return;
}
