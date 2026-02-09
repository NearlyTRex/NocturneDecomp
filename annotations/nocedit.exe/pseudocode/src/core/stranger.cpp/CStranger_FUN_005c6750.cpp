// Name: core_stranger.cpp_CStranger_FUN_005c6750
// Address: 005c6750
// Address Range: [[005c6750, 005c67b4]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005c6750(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005c6750(CStranger *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_hero_cpp_CHero_FUN_004f3b20(&this_ptr->base);
  this_ptr->ladder_to_descend = (CDemonActor *)0x0;
  this_ptr->weapon = (CDemonActor *)0x0;
  this_ptr->action_pending = 0;
  (this_ptr->base).base.layer_action_index = 0;
  (this_ptr->base).base.layer_action_t = 0.0;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
            (&this_ptr_00->motion_controller,"stand",0.0);
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&this_ptr_00->motion_controller,0,1);
  return;
}
