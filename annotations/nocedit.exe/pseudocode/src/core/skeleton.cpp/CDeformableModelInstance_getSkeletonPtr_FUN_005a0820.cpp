// Name: core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
// Address: 005a0820
// Address Range: [[005a0820, 005a0836]]
// Convention: __cdecl
// Signature: CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)

#include "nocturne.h"

CSkeleton * __cdecl
core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
          (CDeformableModelInstance *this_ptr)

{
  CDeformableModel *this_ptr_00;
  CSkeleton *pCVar1;
  
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  pCVar1 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr_00);
  return pCVar1;
}
