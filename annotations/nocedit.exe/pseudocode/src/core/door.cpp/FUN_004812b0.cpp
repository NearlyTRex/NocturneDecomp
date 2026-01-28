// Name: core_door.cpp_FUN_004812b0
// Address: 004812b0
// Address Range: [[004812b0, 0048131b]]
// Convention: __cdecl
// Signature: int __cdecl core_door_cpp_FUN_004812b0(void)

#include "nocturne.h"

int __cdecl core_door_cpp_FUN_004812b0(void)

{
  CDoor *this_ptr;
  CDemonActor *in_stack_00000004;
  
  this_ptr = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c790
                                (in_stack_00000004,g_CDoorClassInfo.name_hash);
  if (this_ptr->door_state == 2) {
    this_ptr->param = 0.0;
    this_ptr->door_state = 0;
    core_door_cpp_CDoor_reposition_FUN_0047fd20(this_ptr);
    return 1;
  }
  this_ptr->door_state = 2;
  this_ptr->param = this_ptr->max_param;
  core_door_cpp_CDoor_reposition_FUN_0047fd20(this_ptr);
  return 1;
}
