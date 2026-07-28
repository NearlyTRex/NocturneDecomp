// Name: core_platfrm.cpp_CPlatform_startMovement_FUN_004f6bd0
// Address: 004f6bd0
// Address Range: [[004f6bd0, 004f6c5f]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_startMovement_FUN_004f6bd0(CPlatform *this_ptr,float goal_param,float movement_rate)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_CPlatform_startMovement_FUN_004f6bd0(CPlatform *this_ptr,float goal_param,float movement_rate)

{
  this_ptr->goal_param = goal_param;
  if (this_ptr->goal_param < 0.0) {
    this_ptr->goal_param = 0.0;
  }
  if (1.0 < this_ptr->goal_param) {
    this_ptr->goal_param = 1.0;
  }
  this_ptr->current_movement_rate = movement_rate;
  if (this_ptr->param < goal_param) {
    this_ptr->state = PLATFORM_STATE_TYPE_WTF|PLATFORM_STATE_TYPE_AT_END;
  }
  if (goal_param < this_ptr->param) {
    this_ptr->state = 4;
  }
  if (this_ptr->start_sound[0] == '\0') {
    return;
  }
  (*((this_ptr->base).vtable._ub)->playAmbientSound)(&this_ptr->base,this_ptr->start_sound);
  return;
}
