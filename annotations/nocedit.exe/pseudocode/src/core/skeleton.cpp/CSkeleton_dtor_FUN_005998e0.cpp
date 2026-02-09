// Name: core_skeleton.cpp_CSkeleton_dtor_FUN_005998e0
// Address: 005998e0
// Address Range: [[005998e0, 0059990f]]
// Convention: __cdecl
// Signature: CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_dtor_FUN_005998e0(CSkeleton *this_ptr)

#include "nocturne.h"

CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_dtor_FUN_005998e0(CSkeleton *this_ptr)

{
  CVector3f *pCVar1;
  CSkeleton *in_stack_00000004;
  
  __STK();
  core_skeleton_cpp_CSkeleton_free_FUN_00599a50(in_stack_00000004);
  pCVar1 = core_curtain_cpp_freeVectors_FUN_0044baf0(in_stack_00000004->bone_scales);
  return (CSkeleton *)(pCVar1 + -0x36f5);
}
