// Name: core_stranger.cpp_CStranger_dropRightHandObject_FUN_0058ce20
// Address: 0058ce20
// Address Range: [[0058ce20, 0058ce71]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_dropRightHandObject_FUN_0058ce20(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_dropRightHandObject_FUN_0058ce20(CStranger *this_ptr)

{
  this_ptr->action_timer = 4.0;
  if (*(CWeapon **)&this_ptr->field_0x2628 == this_ptr->weapon) {
    this_ptr->weapon = (CWeapon *)0x0;
  }
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,1,0);
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            ((CMotionController *)&this_ptr->field_0x158,0,1);
  return;
}
