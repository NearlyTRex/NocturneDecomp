// Name: core_skeleton.cpp_freeUnusedModelsAndSkeletons_FUN_0056b860
// Address: 0056b860
// Address Range: [[0056b860, 0056b8be]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_freeUnusedModelsAndSkeletons_FUN_0056b860(void)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_freeUnusedModelsAndSkeletons_FUN_0056b860(void)

{
  int iVar1;
  CDeformableModel *this_ptr;
  CSkeleton *this_ptr_00;
  
  this_ptr = g_DeformableModelPool;
  iVar1 = 0;
  do {
    if (*(int *)(&DAT_027902bc + iVar1) == 0) {
      core_skeleton_cpp_CDeformableModel_free_FUN_005637d0(this_ptr);
    }
    iVar1 = iVar1 + 4;
    this_ptr = this_ptr + 1;
  } while (iVar1 != 0x100);
  this_ptr_00 = g_SkeletonPool;
  iVar1 = 0;
  do {
    if (*(int *)(&DAT_02c5fc1c + iVar1) == 0) {
      core_skeleton_cpp_CSkeleton_free_FUN_00562f70(this_ptr_00,1);
    }
    iVar1 = iVar1 + 4;
    this_ptr_00 = this_ptr_00 + 1;
  } while (iVar1 != 0xa0);
  return;
}
