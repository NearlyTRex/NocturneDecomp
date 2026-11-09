// Name: core_platfrm.cpp_FUN_0053a340
// Address: 0053a340
// Address Range: [[0053a340, 0053a3cf]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_FUN_0053a340(CPlatform *this_ptr,float goal_param,float movement_rate)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_FUN_0053a340(CPlatform *this_ptr,float goal_param,float movement_rate)

{
  *(float *)&this_ptr->field_0x2e0 = goal_param;
  if (*(float *)&this_ptr->field_0x2e0 < 0.0) {
    *(uint *)&this_ptr->field_0x2e0 = 0;
  }
  if (1.0 < *(float *)&this_ptr->field_0x2e0) {
    *(uint *)&this_ptr->field_0x2e0 = 0x3f800000;
  }
  *(float *)&this_ptr->field_0x2e4 = movement_rate;
  if (*(float *)&this_ptr->field_0x2dc < goal_param) {
    *(uint *)&this_ptr->field_0x2d4 = 3;
  }
  if (goal_param < *(float *)&this_ptr->field_0x2dc) {
    *(uint *)&this_ptr->field_0x2d4 = 4;
  }
  if (this_ptr->field_0x480 == '\0') {
    return;
  }
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x30))(this_ptr,&this_ptr->field_0x480);
  return;
}
