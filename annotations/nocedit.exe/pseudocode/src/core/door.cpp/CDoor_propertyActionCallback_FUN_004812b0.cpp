// Name: core_door.cpp_CDoor_propertyActionCallback_FUN_004812b0
// Address: 004812b0
// Address Range: [[004812b0, 0048131b]]
// Convention: __cdecl
// Signature: int __cdecl core_door_cpp_CDoor_propertyActionCallback_FUN_004812b0(CDoor *this_ptr,CActorProperty *property)

#include "nocturne.h"

int __cdecl
core_door_cpp_CDoor_propertyActionCallback_FUN_004812b0(CDoor *this_ptr,CActorProperty *property)

{
  CDoor *this_ptr_00;
  
  this_ptr_00 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c790
                                   (&this_ptr->base,g_CDoorClassInfo.name_hash);
  if (this_ptr_00->door_state == 2) {
    this_ptr_00->param = 0.0;
    this_ptr_00->door_state = 0;
    core_door_cpp_CDoor_reposition_FUN_0047fd20(this_ptr_00);
    return 1;
  }
  this_ptr_00->door_state = 2;
  this_ptr_00->param = this_ptr_00->max_param;
  core_door_cpp_CDoor_reposition_FUN_0047fd20(this_ptr_00);
  return 1;
}
