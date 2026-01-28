// Name: core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20
// Address: 00575b20
// Address Range: [[00575b20, 00575b3e]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20(CDemonSet *this_ptr)

{
  if (this_ptr->camera_switch_cooldown <= 0.0) {
    return;
  }
  this_ptr->camera_switch_cooldown = 1e-20;
  return;
}
