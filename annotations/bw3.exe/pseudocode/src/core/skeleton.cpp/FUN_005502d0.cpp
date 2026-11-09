// Name: core_skeleton.cpp_FUN_005502d0
// Address: 005502d0
// Address Range: [[005502d0, 0055030d]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_FUN_005502d0(void)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_FUN_005502d0(void)

{
  CSkeleton *pCVar1;
  
  pCVar1 = g_SkeletonPool;
  core_skeleton_cpp_FUN_005501a0();
  do {
    core_skeleton_cpp_FUN_00547b90(pCVar1,1);
    pCVar1 = pCVar1 + 1;
  } while (pCVar1 != (CSkeleton *)&DAT_02cd28bc);
  memset(&DAT_02cd28bc,0,0xa0);
  return;
}
