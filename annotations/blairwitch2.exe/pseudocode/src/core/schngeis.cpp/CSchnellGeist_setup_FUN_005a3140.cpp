// Name: core_schngeis.cpp_CSchnellGeist_setup_FUN_005a3140
// Address: 005a3140
// Address Range: [[005a3140, 005a31ba]]
// Convention: __cdecl
// Signature: void __cdecl core_schngeis_cpp_CSchnellGeist_setup_FUN_005a3140(CSchnellGeist *this_ptr)

#include "nocturne.h"

void __cdecl core_schngeis_cpp_CSchnellGeist_setup_FUN_005a3140(CSchnellGeist *this_ptr)

{
  CSkeleton *this_ptr_00;
  int iVar1;
  
  unkafter_basicene_cpp_FUN_0059e6a0(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                          ((CDeformableModelInstance *)&this_ptr->field_0x2b4);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 Tongue",1);
  *(int *)&this_ptr->field_0x11850 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Dummy07",1);
  *(int *)&this_ptr->field_0x11854 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 Tongue",1);
  *(int *)&this_ptr->field_0x11858 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                    (this_ptr_00,"Bip01 R Finger0",1);
  *(int *)&this_ptr->field_0x1185c = iVar1;
  return;
}
