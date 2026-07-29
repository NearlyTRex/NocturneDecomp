// Name: core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
// Address: 0042a9d0
// Address Range: [[0042a9d0, 0042aa47]]
// Convention: __cdecl
// Signature: float __cdecl core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0(CCharacter *this_ptr,int state_index)

#include "nocturne.h"

float __cdecl core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0(CCharacter *this_ptr,int state_index)

{
  float local_18;
  
  local_18 = 0.0;
  if (state_index == this_ptr->layer_actions[this_ptr->layer_action_index].to_bone_index) {
    local_18 = this_ptr->layer_action_t;
  }
  if (state_index != this_ptr->layer_actions[this_ptr->layer_action_index].from_bone_index) {
    return local_18;
  }
  return (1.0 - this_ptr->layer_action_t) + local_18;
}
