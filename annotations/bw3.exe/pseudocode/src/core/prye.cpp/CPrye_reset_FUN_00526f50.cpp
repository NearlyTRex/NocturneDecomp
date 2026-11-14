// Name: core_prye.cpp_CPrye_reset_FUN_00526f50
// Address: 00526f50
// Address Range: [[00526f50, 00526fb4]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_reset_FUN_00526f50(CPrye *this_ptr)

#include "nocturne.h"

void __cdecl core_prye_cpp_CPrye_reset_FUN_00526f50(CPrye *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_hero_cpp_FUN_004d4410(this_ptr);
  this_ptr->ladder_to_descend = (CLadder *)0x0;
  this_ptr->weapon = (CWeapon *)0x0;
  (this_ptr->base).action_pending = 0;
  (this_ptr->base).base.layer_action_index = 0;
  (this_ptr->base).base.layer_action_t = 0.0;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004fc3f0
            (&this_ptr_00->base,"stand",0.0);
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,0,1);
  return;
}
