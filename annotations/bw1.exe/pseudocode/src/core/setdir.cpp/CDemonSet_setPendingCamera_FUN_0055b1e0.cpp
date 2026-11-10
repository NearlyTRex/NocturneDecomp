// Name: core_setdir.cpp_CDemonSet_setPendingCamera_FUN_0055b1e0
// Address: 0055b1e0
// Address Range: [[0055b1e0, 0055b1f8]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_setPendingCamera_FUN_0055b1e0(CDemonSet *this_ptr,int camera_index,float hold_time)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_setPendingCamera_FUN_0055b1e0(CDemonSet *this_ptr,int camera_index,float hold_time)

{
  this_ptr->pending_camera_index = camera_index;
  this_ptr->camera_switch_cooldown = hold_time;
  return;
}
