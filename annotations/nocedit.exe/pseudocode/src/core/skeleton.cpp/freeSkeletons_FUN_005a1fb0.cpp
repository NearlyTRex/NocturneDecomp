// Name: core_skeleton.cpp_freeSkeletons_FUN_005a1fb0
// Address: 005a1fb0
// Address Range: [[005a1fb0, 005a1fc4]]
// Convention: __cdecl
// Signature: CSkeleton * __cdecl core_skeleton_cpp_freeSkeletons_FUN_005a1fb0(CSkeleton *objs)

#include "nocturne.h"

CSkeleton * __cdecl core_skeleton_cpp_freeSkeletons_FUN_005a1fb0(CSkeleton *objs)

{
  CSkeleton *pCVar1;
  
  pCVar1 = (CSkeleton *)__arrfini(objs,0x28,&g_CSkeletonTypeInfo);
  return pCVar1;
}
