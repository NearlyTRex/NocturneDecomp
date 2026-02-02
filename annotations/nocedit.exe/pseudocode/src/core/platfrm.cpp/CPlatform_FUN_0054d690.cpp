// Name: core_platfrm.cpp_CPlatform_FUN_0054d690
// Address: 0054d690
// Address Range: [[0054d690, 0054d71f]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_FUN_0054d690(CPlatform *this_ptr)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_CPlatform_FUN_0054d690(CPlatform *this_ptr)

{
  float in_stack_00000008;
  float in_stack_0000000c;
  
  this_ptr->goal_param = in_stack_00000008;
  if (this_ptr->goal_param < 0.0) {
    this_ptr->goal_param = 0.0;
  }
  if (1.0 < this_ptr->goal_param) {
    this_ptr->goal_param = 1.0;
  }
  this_ptr->current_movement_rate = in_stack_0000000c;
  if (this_ptr->param < in_stack_00000008) {
    this_ptr->state = PLATFORM_STATE_TYPE_WTF|PLATFORM_STATE_TYPE_AT_END;
  }
  if (in_stack_00000008 < this_ptr->param) {
    this_ptr->state = 4;
  }
  if (this_ptr->start_sound[0] == '\0') {
    return;
  }
  (*((this_ptr->base).vtable._ub)->playAmbientSound)(&this_ptr->base,this_ptr->start_sound);
  return;
}
