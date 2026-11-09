// Name: core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
// Address: 00569f30
// Address Range: [[00569f30, 00569f46]]
// Convention: __cdecl
// Signature: CSkeleton * __cdecl core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

CSkeleton * __cdecl core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance *this_ptr)

{
  CDeformableModel *this_ptr_00;
  CSkeleton *pCVar1;
  
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(this_ptr);
  pCVar1 = core_skeleton_cpp_FUN_00563c40(this_ptr_00);
  return pCVar1;
}
