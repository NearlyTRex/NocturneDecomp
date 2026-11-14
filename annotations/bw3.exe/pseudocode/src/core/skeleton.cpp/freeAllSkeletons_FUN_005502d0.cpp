// Name: core_skeleton.cpp_freeAllSkeletons_FUN_005502d0
// Address: 005502d0
// Address Range: [[005502d0, 0055030d]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_freeAllSkeletons_FUN_005502d0(void)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_freeAllSkeletons_FUN_005502d0(void)

{
  CSkeleton *this_ptr;
  
  this_ptr = g_SkeletonPool;
  core_skeleton_cpp_freeAllModels_FUN_005501a0();
  do {
    core_skeleton_cpp_CSkeleton_free_FUN_00547b90(this_ptr,1);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CSkeleton *)&DAT_02cd28bc);
  memset(&DAT_02cd28bc,0,0xa0);
  return;
}
