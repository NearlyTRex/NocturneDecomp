// Name: core_door.cpp_CDoor_processInEditor_FUN_00481590
// Address: 00481590
// MANUAL RECONSTRUCTION
// Address Range: [[00481590, 00481620]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_processInEditor_FUN_00481590(CDoor *this_ptr)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_processInEditor_FUN_00481590(CDoor *this_ptr)

{
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  if (this_ptr->door_state == DOOR_STATE_CLOSED) {
    this_ptr->orig_pos = (this_ptr->base).location.position;
    this_ptr->orig_orient = (this_ptr->base).orient.vec;
  }
  if (this_ptr->door_state != DOOR_STATE_CLOSED) {
    if (this_ptr->door_state == DOOR_STATE_OPEN) {
      this_ptr->param = this_ptr->max_param;
      return;
    }
    this_ptr->param = 0.0;
    this_ptr->door_state = DOOR_STATE_CLOSED;
    return;
  }
  this_ptr->param = 0.0;
  return;
}
