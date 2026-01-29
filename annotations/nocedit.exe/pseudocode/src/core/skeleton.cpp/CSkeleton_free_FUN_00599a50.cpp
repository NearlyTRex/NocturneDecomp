// Name: core_skeleton.cpp_CSkeleton_free_FUN_00599a50
// Address: 00599a50
// Address Range: [[00599a50, 00599b0e]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CSkeleton_free_FUN_00599a50(CSkeleton *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CSkeleton_free_FUN_00599a50(CSkeleton *this_ptr)

{
  this_ptr->bone_count = 0;
  this_ptr->frame_count = 0;
  g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
  g_CurrentDebugLine = 0xe6;
  shape_memdbg_cpp_free_FUN_005fe659(this_ptr->bone_angle_frames);
  g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
  g_CurrentDebugLine = 0xe7;
  if (this_ptr->frame_positions_1 != (CVector3f *)0x0) {
    shape_memdbg_cpp_free_FUN_005fe659(&this_ptr->frame_positions_1[-1].z);
  }
  g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
  g_CurrentDebugLine = 0xe8;
  if (this_ptr->frame_positions_2 != (CVector3f *)0x0) {
    shape_memdbg_cpp_free_FUN_005fe659(&this_ptr->frame_positions_2[-1].z);
  }
  this_ptr->frame_positions_1 = (CVector3f *)0x0;
  this_ptr->frame_positions_2 = (CVector3f *)0x0;
  this_ptr->bone_angle_frames = (CQuaternion4f *)0x0;
  return;
}
