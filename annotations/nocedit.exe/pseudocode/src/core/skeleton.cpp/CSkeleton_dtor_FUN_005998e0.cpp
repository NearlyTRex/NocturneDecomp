// Name: core_skeleton.cpp_CSkeleton_dtor_FUN_005998e0
// Address: 005998e0
// Address Range: [[005998e0, 0059990f]]
// Convention: __cdecl
// Signature: CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_dtor_FUN_005998e0(CSkeleton *this_ptr,uint flags)

#include "nocturne.h"

CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_dtor_FUN_005998e0(CSkeleton *this_ptr,uint flags)

{
  CVector3f *pCVar1;
  
  core_skeleton_cpp_CSkeleton_free_FUN_00599a50(this_ptr);
  pCVar1 = core_curtain_cpp_CVector3f_arrdtor_FUN_0044baf0(this_ptr->bone_scales,0);
  return (CSkeleton *)(pCVar1 + -0x36f5);
}
