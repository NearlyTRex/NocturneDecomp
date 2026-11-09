// Name: core_skeleton.cpp_FUN_0056b740
// Address: 0056b740
// Address Range: [[0056b740, 0056b77d]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_FUN_0056b740(void)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_FUN_0056b740(void)

{
  CSkeleton *pCVar1;
  
  pCVar1 = g_SkeletonPool;
  core_skeleton_cpp_FUN_0056b610();
  do {
    core_skeleton_cpp_FUN_00562f70(pCVar1,1);
    pCVar1 = pCVar1 + 1;
  } while (pCVar1 != (CSkeleton *)&DAT_02c5fc1c);
  memset(&DAT_02c5fc1c,0,0xa0);
  return;
}
