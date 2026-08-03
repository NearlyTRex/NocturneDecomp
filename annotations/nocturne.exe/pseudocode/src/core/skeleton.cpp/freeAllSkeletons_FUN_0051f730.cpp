// Name: core_skeleton.cpp_freeAllSkeletons_FUN_0051f730
// Address: 0051f730
// Address Range: [[0051f730, 0051f75f]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_freeAllSkeletons_FUN_0051f730(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_freeAllSkeletons_FUN_0051f730(void)

{
  CSkeleton *pCVar1;
  
  pCVar1 = g_CSkeleton_ARRAY_02737ef8;
  core_skeleton_cpp_FUN_0051f650();
  do {
    core_skeleton_cpp_FUN_005174e0(pCVar1);
    pCVar1 = pCVar1 + 1;
  } while (pCVar1 != (CSkeleton *)0x2da8a58);
  _DAT_02737ef4 = 0;
  return;
}
