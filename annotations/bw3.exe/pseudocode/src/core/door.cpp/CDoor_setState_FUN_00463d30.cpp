// Name: core_door.cpp_CDoor_setState_FUN_00463d30
// Address: 00463d30
// Address Range: [[00463d30, 00463d68]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_setState_FUN_00463d30(CDoor *this_ptr,EDoorState state)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_setState_FUN_00463d30(CDoor *this_ptr,EDoorState state)

{
  this_ptr->door_state = state;
  if (state == DOOR_STATE_CLOSED) {
    this_ptr->param = 0.0;
  }
  if (this_ptr->door_state == DOOR_STATE_OPEN) {
    this_ptr->param = this_ptr->max_param;
  }
  core_door_cpp_CDoor_reposition_FUN_00463d80(this_ptr);
  return;
}
