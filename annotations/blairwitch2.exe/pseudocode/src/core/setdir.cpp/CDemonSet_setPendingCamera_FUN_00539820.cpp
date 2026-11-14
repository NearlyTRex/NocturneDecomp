// Name: core_setdir.cpp_CDemonSet_setPendingCamera_FUN_00539820
// Address: 00539820
// Address Range: [[00539820, 00539838]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_setPendingCamera_FUN_00539820(CDemonSet *this_ptr,int camera_index,float hold_time)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_setPendingCamera_FUN_00539820(CDemonSet *this_ptr,int camera_index,float hold_time)

{
  this_ptr->pending_camera_index = camera_index;
  this_ptr->camera_switch_cooldown = hold_time;
  return;
}
