// Name: core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00540f10
// Address: 00540f10
// Address Range: [[00540f10, 00540f2e]]
// Convention: __cdecl
// Signature: CQuaternion4f * __cdecl core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00540f10(CSkeleton *this_ptr,int bone_index,int frame_index)

#include "nocturne.h"

CQuaternion4f * __cdecl core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00540f10(CSkeleton *this_ptr,int bone_index,int frame_index)

{
  return (CQuaternion4f *)
         ((frame_index * *(int *)&this_ptr->field_0x1d1f8 + bone_index) * 0x10 +
         *(int *)&this_ptr->field_0x1e010);
}
