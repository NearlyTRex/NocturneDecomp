// Name: core_skeleton.cpp_CSkeleton_calculateFrameDataSize_FUN_0059a140
// Address: 0059a140
// Address Range: [[0059a140, 0059a159]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CSkeleton_calculateFrameDataSize_FUN_0059a140(CSkeleton *this_ptr)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CSkeleton_calculateFrameDataSize_FUN_0059a140(CSkeleton *this_ptr)

{
  return (this_ptr->bone_count * 0x10 + 0x18) * this_ptr->frame_count;
}
