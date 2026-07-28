// Name: core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_005135f0
// Address: 005135f0
// Address Range: [[005135f0, 0051360e]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_005135f0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_005135f0(CDemonSet *this_ptr)

{
  if ((float)this_ptr->renderable_actors[0x777] <= 0.0) {
    return;
  }
  this_ptr->renderable_actors[0x777] = (CDemonActor *)0x1e3ce508;
  return;
}
