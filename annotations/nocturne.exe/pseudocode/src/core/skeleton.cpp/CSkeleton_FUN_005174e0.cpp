// Name: core_skeleton.cpp_CSkeleton_FUN_005174e0
// Address: 005174e0
// Address Range: [[005174e0, 00517557]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CSkeleton_FUN_005174e0(CSkeleton *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CSkeleton_FUN_005174e0(CSkeleton *this_ptr)

{
  this_ptr->bone_count = 0;
  this_ptr->frame_count = 0;
  shape_memdbg_cpp_free_FUN_00564486(this_ptr->bone_angle_frames);
  if (this_ptr->frame_positions_1 != (CVector3f *)0x0) {
    shape_memdbg_cpp_free_FUN_00564486(&this_ptr->frame_positions_1[-1].z);
  }
  if (this_ptr->frame_positions_2 != (CVector3f *)0x0) {
    shape_memdbg_cpp_free_FUN_00564486(&this_ptr->frame_positions_2[-1].z);
  }
  this_ptr->frame_positions_1 = (CVector3f *)0x0;
  this_ptr->frame_positions_2 = (CVector3f *)0x0;
  this_ptr->bone_angle_frames = (CQuaternion4f *)0x0;
  return;
}
