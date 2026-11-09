// Name: core_skeleton.cpp_FUN_0056b860
// Address: 0056b860
// Address Range: [[0056b860, 0056b8be]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_0056b860(void)

#include "nocturne.h"

void core_skeleton_cpp_FUN_0056b860(void)

{
  int iVar1;
  CDeformableModel *this_ptr;
  CSkeleton *pCVar2;
  
  this_ptr = g_DeformableModelPool;
  iVar1 = 0;
  do {
    if (*(int *)(&DAT_027902bc + iVar1) == 0) {
      core_skeleton_cpp_CDeformableModel_free_FUN_005637d0(this_ptr);
    }
    iVar1 = iVar1 + 4;
    this_ptr = this_ptr + 1;
  } while (iVar1 != 0x100);
  pCVar2 = g_SkeletonPool;
  iVar1 = 0;
  do {
    if (*(int *)(&DAT_02c5fc1c + iVar1) == 0) {
      core_skeleton_cpp_FUN_00562f70(pCVar2,1);
    }
    iVar1 = iVar1 + 4;
    pCVar2 = pCVar2 + 1;
  } while (iVar1 != 0xa0);
  return;
}
