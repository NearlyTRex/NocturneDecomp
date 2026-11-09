// Name: core_skeleton.cpp_CSkeleton_getBoneAngleAtFrame_FUN_00563580
// Address: 00563580
// Address Range: [[00563580, 0056359e]]
// Convention: __cdecl
// Signature: CQuaternion4f * __cdecl core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00563580(CSkeleton *this_ptr,int bone_index,int frame_index)

#include "nocturne.h"

CQuaternion4f * __cdecl core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00563580(CSkeleton *this_ptr,int bone_index,int frame_index)

{
  return (CQuaternion4f *)
         ((frame_index * *(int *)&this_ptr->field_0x1de78 + bone_index) * 0x10 +
         *(int *)&this_ptr->field_0x1ec90);
}
