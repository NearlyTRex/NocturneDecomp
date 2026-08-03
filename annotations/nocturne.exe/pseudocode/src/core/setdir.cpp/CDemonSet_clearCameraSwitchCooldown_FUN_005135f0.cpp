// Name: core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_005135f0
// Address: 005135f0
// Address Range: [[005135f0, 0051360e]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_005135f0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_005135f0(CDemonSet *this_ptr)

{
  if (this_ptr->camera_switch_cooldown <= 0.0) {
    return;
  }
  this_ptr->camera_switch_cooldown = 1e-20;
  return;
}
