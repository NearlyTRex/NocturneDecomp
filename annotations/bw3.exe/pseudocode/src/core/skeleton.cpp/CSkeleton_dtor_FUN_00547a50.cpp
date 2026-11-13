// Name: core_skeleton.cpp_CSkeleton_dtor_FUN_00547a50
// Address: 00547a50
// Address Range: [[00547a50, 00547a78]]
// Convention: __cdecl
// Signature: CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_dtor_FUN_00547a50(CSkeleton *this_ptr,uint flags)

#include "nocturne.h"

CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_dtor_FUN_00547a50(CSkeleton *this_ptr,uint flags)

{
  CSkeleton *pCVar1;
  uint unaff_retaddr;
  
  FUN_005a5ff7(0xc);
  core_skeleton_cpp_FUN_00547b90(unaff_retaddr,1);
  pCVar1 = (CSkeleton *)core_morph_cpp_FUN_004fb1f0(unaff_retaddr,1);
  return pCVar1;
}
