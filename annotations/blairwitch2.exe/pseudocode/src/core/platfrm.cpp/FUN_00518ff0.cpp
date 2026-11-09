// Name: core_platfrm.cpp_FUN_00518ff0
// Address: 00518ff0
// Address Range: [[00518ff0, 0051907f]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_FUN_00518ff0(CPlatform *this_ptr,float goal_param,float movement_rate)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_FUN_00518ff0(CPlatform *this_ptr,float goal_param,float movement_rate)

{
  *(float *)&this_ptr->field_0x43c = goal_param;
  if (*(float *)&this_ptr->field_0x43c < 0.0) {
    *(uint *)&this_ptr->field_0x43c = 0;
  }
  if (1.0 < *(float *)&this_ptr->field_0x43c) {
    *(uint *)&this_ptr->field_0x43c = 0x3f800000;
  }
  *(float *)&this_ptr->field_0x440 = movement_rate;
  if (*(float *)&this_ptr->field_0x438 < goal_param) {
    *(uint *)&this_ptr->field_0x430 = 3;
  }
  if (goal_param < *(float *)&this_ptr->field_0x438) {
    *(uint *)&this_ptr->field_0x430 = 4;
  }
  if (this_ptr->field_0x5dc == '\0') {
    return;
  }
  (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x38))(this_ptr,&this_ptr->field_0x5dc);
  return;
}
