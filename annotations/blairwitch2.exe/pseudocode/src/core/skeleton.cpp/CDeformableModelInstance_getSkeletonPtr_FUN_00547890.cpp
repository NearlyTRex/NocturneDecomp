// Name: core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
// Address: 00547890
// Address Range: [[00547890, 005478a6]]
// Convention: __cdecl
// Signature: CSkeleton * __cdecl core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

CSkeleton * __cdecl core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance *this_ptr)

{
  CDeformableModel *this_ptr_00;
  CSkeleton *pCVar1;
  
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr);
  pCVar1 = core_skeleton_cpp_FUN_005415d0(this_ptr_00);
  return pCVar1;
}
