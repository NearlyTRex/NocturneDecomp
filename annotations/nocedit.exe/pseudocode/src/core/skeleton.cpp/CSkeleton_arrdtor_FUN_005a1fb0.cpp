// Name: core_skeleton.cpp_CSkeleton_arrdtor_FUN_005a1fb0
// Address: 005a1fb0
// Address Range: [[005a1fb0, 005a1fc4]]
// Convention: __cdecl
// Signature: CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_arrdtor_FUN_005a1fb0(CSkeleton *this_ptr,uint flags)

#include "nocturne.h"

CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_arrdtor_FUN_005a1fb0(CSkeleton *this_ptr,uint flags)

{
  CSkeleton *pCVar1;
  
  pCVar1 = (CSkeleton *)__arrfini(this_ptr,0x28,&g_CSkeletonTypeInfo);
  return pCVar1;
}
