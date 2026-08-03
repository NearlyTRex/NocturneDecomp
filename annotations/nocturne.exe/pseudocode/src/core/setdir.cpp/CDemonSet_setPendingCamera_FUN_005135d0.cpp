// Name: core_setdir.cpp_CDemonSet_setPendingCamera_FUN_005135d0
// Address: 005135d0
// Address Range: [[005135d0, 005135e8]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_setPendingCamera_FUN_005135d0(CDemonSet *this_ptr,int camera_index,float hold_time)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_setPendingCamera_FUN_005135d0(CDemonSet *this_ptr,int camera_index,float hold_time)

{
  this_ptr->pending_camera_index = camera_index;
  this_ptr->camera_switch_cooldown = hold_time;
  return;
}
