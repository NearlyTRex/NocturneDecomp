// Name: core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00540bc0
// Address: 00540bc0
// Address Range: [[00540bc0, 00540bde]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00540bc0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00540bc0(CDemonSet *this_ptr)

{
  if (this_ptr->camera_switch_cooldown <= 0.0) {
    return;
  }
  this_ptr->camera_switch_cooldown = 1e-20;
  return;
}
