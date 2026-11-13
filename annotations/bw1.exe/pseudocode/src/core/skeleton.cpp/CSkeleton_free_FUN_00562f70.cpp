// Name: core_skeleton.cpp_CSkeleton_free_FUN_00562f70
// Address: 00562f70
// Address Range: [[00562f70, 00562ff2]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CSkeleton_free_FUN_00562f70(CSkeleton *this_ptr,int free_motion_list)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CSkeleton_free_FUN_00562f70(CSkeleton *this_ptr,int free_motion_list)

{
  if (free_motion_list != 0) {
    core_morph_cpp_FUN_00523910(this_ptr);
  }
  this_ptr->bone_count = 0;
  this_ptr->frame_count = 0;
  FUN_005c0336(this_ptr->bone_angle_frames);
  FUN_005c0336(this_ptr->frame_positions_1);
  FUN_005c0336(this_ptr->frame_positions_2);
  this_ptr->bone_angle_frames = (CQuaternion4f *)0x0;
  this_ptr->frame_positions_1 = (CVector3f *)0x0;
  this_ptr->frame_positions_2 = (CVector3f *)0x0;
  this_ptr->loaded_filename[0] = '\0';
  return;
}
