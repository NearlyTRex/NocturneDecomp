// Name: core_stranger.cpp_CStranger_reset_FUN_00540820
// Address: 00540820
// Address Range: [[00540820, 00540884]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_reset_FUN_00540820(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_reset_FUN_00540820(CStranger *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_hero_cpp_CHero_reset_FUN_004b5ec0(&this_ptr->base);
  this_ptr->ladder_to_descend = (CLadder *)0x0;
  this_ptr->weapon = (CWeapon *)0x0;
  this_ptr->action_pending = 0;
  (this_ptr->base).base.layer_action_index = 0;
  (this_ptr->base).base.layer_action_t = 0.0;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004e1960
            (&this_ptr_00->motion_controller,"stand",0.0);
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
            (&this_ptr_00->motion_controller,0,1);
  return;
}
