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
  
  core_basicene_cpp_CBasicEnemy_setup_FUN_0059e6a0(&this_ptr->base);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                          (&(this_ptr->base).base.base.model);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 Tongue",1);
  this_ptr->tongue_bone = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Dummy07",1);
  this_ptr->dummy07_bone = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 Tongue",1);
  this_ptr->tongue_attack_bone = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                    (this_ptr_00,"Bip01 R Finger0",1);
  this_ptr->finger_bone = iVar1;
  return;
}
