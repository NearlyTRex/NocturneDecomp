// Name: core_skeleton.cpp_freeSkeletons_FUN_005a1fb0
// Address: 005a1fb0
// Address Range: [[005a1fb0, 005a1fc4]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_freeSkeletons_FUN_005a1fb0(CSkeleton **array)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_freeSkeletons_FUN_005a1fb0(CSkeleton **array)

{
  __arrfini(array,0x28,&g_CSkeletonTypeInfo);
  return;
}
