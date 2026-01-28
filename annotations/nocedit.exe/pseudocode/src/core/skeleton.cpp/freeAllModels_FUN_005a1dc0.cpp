// Name: core_skeleton.cpp_freeAllModels_FUN_005a1dc0
// Address: 005a1dc0
// Address Range: [[005a1dc0, 005a1dea]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_freeAllModels_FUN_005a1dc0(void)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_freeAllModels_FUN_005a1dc0(void)

{
  CDeformableModel *this_ptr;
  
  this_ptr = g_DeformableModelPool;
  do {
    core_skeleton_cpp_CDeformableModel_free_FUN_0059a2b0(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CDeformableModel *)&g_SkeletonPoolCount);
  g_DeformableModelCount = 0;
  return;
}
