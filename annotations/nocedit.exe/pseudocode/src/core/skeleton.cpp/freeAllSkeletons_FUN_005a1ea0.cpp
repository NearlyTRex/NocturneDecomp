// Name: core_skeleton.cpp_freeAllSkeletons_FUN_005a1ea0
// Address: 005a1ea0
// Address Range: [[005a1ea0, 005a1ecf]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_freeAllSkeletons_FUN_005a1ea0(void)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_freeAllSkeletons_FUN_005a1ea0(void)

{
  CSkeleton *this_ptr;
  
  this_ptr = g_SkeletonPool;
  core_skeleton_cpp_freeAllModels_FUN_005a1dc0();
  do {
    core_skeleton_cpp_CSkeleton_free_FUN_00599a50(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != g_SkeletonPool + 40);
  g_SkeletonPoolCount = 0;
  return;
}
