// Name: core_skeleton.cpp_getMemoryStats_FUN_005a1ed0
// Address: 005a1ed0
// Address Range: [[005a1ed0, 005a1f66]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_getMemoryStats_FUN_005a1ed0(char *output_buffer)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_getMemoryStats_FUN_005a1ed0(char *output_buffer)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CSkeleton *this_ptr;
  CDeformableModel *this_ptr_00;
  
  iVar3 = 0;
  iVar4 = 0;
  if (0 < g_SkeletonPoolCount) {
    this_ptr = g_SkeletonPool;
    do {
      iVar1 = core_skeleton_cpp_CSkeleton_calculateFrameDataSize_FUN_0059a140(this_ptr);
      iVar3 = iVar3 + 1;
      this_ptr = this_ptr + 1;
      iVar4 = iVar4 + iVar1;
    } while (iVar3 < g_SkeletonPoolCount);
  }
  iVar3 = 0;
  iVar1 = 0;
  if (0 < g_DeformableModelCount) {
    this_ptr_00 = g_DeformableModelPool;
    do {
      iVar2 = core_skeleton_cpp_CDeformableModel_calculateMemorySize_FUN_0059dd60(this_ptr_00);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + iVar2;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar3 < g_DeformableModelCount);
  }
  sprintf
            (output_buffer,"%d skeletons, %d bytes, %d models, %d bytes",g_SkeletonPoolCount,iVar4,
             g_DeformableModelCount,iVar1);
  return;
}
