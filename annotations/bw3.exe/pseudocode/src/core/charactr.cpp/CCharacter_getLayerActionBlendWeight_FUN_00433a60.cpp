// Name: core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60
// Address: 00433a60
// Address Range: [[00433a60, 00433ad7]]
// Convention: __cdecl
// Signature: float __cdecl core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(CCharacter *this_ptr,int state_index)

#include "nocturne.h"

float __cdecl core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(CCharacter *this_ptr,int state_index)

{
  float local_18;
  
  local_18 = 0.0;
  if (state_index == *(int *)(this_ptr->layer_actions + this_ptr->layer_action_index * 0x38 + 4)) {
    local_18 = this_ptr->layer_action_t;
  }
  if (state_index != *(int *)(this_ptr->layer_actions + this_ptr->layer_action_index * 0x38)) {
    return local_18;
  }
  return (1.0 - this_ptr->layer_action_t) + local_18;
}
