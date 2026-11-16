// Name: core_door.cpp_CDoor_setState_FUN_0045efe0
// Address: 0045efe0
// Address Range: [[0045efe0, 0045f018]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_setState_FUN_0045efe0(CDoor *this_ptr,EDoorState state)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_setState_FUN_0045efe0(CDoor *this_ptr,EDoorState state)

{
  this_ptr->door_state = state;
  if (state == DOOR_STATE_CLOSED) {
    this_ptr->param = 0.0;
  }
  if (this_ptr->door_state == DOOR_STATE_OPEN) {
    this_ptr->param = this_ptr->max_param;
  }
  core_door_cpp_CDoor_reposition_FUN_0045f030(this_ptr);
  return;
}
