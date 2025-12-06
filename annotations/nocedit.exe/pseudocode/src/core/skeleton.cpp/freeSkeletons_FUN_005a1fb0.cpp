// Name: core_skeleton.cpp_freeSkeletons_FUN_005a1fb0
// Address: 005a1fb0
// Address Range: [[005a1fb0, 005a1fc4]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_freeSkeletons_FUN_005a1fb0(CSkeleton * * array)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_freeSkeletons_FUN_005a1fb0(CSkeleton **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x28,&g_CSkeletonTypeInfo);
  return;
}
