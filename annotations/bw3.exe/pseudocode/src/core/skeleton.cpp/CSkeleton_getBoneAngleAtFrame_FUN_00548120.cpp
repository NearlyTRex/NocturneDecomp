// Name: core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00548120
// Address: 00548120
// Address Range: [[00548120, 0054813e]]
// Convention: __cdecl
// Signature: CQuaternion4f * __cdecl core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00548120(CSkeleton *this_ptr,int bone_index,int frame_index)

#include "nocturne.h"

CQuaternion4f * __cdecl core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00548120(CSkeleton *this_ptr,int bone_index,int frame_index)

{
  return this_ptr->bone_angle_frames + frame_index * this_ptr->bone_count + bone_index;
}
