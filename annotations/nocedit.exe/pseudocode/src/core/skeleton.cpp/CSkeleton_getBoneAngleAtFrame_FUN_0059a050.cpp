// Name: core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
// Address: 0059a050
// Address Range: [[0059a050, 0059a06e]]
// Convention: __cdecl
// Signature: CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050(CSkeleton * this_ptr, int bone_index, int frame_index)

#include "nocturne.h"

CQuaternion4f * __cdecl
core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
          (CSkeleton *this_ptr,int bone_index,int frame_index)

{
  return this_ptr->bone_angle_frames + frame_index * this_ptr->bone_count + bone_index;
}
