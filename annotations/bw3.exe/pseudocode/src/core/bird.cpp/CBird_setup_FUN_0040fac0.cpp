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
  CSkeleton *this_ptr_00;
  
  core_charactr_cpp_CCharacter_setup_FUN_0042b0e0((CCharacter *)this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                          ((CDeformableModelInstance *)&this_ptr->field_0x158);
  DAT_007dff08 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                           (this_ptr_00,"Bip01 L Foot",0);
  _DAT_007dff0c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,"Bip01 R Foot",0);
  iVar1 = DAT_007dff08;
  *(int *)&this_ptr->field_0x2620 = _DAT_007dff0c;
  *(int *)&this_ptr->field_0x25a8 = iVar1;
  if (*(int *)&this_ptr->field_0x27a8 == 0) {
    return;
  }
  *(uint *)&this_ptr->field_0xfc = 1;
  return;
}
