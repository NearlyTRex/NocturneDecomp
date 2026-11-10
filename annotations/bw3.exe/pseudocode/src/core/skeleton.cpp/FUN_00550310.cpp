// Name: core_skeleton.cpp_FUN_00550310
// Address: 00550310
// Address Range: [[00550310, 005503b9]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_FUN_00550310(char *output_buffer)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_FUN_00550310(char *output_buffer)

{
  int iVar1;
  CSkeleton *this_ptr;
  
  this_ptr = g_SkeletonPool;
  iVar1 = 0;
  do {
    core_skeleton_cpp_CSkeleton_calculateFrameDataSize_FUN_00548210(this_ptr);
    iVar1 = iVar1 + 1;
    this_ptr = this_ptr + 1;
  } while (iVar1 < 0x28);
  iVar1 = 0;
  do {
    core_skeleton_cpp_CDeformableModel_calculateMemorySize_FUN_0054bea0
              (g_DeformableModelPool + iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x40);
  _sprintf(output_buffer,"%d skeletons, %d bytes, %d models, %d bytes");
  return;
}
