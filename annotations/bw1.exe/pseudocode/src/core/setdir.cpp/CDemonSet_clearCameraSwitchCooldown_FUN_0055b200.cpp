// Name: core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_0055b200
// Address: 0055b200
// Address Range: [[0055b200, 0055b21e]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_0055b200(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_0055b200(CDemonSet *this_ptr)

{
  if (this_ptr->camera_switch_cooldown <= 0.0) {
    return;
  }
  this_ptr->camera_switch_cooldown = 1e-20;
  return;
}
