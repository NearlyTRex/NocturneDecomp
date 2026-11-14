// Name: core_skeleton.cpp_getMemoryStats_FUN_005490d0
// Address: 005490d0
// Address Range: [[005490d0, 00549179]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_getMemoryStats_FUN_005490d0(char *output_buffer)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_getMemoryStats_FUN_005490d0(char *output_buffer)

{
  int iVar1;
  CSkeleton *this_ptr;
  
  this_ptr = g_SkeletonPool;
  iVar1 = 0;
  do {
    core_skeleton_cpp_CSkeleton_calculateFrameDataSize_FUN_00541000(this_ptr);
    iVar1 = iVar1 + 1;
    this_ptr = this_ptr + 1;
  } while (iVar1 < 0x28);
  iVar1 = 0;
  do {
    core_skeleton_cpp_CDeformableModel_calculateMemorySize_FUN_00544c70
              (g_DeformableModelPool + iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x40);
  _sprintf(output_buffer,"%d skeletons, %d bytes, %d models, %d bytes");
  return;
}
