// Name: core_skeleton.cpp_CSkeleton_dtor_FUN_00540840
// Address: 00540840
// Address Range: [[00540840, 00540868]]
// Convention: __cdecl
// Signature: CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_dtor_FUN_00540840(CSkeleton *this_ptr,uint flags)

#include "nocturne.h"

CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_dtor_FUN_00540840(CSkeleton *this_ptr,uint flags)

{
  CSkeleton *pCVar1;
  
  __CHK(0xc);
  core_skeleton_cpp_CSkeleton_free_FUN_00540980(this_ptr,1);
  pCVar1 = (CSkeleton *)core_moon_cpp_CMotionList_dtor_FUN_00502790(&this_ptr->motion_list);
  return pCVar1;
}
