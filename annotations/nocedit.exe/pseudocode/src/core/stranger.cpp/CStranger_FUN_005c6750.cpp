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
  this_ptr->unk5[4] = '\0';
  this_ptr->unk5[5] = '\0';
  this_ptr->unk5[6] = '\0';
  this_ptr->unk5[7] = '\0';
  this_ptr->unk5[8] = '\0';
  this_ptr->unk5[9] = '\0';
  this_ptr->unk5[10] = '\0';
  this_ptr->unk5[0xb] = '\0';
  this_ptr->action_pending = 0;
  (this_ptr->base).base.field47_0x2a8c = 0;
  (this_ptr->base).base.field48_0x2a90 = 0;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
            (&this_ptr_00->motion_controller,"stand",0.0);
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&this_ptr_00->motion_controller,0,1);
  return;
}
