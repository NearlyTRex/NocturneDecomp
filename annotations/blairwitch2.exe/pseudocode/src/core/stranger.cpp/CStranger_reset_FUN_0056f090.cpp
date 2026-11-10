// Name: core_stranger.cpp_CStranger_reset_FUN_0056f090
// Address: 0056f090
// Address Range: [[0056f090, 0056f0f4]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_reset_FUN_0056f090(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_reset_FUN_0056f090(CStranger *this_ptr)

{
  core_hero_cpp_CHero_reset_FUN_004d02e0((CHero *)this_ptr);
  this_ptr->ladder_to_descend = (CLadder *)0x0;
  this_ptr->weapon = (CWeapon *)0x0;
  this_ptr->action_pending = 0;
  *(uint *)&this_ptr->field_0x2d04 = 0;
  *(uint *)&this_ptr->field_0x2d08 = 0;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00503950
            ((CMotionController *)&this_ptr->field_0x2b4,"stand",0.0);
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&this_ptr->field_0x2b4,0,1);
  return;
}
