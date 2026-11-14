// Name: core_skeleton.cpp_freeAllSkeletons_FUN_0056b740
// Address: 0056b740
// Address Range: [[0056b740, 0056b77d]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_freeAllSkeletons_FUN_0056b740(void)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_freeAllSkeletons_FUN_0056b740(void)

{
  CSkeleton *this_ptr;
  
  this_ptr = g_SkeletonPool;
  core_skeleton_cpp_freeAllModels_FUN_0056b610();
  do {
    core_skeleton_cpp_CSkeleton_free_FUN_00562f70(this_ptr,1);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CSkeleton *)&DAT_02c5fc1c);
  memset(&DAT_02c5fc1c,0,0xa0);
  return;
}
