// Name: core_stranger.cpp_CStranger_reset_FUN_00591ce0
// Address: 00591ce0
// Address Range: [[00591ce0, 00591d44]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_reset_FUN_00591ce0(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_reset_FUN_00591ce0(CStranger *this_ptr)

{
  core_hero_cpp_CHero_reset_FUN_004ec570((CHero *)this_ptr);
  this_ptr->ladder_to_descend = (CLadder *)0x0;
  this_ptr->weapon = (CWeapon *)0x0;
  *(uint *)&this_ptr->field_0x1ff5c = 0;
  *(uint *)&this_ptr->field_0x2c98 = 0;
  *(uint *)&this_ptr->field_0x2c9c = 0;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00524ae0
            ((CMotionController *)&this_ptr->field_0x158,"stand",0.0);
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            ((CMotionController *)&this_ptr->field_0x158,0,1);
  return;
}
