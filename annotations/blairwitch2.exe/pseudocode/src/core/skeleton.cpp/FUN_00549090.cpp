// Name: core_skeleton.cpp_FUN_00549090
// Address: 00549090
// Address Range: [[00549090, 005490cd]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_FUN_00549090(void)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_FUN_00549090(void)

{
  CSkeleton *pCVar1;
  
  pCVar1 = g_SkeletonPool;
  core_skeleton_cpp_FUN_00548f80();
  do {
    core_skeleton_cpp_FUN_00540980(pCVar1,1);
    pCVar1 = pCVar1 + 1;
  } while (pCVar1 != (CSkeleton *)&DAT_02628554);
  memset(&DAT_02628554,0,0xa0);
  return;
}
