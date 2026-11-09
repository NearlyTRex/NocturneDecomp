// Name: core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
// Address: 0054eac0
// Address Range: [[0054eac0, 0054ead6]]
// Convention: __cdecl
// Signature: CSkeleton * __cdecl core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

CSkeleton * __cdecl core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance *this_ptr)

{
  CDeformableModel *this_ptr_00;
  CSkeleton *pCVar1;
  
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(this_ptr);
  pCVar1 = core_skeleton_cpp_FUN_005487e0(this_ptr_00);
  return pCVar1;
}
