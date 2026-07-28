// Name: core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
// Address: 0051e0a0
// Address Range: [[0051e0a0, 0051e0b6]]
// Convention: __cdecl
// Signature: CSkeleton * __cdecl core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

CSkeleton * __cdecl core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance *this_ptr)

{
  CDeformableModel *this_ptr_00;
  CSkeleton *pCVar1;
  
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(this_ptr);
  pCVar1 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00518130(this_ptr_00);
  return pCVar1;
}
