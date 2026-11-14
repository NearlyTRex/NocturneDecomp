// Name: core_skeleton.cpp_getMemoryStats_FUN_0056b780
// Address: 0056b780
// Address Range: [[0056b780, 0056b829]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_getMemoryStats_FUN_0056b780(char *output_buffer)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_getMemoryStats_FUN_0056b780(char *output_buffer)

{
  int iVar1;
  CSkeleton *this_ptr;
  
  this_ptr = g_SkeletonPool;
  iVar1 = 0;
  do {
    core_skeleton_cpp_CSkeleton_calculateFrameDataSize_FUN_00563670(this_ptr);
    iVar1 = iVar1 + 1;
    this_ptr = this_ptr + 1;
  } while (iVar1 < 0x28);
  iVar1 = 0;
  do {
    core_skeleton_cpp_CDeformableModel_calculateMemorySize_FUN_00567310
              (g_DeformableModelPool + iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x40);
  _sprintf(output_buffer,"%d skeletons, %d bytes, %d models, %d bytes");
  return;
}
