// Name: core_skeleton.cpp_freeAllSkeletons_FUN_0051f730
// Address: 0051f730
// Address Range: [[0051f730, 0051f75f]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_freeAllSkeletons_FUN_0051f730(void)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_freeAllSkeletons_FUN_0051f730(void)

{
  CSkeleton *this_ptr;
  
  this_ptr = g_SkeletonPool;
  core_skeleton_cpp_freeAllModels_FUN_0051f650();
  do {
    core_skeleton_cpp_CSkeleton_free_FUN_005174e0(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CSkeleton *)0x2da8a58);
  g_INT_02737ef4 = 0;
  return;
}
