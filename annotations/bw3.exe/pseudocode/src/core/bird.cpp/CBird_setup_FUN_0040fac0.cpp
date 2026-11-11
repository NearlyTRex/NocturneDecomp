// Name: core_bird.cpp_CBird_setup_FUN_0040fac0
// Address: 0040fac0
// Address Range: [[0040fac0, 0040fb35]]
// Convention: __cdecl
// Signature: void __cdecl core_bird_cpp_CBird_setup_FUN_0040fac0(CBird *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bird_cpp_CBird_setup_FUN_0040fac0(CBird *this_ptr)

{
  int iVar1;
  int iVar2;
  CSkeleton *this_ptr_00;
  
  core_charactr_cpp_CCharacter_setup_FUN_0042b0e0(&this_ptr->base);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                          (&(this_ptr->base).model);
  DAT_007dff08 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                           (this_ptr_00,"Bip01 L Foot",0);
  _DAT_007dff0c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 R Foot",0);
  iVar2 = DAT_007dff08;
  (this_ptr->base).carry_hands[1].bone_index = _DAT_007dff0c;
  iVar1 = (this_ptr->base).is_spectral;
  (this_ptr->base).carry_hands[0].bone_index = iVar2;
  if (iVar1 == 0) {
    return;
  }
  (this_ptr->base).base.is_transparent = 1;
  return;
}
