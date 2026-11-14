// Name: core_skeleton.cpp_freeAllSkeletons_FUN_00549090
// Address: 00549090
// Address Range: [[00549090, 005490cd]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_freeAllSkeletons_FUN_00549090(void)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_freeAllSkeletons_FUN_00549090(void)

{
  CSkeleton *this_ptr;
  
  this_ptr = g_SkeletonPool;
  core_skeleton_cpp_freeAllModels_FUN_00548f80();
  do {
    core_skeleton_cpp_CSkeleton_free_FUN_00540980(this_ptr,1);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CSkeleton *)&DAT_02628554);
  memset(&DAT_02628554,0,0xa0);
  return;
}
