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
  CSkeleton *this_ptr_00;
  
  core_charactr_cpp_CCharacter_setup_FUN_0042c510((CCharacter *)this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                          ((CDeformableModelInstance *)&this_ptr->field_0x158);
  DAT_007c3908 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_00,"Bip01 L Foot",0);
  _DAT_007c390c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Foot",0);
  iVar1 = DAT_007c3908;
  *(int *)&this_ptr->field_0x2620 = _DAT_007c390c;
  *(int *)&this_ptr->field_0x25a8 = iVar1;
  if (*(int *)&this_ptr->field_0x27a8 == 0) {
    return;
  }
  *(uint *)&this_ptr->field_0xfc = 1;
  return;
}
