// Name: core_skeleton.cpp_CSkeleton_dtor_FUN_00562e30
// Address: 00562e30
// Address Range: [[00562e30, 00562e58]]
// Convention: __cdecl
// Signature: CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_dtor_FUN_00562e30(CSkeleton *this_ptr,uint flags)

#include "nocturne.h"

CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_dtor_FUN_00562e30(CSkeleton *this_ptr,uint flags)

{
  CSkeleton *pCVar1;
  CSkeleton *unaff_retaddr;
  
  FUN_005c3187(0xc);
  core_skeleton_cpp_CSkeleton_free_FUN_00562f70(unaff_retaddr,1);
  pCVar1 = (CSkeleton *)core_morph_cpp_FUN_005238f0(unaff_retaddr,1);
  return pCVar1;
}
