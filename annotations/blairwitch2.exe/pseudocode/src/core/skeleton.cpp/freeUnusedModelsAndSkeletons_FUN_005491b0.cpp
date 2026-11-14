// Name: core_skeleton.cpp_freeUnusedModelsAndSkeletons_FUN_005491b0
// Address: 005491b0
// Address Range: [[005491b0, 0054920e]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_freeUnusedModelsAndSkeletons_FUN_005491b0(void)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_freeUnusedModelsAndSkeletons_FUN_005491b0(void)

{
  int iVar1;
  CDeformableModel *this_ptr;
  CSkeleton *this_ptr_00;
  
  this_ptr = g_DeformableModelPool;
  iVar1 = 0;
  do {
    if (*(int *)(&DAT_02177ff4 + iVar1) == 0) {
      core_skeleton_cpp_CDeformableModel_free_FUN_00541160(this_ptr);
    }
    iVar1 = iVar1 + 4;
    this_ptr = this_ptr + 1;
  } while (iVar1 != 0x100);
  this_ptr_00 = g_SkeletonPool;
  iVar1 = 0;
  do {
    if (*(int *)(&DAT_02628554 + iVar1) == 0) {
      core_skeleton_cpp_CSkeleton_free_FUN_00540980(this_ptr_00,1);
    }
    iVar1 = iVar1 + 4;
    this_ptr_00 = this_ptr_00 + 1;
  } while (iVar1 != 0xa0);
  return;
}
