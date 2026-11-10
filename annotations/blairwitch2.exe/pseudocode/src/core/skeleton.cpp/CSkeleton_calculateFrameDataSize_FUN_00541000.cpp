// Name: core_skeleton.cpp_CSkeleton_calculateFrameDataSize_FUN_00541000
// Address: 00541000
// Address Range: [[00541000, 00541019]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CSkeleton_calculateFrameDataSize_FUN_00541000(CSkeleton *this_ptr)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CSkeleton_calculateFrameDataSize_FUN_00541000(CSkeleton *this_ptr)

{
  return (this_ptr->bone_count * 0x10 + 0x18) * this_ptr->frame_count;
}
