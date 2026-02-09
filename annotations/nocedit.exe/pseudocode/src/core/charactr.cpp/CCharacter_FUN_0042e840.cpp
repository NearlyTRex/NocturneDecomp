// Name: core_charactr.cpp_CCharacter_FUN_0042e840
// Address: 0042e840
// Address Range: [[0042e840, 0042e8b7]]
// Convention: __cdecl
// Signature: float __cdecl core_charactr_cpp_CCharacter_FUN_0042e840(CCharacter *this_ptr)

#include "nocturne.h"

float __cdecl core_charactr_cpp_CCharacter_FUN_0042e840(CCharacter *this_ptr)

{
  int in_stack_00000008;
  float local_18;
  
  local_18 = 0.0;
  if (in_stack_00000008 == this_ptr->layer_actions[this_ptr->layer_action_index].to_bone_index) {
    local_18 = this_ptr->layer_action_t;
  }
  if (in_stack_00000008 != this_ptr->layer_actions[this_ptr->layer_action_index].from_bone_index) {
    return local_18;
  }
  return (1.0 - this_ptr->layer_action_t) + local_18;
}
