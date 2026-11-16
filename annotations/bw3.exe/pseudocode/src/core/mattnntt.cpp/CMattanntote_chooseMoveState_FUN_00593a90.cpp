// Name: core_mattnntt.cpp_CMattanntote_chooseMoveState_FUN_00593a90
// Address: 00593a90
// Address Range: [[00593a90, 00593adc]]
// Convention: __cdecl
// Signature: void __cdecl core_mattnntt_cpp_CMattanntote_chooseMoveState_FUN_00593a90(CMattanntote *this_ptr)

#include "nocturne.h"

void __cdecl core_mattnntt_cpp_CMattanntote_chooseMoveState_FUN_00593a90(CMattanntote *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  int iVar1;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  this_ptr->attack_committed = 0;
  if (this_ptr->run_mode == 0) {
    iVar1 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
    if (iVar1 < 0x55) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,1,1);
      return;
    }
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&this_ptr_00->base,2,1);
  return;
}
