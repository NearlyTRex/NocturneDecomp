// Name: core_union.cpp_CUnion_setup_FUN_005a4c00
// Address: 005a4c00
// Address Range: [[005a4c00, 005a4c4e]]
// Convention: __cdecl
// Signature: void __cdecl core_union_cpp_CUnion_setup_FUN_005a4c00(CUnion *this_ptr)

#include "nocturne.h"

void __cdecl core_union_cpp_CUnion_setup_FUN_005a4c00(CUnion *this_ptr)

{
  CSkeleton *this_ptr_00;
  int iVar1;
  
  core_basicnpc_cpp_CBasicNPC_setup_FUN_005a4870(&this_ptr->base);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                          (&(this_ptr->base).base.base.base.model);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 gun1",1);
  this_ptr->gun_bone = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 gun12",1);
  this_ptr->gun2_bone = iVar1;
  return;
}
